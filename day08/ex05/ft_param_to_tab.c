#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include "ft_stock_par.h"

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;    
}

char *ft_strdup(char *src)
{
    int i;
    char *p;
    int size;

    size = 0;
    while(src[size])
        size++;

    p = malloc((size + 1) * sizeof(char));
    i = 0;
    while(src[i])
    {
        p[i] = src[i];
        i++;
    }
    p[i] = '\0';
    return p;
}

struct s_stock_par *ft_param_to_tab(int ac, char **av)
{
    t_stock_par *agv;
    int i;

    agv = malloc(sizeof(t_stock_par) * ac);
    
    i = 0;
    while(i < ac)
    {
        agv[i].size_param = ft_strlen(av[i]);
        agv[i].str = av[i];
        agv[i].copy = ft_strdup(av[i]);
        agv[i].tab = ft_split_whitespaces(av[i]);
        i++;
    }    
    agv[i].str = '\0';
    return agv;
}

int main(int argc, char **argv)
{
    t_stock_par *params = ft_param_to_tab(argc - 1, argv + 1);

    int i = 0;
    while(i < argc - 1)
    {
        printf("%s\n", params[i].tab[0]);
        i++;
    }
    return 0;
}
