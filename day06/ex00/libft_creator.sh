gcc -Wall -Werror -Wextra -c ft_putchar.c -c ft_putstr.c -c ft_strlen.c -c ft_swap.c
ar rc libft.a ft_putchar.o ft_putstr.o ft_strlen.o ft_swap.o
ranlib libft.a

# compile using
# gcc main.c -L . -lft
# or
# gcc main.c libft.a