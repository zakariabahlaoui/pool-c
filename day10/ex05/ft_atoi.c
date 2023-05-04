#include "do_op.h"

int ft_atoi(char *str)
{
    int dec ;
    int i ; 
    int negative ;
    dec = 0;
    i = 0;
    negative = 1 ;
    
    while (str[i] == ' '||str[i] == '\f'||str[i] == '\r' ||str[i] == '\t'||str[i] == '\n'||str[i] == '\n')
        i++;    
    if (str[i] == '+')
        i++;    
    else if (str[i] == '-')
    {
        i++;
        negative = -1 ;
    }    
    while ( str[i] >= '0' && str[i]<= '9')
    {
        dec = dec *10 + (str[i] - '0') ;
        i++;
    }
    return dec * negative;
}