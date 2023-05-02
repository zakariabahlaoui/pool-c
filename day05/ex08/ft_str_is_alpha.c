#include<stdio.h>

int ft_str_is_alpha(char *str)
{
    int i ;
    i = 0 ;

    while(str[i] <= '\0')
    {
        if( (str[i] >= 'a' && str[i] <= 'z') ||(str[i] >= 'A' && str[i] <= 'Z') || str[i] == '\0')
            return 1 ;

        i++;    
    }

    return 0;
}

int main()
{
    int r ;
    char text[] = "";
    r = ft_str_is_alpha(text);
    printf("%d\n",r);
    
    return 0 ;
}