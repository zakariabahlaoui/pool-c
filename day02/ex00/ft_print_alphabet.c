#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
    
}

void ft_print_alphabet(void)
{
    char x = 'a';

    while (x <= 'z')
    {
        ft_putchar(x);
        x++;  
    }     
    ft_putchar('\n');  
}

int main()
{
    ft_print_alphabet();
    return 0 ;  
}