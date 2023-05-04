#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_is_exists(char *charest, char c)
{
    int i = 0;

    while (charest[i])
    {
        if (charest[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int ft_size(char *str, char *charset)
{
    int i = 0;
    int j = 0;

    while (ft_is_exists(charset, str[i]))
        i++;
    if (str[i] == '\0')
        return 0;
    while (str[i])
    {
        if (ft_is_exists(charset, str[i]) && str[i + 1] != '\0' && !ft_is_exists(charset, str[i + 1]))
            j++;
        i++;
    }
    return j + 1;
}

void ft_copy(char *str, char *dest, int *i, char *charset)
{
    int j = 0;

    while (str[*i] != '\0' && !ft_is_exists(charset, str[*i]))
    {
        dest[j] = str[*i];
        *i += 1;
        j++;
    }
    dest[j] = '\0';
}

int ft_world_length(char *str, int c, char *charset)
{
    int count = 0;

    while (str[c] != '\0' && !ft_is_exists(charset, str[c]))
    {
        c++;
        count++;
    }
    return count;
}

char **ft_split(char *str, char *charset)
{
    char **arr;
    int i;
    int size;
    int length;
    int c;

    size = ft_size(str, charset);
    // printf("%d\n---\n",size);
    arr = (char **)malloc(sizeof(char *) * (size + 1));
    if (arr == NULL)
        return NULL;
    i = 0;
    c = 0;
    while (i < size)
    {
        while (ft_is_exists(charset, str[c]))
            c++;
        length = ft_world_length(str, c, charset);
        // printf("%d\n", length);
        arr[i] = (char *)malloc(sizeof(char) * (length + 1));
        ft_copy(str, arr[i], &c, charset);
        // strncpy(arr[i], str + c, length);
        // arr[i][length] = '\0';
        // c += length;
        i++;
    }
    arr[i] = NULL;
    return arr;
}

int main(int ac, char *av[])
{
    if (ac != 3)
    {
        printf("usage: ./a.out string charset\n");
        return 1;
    }
    char **split = ft_split(av[1], av[2]);
    int n = 0;
    while (split[n])
    {
        printf("`%s`\n", split[n]);
        free(split[n]);
        n++;
    }
    free(split);
    return 0;
}
