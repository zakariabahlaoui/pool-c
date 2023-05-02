#include<stdio.h>

int ft_str_is_numeric(char *str)
{
    int i ;
    i = 0 ;

    while(str[i] <= '\0')
    {
        if((str[i] >= '0' && str[i] <= '9') || str[i] == '\0')
            return 1 ;

        i++;    
    }

    return 0;
}

int main()
{
    int r ;
    char text[] = "";
    r = ft_str_is_numeric(text);
    printf("%d\n",r);
    
    return 0 ;
}