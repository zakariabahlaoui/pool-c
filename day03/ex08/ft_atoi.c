#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int dec;
    int i;
    int negative;
    dec = 0;
    i = 0;
    negative = 1;

    while (str[i] == ' ' || str[i] == '\f' || str[i] == '\r' || str[i] == '\t' || str[i] == '\n')
        i++;
    if (str[i] == '+')
        i++;
    else if (str[i] == '-')
    {
        i++;
        negative = -1;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        dec = dec * 10 + (str[i] - '0');
        i++;
    }
    return dec * negative;
}

int main()
{
    char chaine[] = "-768a4r7ki0";
    int d = atoi(chaine);
    int r = ft_atoi(chaine);
    printf("%d\n%d\n", d, r);
    return 0;
}