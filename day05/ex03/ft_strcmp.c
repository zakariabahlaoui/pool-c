#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
    int i ;
    int j ;
    j = 0 ;
    while(s2[j] != 0)
    {
        j++;
    }
    i = 0 ;
    while(s1[i] != 0)
    {
        if(s1[i] != s2[i])
            return s1[i]-s2[i];
           
        i++;
    }
    if (j > i)
        return s1[i]-s2[i];
    
    return 0 ;
}
int main()
{
    char a[]="\x61";
    char b[]="\x90";

    int result1 = strcmp(a,b);
    int result2 = ft_strcmp(a,b);

    printf("strcmp: %d\n", result1);
    printf("ft_strcmp: %d\n", result2);
    return (0);
}
