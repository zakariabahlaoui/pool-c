#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_par.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void ft_show_tab(struct s_stock_par *par)
{
    int i = 0;
    while(par[i].str != 0)
    {
        // ft_putstr(par[i].str);
        // ft_putchar('\n');
        ft_putnbr(par[i].size_param);
        ft_putchar('\n');
        // ft_putstr(par[i].copy);
        // ft_putchar('\n');
        ft_putstr(par[i].tab[0]);
        ft_putchar('\n');
        i++;
    }
     
}

int main(int argc, char **argv)
{
    t_stock_par *params = ft_param_to_tab(argc - 1, argv + 1);

    ft_show_tab(params);
    // int i = 0;
    // while(i < argc - 1)
    // {
    //     ft_putstr(params->tab[0]);
    //     i++;
    // }
    

    return 0;
}