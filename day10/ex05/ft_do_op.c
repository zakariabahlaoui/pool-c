#include <unistd.h>
#include <stdio.h>
#include "do_po.h"

int do_po(char **av)
{
    int value1 = ft_atoi(av[1]);
    int value2 = ft_atoi(av[3]);
    int result;
    
    printf("%d\n",value1);
    printf("%d\n",value2);
    if(av[2][0] == '+')
        result = value1 + value2;
    if(av[2][0] == '-')
        result = value1 - value2;   
    if(av[2][0] == '/')
        result = value1 / value2;    
    if(av[2][0] == '%')
        result = value1 % value2;  
          
     return result;     
}

int main (int argc,char **argv)
{
    int r;
    r = do_po(argv);

    printf("%d\n",r);
    return 0;
}