#include<unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(void)
{
    int  nomber = '0';
    while (nomber<='9')
    {
        ft_putchar(nomber);
        nomber++;
    }
    ft_putchar('\n');
}
int main()
{
    ft_print_numbers();
    return 0;
}
