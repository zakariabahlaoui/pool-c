#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{   
    int i;
    int *tab;
    int size;
    
    if(min > max)
        return NULL;

    size = max - min;
    tab = malloc(size * sizeof(int));

    i = 0 ;
    while(min < max)
    {
        tab[i] = min ;
        min++;
        i++;
    }

    return tab;
}

int main()
{
    int i;
    int *range = ft_range(-10,-5);
    i = 0;
    while(i < 5)
    {
        printf("%d ",range[i]);
        i++;
    }
    printf("\n");

    return 0;
}
