#include<stdio.h>

char *ft_strcpy(char *dest,char *src)
{
    int i = 0;
    
    while( src[i] != 0)
    {
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
    return 0 ;
}

int main()
{
    char src[] = "1234567";
    char dest[] = "123";
    ft_strcpy(dest,src);
    printf("%s\n",dest);

}