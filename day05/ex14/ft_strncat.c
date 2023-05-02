#include<stdio.h>

char *ft_strncat(char *dest, char *src, int nb)
{
    int i ;
    int j ;
    i = 0 ;
    while(dest[i])
    {
        i++;
    }
    j = 0 ;
    while(src[j] != 0)
    {
        dest[i] = src[j];
        if(j == nb)
        {
            dest[i] = '\0';
            return dest;
        }
        j++;
        i++;
    }

    dest[i] = '\0';

    return dest;
}

int main()
{
    char src[30]="world";
    char dest[18]="hello";
    ft_strncat(dest, src,44);
    printf("%s\n",dest);
}