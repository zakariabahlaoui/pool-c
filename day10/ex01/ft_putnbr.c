#include <unistd.h>
#include "ft_stock.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
    
}

int ft_power(int n)
{
    int r ;
    r = 1;
    while(n >= 10|| n<=-10)
    {
        n = n/10;
        r = r * 10;
    }
    
    return r;
}

void ft_putnbr(int n )
{
    int r ;
    int power = ft_power(n);
    if (n == 0) { ft_putchar('0'); }
    else
    {
        if (n < 0)
        {
            ft_putchar('-');
            while ( n < 0)
            {
                r = n / power;
                ft_putchar( r * -1 + '0');
                n = n - (r * power);
                power = power / 10;
            }
        }
        else if (n > 0)
        {       
            while ( n > 0)
            {
                ft_putchar((n/power) + '0');
                n = n - ((n/power)* power);
                power = power / 10;
            }
        }
    }
}
   