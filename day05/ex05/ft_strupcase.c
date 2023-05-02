#include<stdio.h>

char *ft_strupcase(char *str)
{
    int  i;
    char d;
     
    i = 0 ;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            d = str[i] - 32;
            str[i] = d;
        }   
        i++;
    }
    
    return  str;
}

int main()
{
    char low[] = "abc87_)";
    ft_strupcase(low);
    printf("%s\n",low);

    return 0;
}