# -*- Makefile -*-


all: ft_putchar.o ft_putstr.o  ft_swap.o ft_strlen.o
	ar rc libft.a ft_putchar.o ft_putstr.o ft_swap.o ft_strlen.o
	ranlib libft.a

ft_putstr.o: ft_putstr.c 
	gcc -c ft_putstr.c

ft_putchar.o: ft_putchar.c 
	gcc -c ft_putchar.c

ft_swap.o: ft_swap.c
	gcc -c ft_swap.c

ft_strlen.o: ft_strlen.c
	gcc -c ft_strlen.c

clean:
	rm *.o ft_putchar.o ft_putstr.o  ft_swap.o ft_strlen.o