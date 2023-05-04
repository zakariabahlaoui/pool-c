#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i;
    char *p;
    int size;

    size = 0;
    while(src[size])
        size++;

    p = malloc((size + 1) * sizeof(char));
    i = 0;
    while(src[i])
    {
        p[i] = src[i];
        i++;
    }
    p[i] = '\0';
    return p;
}

int main()
{
    char *copy;
    char src[] = "absd";
    copy = ft_strdup(src);
    printf("%s",copy);
    printf("\n");
    free(copy);

    return 0;
    
}