#include<stdio.h>

char *ft_strncpy(char *dest, char *src,  int n)
{
    int i = 0;
    
    while(i < n)
    {
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
    return dest ;
}

int main()
{
    char src[] = "1234567";
    char dest[] = "123";
    ft_strncpy(dest,src,3);
    printf("%s\n",dest);

}