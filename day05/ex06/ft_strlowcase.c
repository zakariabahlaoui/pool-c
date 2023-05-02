#include<stdio.h>

char *ft_strlowcase(char str)
{
    int  i;
    char d;
     
    i = 0 ;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            d = str[i] + 32;
            str[i] = d;
        }
        i++;
    }
    
    return  str;
}

int main()
{
    char up[] = "ABCD";
    ft_strlowcase(up);
    printf("%s\n",up);

    return 0;
}