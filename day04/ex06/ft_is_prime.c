#include<stdio.h>

int ft_is_prime(int nb)
{
    int i ;
    int half ;

    if(nb <= 1)
        return 0 ;

    i = 2;
    half = nb/2 ;
    while(i <= half)
    {
        if ( nb % i == 0)
            return 0 ;
        
        i++;
        
    }
    return 1 ;
}

int main()
{
    int prime;
    prime = ft_is_prime(7);
    printf("%d\n",prime);
}