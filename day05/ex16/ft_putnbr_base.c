#include <unistd.h>
#include <limits.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
int chek_base(char *base)
{
    int i;
    int z;

    i = 0;
    z = 0;
    if (base[0] == '\0')
        return (0);
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-')
            return (0);

        z = i + 1;
        while (base[z])
        {
            if (base[i] == base[z])
                return (0);
            z++;
        }
        i++;
    }
    return (1);
}
unsigned int ft_abs(int n)
{
    if (n < 0)
        return n * -1;
    else
        return n;
}

void ft_putnbr_base(int nbr, char *base)
{
    int i;
    int nb;
    int r;
    int size;
    char buffer[100];
    if (nbr == 0)
        ft_putchar('0');

    if (chek_base(base))
    {
        if (nbr < 0)
            ft_putchar('-');
        nb = ft_abs(nbr);
        size = 0;
        while (base[size])
            size++;
        i = 0;
        while (nb != 0)
        {
            r = nb % size;
            nb = nb / size;
            // if(r < 0)
            //     r *= -1;
            buffer[i] = base[r];
            i++;
        }
        i--;
        while (i >= 0)
        {
            ft_putchar(buffer[i]);
            // ft_putchar(base[(int)buffer[i]]);
            // ft_putchar(chek_base(buffer[i],base));
            i--;
        }
    }
}

int main()
{
    // ft_putnbr_base(INT_MIN,"0123456789");
    // ft_putchar('\n');
    // ft_putnbr_base(INT_MAX,"0123456789");
    // ft_putchar('\n');
    ft_putnbr_base(30, "0123456789abcdef");
    ft_putchar('\n');

    return 0;
}