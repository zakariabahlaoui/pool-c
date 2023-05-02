#include <stdio.h>

void ft_ft(int *nbr);

int main ()
{
    int v = 69;
    ft_ft(&v);
    printf("%d\n", v);
    return 0;
}

void ft_ft(int *nbr)
{
    *nbr = 42;
}
    
