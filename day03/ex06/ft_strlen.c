#include <stdio.h>

int ft_strlen(char* str)
{
    int numberc = 0 ;
    char c = 1;

    while (c != 0)
    {
        c = str[numberc];
        // printf("%d\n", c);
        numberc++;
    }
    numberc--;
    return numberc;
}

// int ft_strlen(char* str)
// {
//     int len;
    
//     len = 0;
//     while (str[len] != '\0')
//     {
//         len++;
//     }
//     return len;
// }

int main() {
    char str[] = "1";
    int numberc = ft_strlen(str);
    printf("%d\n",numberc);
   
    return 0;
}
