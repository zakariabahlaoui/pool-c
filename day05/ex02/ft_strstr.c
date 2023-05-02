#include<stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i = 0 ;
    int j ;
    
    while(str[i] != 0)
    {
        j = 0 ;
        while( str[i+j] == to_find[j] )
        {
            //if( to_find[j+1] == '\0')
               // return str + i ;
            
            // if( to_find[j+1] == '\0')
            //     return &str[i];
            j++;    
        }
        if( to_find[j] == '\0')
            return &str[i];
        i++;   
    }  
    return 0 ;
}

int main()
{
    char *c;
    char str[] = "014253456789";
    char find[] = "45";
    c =  ft_strstr(str, find);
    if(c == NULL)
        printf("not there\n");
    else
        printf("%s\n",c);
    return 0 ;
}