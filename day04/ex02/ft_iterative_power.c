#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int i = 1;

    if (power == 0)
        return 0;
    while (i < power)
    {
        nb = nb * nb;
        i++;
    }
    return nb;
}

int main()
{
    int result;
    result = ft_iterative_power(2, 2);
    printf("%d\n", result);
    return 0;
}