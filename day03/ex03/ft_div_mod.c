#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main ()
{
    int n , k, div , mod ;
    n = 60 ; 
    k = 7  ;
    ft_div_mod(n, k, &div, &mod);
    printf("%d\n%d\n",div,mod);

}
void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a/b ;
    *mod = a%b ;
}