#include<stdio.h>

int ft_iterative_factorial(int nb)
{
    int i ;
    int result ;
    result = 1 ;
    i = 1 ;

    if (nb < 0)
        return 0 ;
    
    while (i <= nb)
    {
        result = result * i ;
        i++;
    }
        
    return result ; 
}

int main ()
{
    int fact;
    fact = ft_iterative_factorial(4);
    printf("%d\n",fact);
    return 0 ;
}