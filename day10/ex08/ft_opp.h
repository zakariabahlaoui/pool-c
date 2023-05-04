#ifndef FT_OPP_H
# define FT_OPP_H

typedef struct s_opp 
{
    char *opp;
    int (*action)(int,int); 
}t_opp;

int ft_add(int x,int y );
int ft_sub(int x,int y );
int ft_mul(int x,int y );
int ft_div(int x,int y );
int ft_mod(int x,int y );
int ft_usage(int x,int y );

t_opp g_opptab[] =
{
    {"+", &ft_add},
    {"-", &ft_sub},
    {"*", &ft_mul},
    {"/", &ft_div},
    {"%", &ft_mod},
    {"", &ft_usage}
};




#endif
