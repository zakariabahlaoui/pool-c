#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

//void	ft_putstr(char str[])
void	ft_putstr(char *str)
{
	int i;

	i = 0;

	//while (str[i] !=  '\0'  && i < 3)
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
        
		i++;
	}
}

int main()
{
    // char  chaine[] = "hello\n";
	char  chaine[] = {'h','e','l','l','o','\0'};
	ft_putstr(chaine);

	return 0;
}