#include <stdio.h>

int ft_is_starts_with_a(char *str)
{
    if(str[0] == 'a')
        return 1;
    return 0;
}

int ft_any(char **tab, int(*f)(char*))
{
    int i = 0;
    while(tab[i])
    {
        if(f(tab[i]) == 1)
            return 1;
        i++;    
    }
    return 0;
}

int main()
{
    char *tab[] = {"0bcd","hello","world", NULL};
    
    int  result;

    result = ft_any(tab,&ft_is_starts_with_a);

    printf("%d\n",result);

    return 0;
}