#include <stdio.h>

int ft_is_starts_with_a(char *str)
{
    if(str[0] == 'a')
        return 1;
    return 0;
}

int ft_count_if(char **tab, int(*f)(char*))
{
    int n = 0;
    int i = 0;
    while(tab[i])
    {
        if(f(tab[i]) == 1)
            n++;
        i++;
    }

    return n;
}

int main()
{
    char *tab[] = {"abcd","aheallo","world", NULL};
    
    int  count;

    count = ft_count_if(tab,&ft_is_starts_with_a);

    printf("%d\n",count);

    return 0;
}