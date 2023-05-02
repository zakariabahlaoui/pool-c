#include<stdio.h>

int ft_sqrt(int nb)
{
    int i = 1 ;
    int r = 0 ;

    /*while (i * i < nb)
        i++;

    if (i * i == nb)
        return i;
    return 0;*/

    while (1)
    {
        r = i * i ;
        if (r == nb)
        {
            return i ;
        }    
        if (r > nb)
        {
            return 0 ;
        }
    
            i++;
        }
    return i ;
    
}

int main()
{
    int racine;
    racine = ft_sqrt(77);
    printf("%d\n",racine);
}