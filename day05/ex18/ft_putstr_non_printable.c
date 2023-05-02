#include <unistd.h>

void ft_putchar(char c)
{
    write(1 ,&c ,1);
}

void ft_hex(char c)
{
    int hex1;
    int hex2;

    ft_putchar('\\');

    hex1 = c / 16 ;
    hex2 = c % 16 ;

    if(hex1 < 10)
        ft_putchar(hex1 + '0');
    else
        ft_putchar(hex1 + 87);
    if(hex2 < 10)
        ft_putchar(hex2 + '0');
    else
        ft_putchar(hex2 + 87);
}

void ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] >= 32 && str[i] <= 126)
        {
            ft_putchar(str[i]);
        }
        else
        {
            ft_hex(str[i]);
            // ft_putchar('\\');
            // ft_putnbr_base(str[i], "0123456789abcdef");
        }
        i++;
    }

}

int main()
{
  char str[]="Coucou\v \n \1 \20 tu vas  bien ?";
  ft_putstr_non_printable(str);
  ft_putchar('\n');

  return 0 ;
  
}