#include<stdio.h>

int ft_strlen(char* str)
{
    int len;
    
    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

char *ft_strrev1(char *str)
{
    //int len = 5 ;
    int len = ft_strlen(str) - 1;
    char c ;
    int r = 0;
    int half = len / 2;

    if (len == -1 )
        return str ;
    while (len != half)
    {
        c = str[len];
        str[len]=str[r] ;
        str[r]= c ;
        len--;
        r++;
    }
    return  str ;
}

char *ft_strrev(char *str)
{
    int len;
    int half;
    int i;
    char swap;

    if (str[0] == '\0')
        return str;
    len = ft_strlen(str);
    half = len / 2;
    i = 0;
    while (i <= half)
    {
        swap = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = swap;
        i++; 
    }
    return str ;
}


int main ()
{
    char chaine[]="hello";
    ft_strrev(chaine);
    printf("%s\n", chaine);
    return 0 ;
}
