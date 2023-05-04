#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define t_bool int
#define SUCCESS 0
#define TRUE 1
#define FALSE 0
#define EVEN(n) n % 2 == 0


void ft_putstr(char *str);
t_bool ft_is_even(int nbr);

#endif
