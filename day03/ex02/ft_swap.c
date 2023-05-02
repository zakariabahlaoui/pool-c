#include<stdio.h>

void ft_swap(int *a, int *b);

int main ()
{
    int n, k;
    n = 30 ;
    k = 40 ;
    ft_swap(&n,&k);
    printf("%d\n%d\n",n,k);

    return 0 ;

}
void ft_swap(int *a, int *b)
{
    int c ;
    c = *b ;
    *b = *a ;
    *a = c ;
    
}