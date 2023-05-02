#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;
    i = 0;
    while (dest[i])
        i++;

    j = 0;
    while (src[j] != 0)
    {
        dest[i] = src[j];

        j++;
        i++;
    }

    dest[i] = '\0';

    return dest;
}

int main()
{
    char src[] = "world";
    char dest[] = "hello";
    ft_strcat(dest, src);
    printf("%s\n", dest);
}