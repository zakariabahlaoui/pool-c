#include <unistd.h>
#include <stdio.h>
#include "ft_opp.h"

int ft_add(int x,int y )
{
    return x + y;
}

int ft_sub(int x,int y )
{
    return x - y;
}

int ft_mul(int x,int y )
{
    return x * y;
}

int ft_div(int x,int y )
{
    
    return x / y;
}

int ft_mod(int x,int y )
{
    return x % y;
}
int ft_usage(int x,int y )
{
    return 0;
}

int error_div(void)
{
    printf("Stop : division by ");
    return 0;
}

int error_mod(void)
{
    printf("Stop : modulo by ");
    return 0;
}

int error_usage(void)
{
    printf("error : only [ + - * / %% ] are accepted");
    return 0;
}

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

int do_op(char **av)
{
    int v1 = ft_atoi(av[1]);
    int v2 = ft_atoi(av[3]);
    int result;
    int i;
    t_opp  op;
    
    if(av[2][0] == '/' && av[3][0] == '0')
        return error_div();
    if(av[2][0] == '%' && av[3][0] == '0')
        return error_mod();

    i = 0;
    while(i < 6)
    {
        op = g_opptab[i];
        if(av[2][0] != op.opp[0])
            return error_usage();
        if(av[2][0] == op.opp[0])
        {
            result = op.action(v1,v2);
        }
            
        i++;
    }
   
    return result;     
}

int main (int argc,char **argv)
{
    int r;
    r = do_op(argv);

    printf("%d\n",r);
    return 0;
}