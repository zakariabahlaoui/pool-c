#include <stdio.h>

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

int main()
{
    int r;
    char str[]="d";
    r = ft_atoi_base(str,"0123456789abcdef");
    printf("%d\n",r);
}
