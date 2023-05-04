#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
int main(int argc, char **argv)    
{
    int i;
    i = 3;
    while(i >= 0)
    {
        ft_putstr(argv[i]);
        ft_putchar('\n');
        
        i--;
    }
    ft_putchar('\n');
    return 0;
}