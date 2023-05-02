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

int ft_find_next_prime(int nb)
{
 /* while(!ft_is_prime(nb))
    {
        nb++;
    }
    return nb;*/
    int i = nb;
    while(1)
    {
        if(ft_is_prime(i))
            return i  ;
        i++;
    }
    return nb ;
}

int main()
{
    int prime;
    prime = ft_find_next_prime(17);
    printf("%d\n",prime);
    
    return ;0
}