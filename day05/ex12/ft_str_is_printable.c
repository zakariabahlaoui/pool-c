#include<stdio.h>

int ft_str_is_printable(char *str)
{
    int i ;
    i = 0 ;

    while(str[i] <= '\0')
    {
        if((str[i] >= 32 && str[i] <= 126) || str[i] == '\0')
            return 1 ;

        i++;    
    }

    return 0;
}

int main()
{
    int r ;
    char text[] = "";
    r = ft_str_is_printable(text);
    printf("%d\n",r);
    
    return 0 ;
}