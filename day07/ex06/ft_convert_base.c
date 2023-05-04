#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_len(char *str)
{
    int i = 0;
    while(str[i])
        i++;

    return i;    
}

int ft_index_of(const char *str , char c)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] == c)
            return i;
        i++;    
    }
    return -1;
}

int ft_atoi_base(char *str, char *base)
{
    int i;
    int r;
    int b;
    int len;

    len = 0;
    while(base[len])
        len++;

    i = 0;
    b = 0;
    while(str[i] != 0)
    {
        r = ft_index_of(base, str[i]);
        b = (b * len) + r;   
        i++;
    }
    return b;
}

void ft_number_to_base( int nb, char *base,char *buffer)
{
    int i;
    int j;
    int r;
    int size;
    char stck[33];

    size = ft_len(base);
    
    i = 0;
    while(nb != 0)
    {
        r = nb % size;
        nb = nb / size;
        stck[i] = base[r];
        i++;
    }
    i--;
    j = 0;
    while(i >= 0)
    {
        buffer[j] = stck[i];
        i--;
        j++;
    }
    buffer[j] = '\0';   
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    char buffer[33];
    char *dup;
    int nb ;

    nb = ft_atoi_base(nbr,base_from);
    
    ft_number_to_base(nb,base_to,buffer);
    dup = strdup(buffer);
    
    return dup;
}
int main()
{
    char *hex = "0123456789abcdef";
    //char *oct = "01234567";
    char *dec = "0123456789";

   char *str = ft_convert_base("766",dec,hex);

   printf("%s \n",str);
}
