#include<stdio.h>

int ft_recursive_factorial(int nb)
{
    
    if (nb < 1)
        return 1 ;
    
    return nb * ft_recursive_factorial(nb - 1); 
}

int main ()
{
    int f ;
    f = ft_recursive_factorial(4);
    printf("%d\n",f);
    
    return 0 ;
}