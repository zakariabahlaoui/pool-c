#include<stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main ()
{
    int n, k ;
    n = 60 ;
    k = 7  ;
    ft_ultimate_div_mod(&n, &k);
    printf("%d\n%d\n",n,k);
}
void ft_ultimate_div_mod(int *a, int *b)
{
    int c, d ;
    c = *a / *b ;
    d = *a % *b ;

    *a = c ;
    *b = d ;
}