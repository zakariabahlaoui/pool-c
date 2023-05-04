#include <stdio.h>
#include <stdlib.h>

int ft_stock(int ca)
{
    return ca * 2;
}

int *ft_map(int *tab, int length, int (*f)(int))
{
    int *r;
    int i;

    i = 0;
    r = (int *)malloc(sizeof(int) * length);
    while (i < length)
    {
        r[i] = f(tab[i]);
        i++;
    }
    return r;
}

int main()
{
    int tab[] = {3, 7, 1, 9};
    int length = 4;
    int *tabva;

    tabva = ft_map(tab, length, &ft_stock);

    int i = 0;
    while (i < length)
    {
        printf("%d\n", tabva[i]);
        i++;
    }

    return 0;
}