#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{   
    int i;
    int size;

    if(min > max)
         return 0;

    size = max - min;
    *range = malloc(size * sizeof(int));
    if (*range == NULL)
        return -1;
    i = 0 ;
    while(min < max)
    {
        (*range)[i] = min ;
        min++;
        i++;
    }

    return i;
}

int main()
{
    int *r;
    int i;

    int size = ft_ultimate_range(&r,3,9);
    printf("size: %d\n", size);

    i = 0;
    while(i < size)
    {
        printf("%d\n", r[i]);
        i++;        
    }
    return 0;
}