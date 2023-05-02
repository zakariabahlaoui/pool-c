#include<stdio.h>

char *ft_strcapitalize(char *str)
{
    int i ;
    char d ;
    i = 0 ;

    if(str[i] >= 'a' && str[i] <= 'z')
    {
        d = str[i] - 32 ;
        str[i] = d ;
    }
     
    while(str[i])
    {
        
        if(str[i] == ' ' || str[i] < 47)
        {
            i++;
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                d = str[i] - 32 ;
                str[i] = d ;
            }       
        }
        else
            i++;
    }
    return str ;
}

int main()
{
    char text[]="";
    ft_strcapitalize(text);
    printf("%s\n",text);
    
    return 0 ;
}