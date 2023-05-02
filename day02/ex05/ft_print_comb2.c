#include<unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_put_number(int n)
{
    char r = (n / 10) + '0';
    char y = (n % 10) + '0';
       
    ft_putchar(r);
    ft_putchar(y);
}

void ft_print_comb2(void)
{
    int a;
    int b;

    a = 0;
    while(a <= 98)
    {
        b = a + 1;
        while(b <= 99) 
        {
            ft_put_number(a);
            ft_putchar(' ');
            ft_put_number(b);
            if (a != 98)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            b++;
        }
        a++;
    }
}

int main()
{
    ft_print_comb2();
    return 0;
}
