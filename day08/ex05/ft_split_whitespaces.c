#include "ft_stock_par.h"

int ft_size(char *str)
{
    int i = 0;
    int j = 0;

    while(str[i] == ' ')   
        i++;
    if(str[i] == '\0')
        return 0;
    while(str[i])
    {
        if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
            j++;
        i++;
    }
    return j + 1;
}

void ft_split(char *str,char *dest,int *i)
{
    int j = 0;

    while(str[*i] != ' ' && str[*i] != '\0')
    {
        dest[j] = str[*i];
        *i +=1;
        j++;
    }
    dest[j] = '\0';
}

int ft_world_length(char *str,int c)
{
    int count = 0;

    while(str[c] != ' ' && str[c] != '\0')
    {
        c++;
        count++;
    }
    return count;
}

char **ft_split_whitespaces(char *str)
{
    char **arr;
    int i;
    int size;
    int length;

    size = ft_size(str);
    arr = (char**)malloc(sizeof(char*) * (size + 1));
    if (arr == NULL)
        return NULL;
    i = 0;
    int c = 0;
    while(i < size)
    {
        while(str[c] == ' ')
            c++;
        length = ft_world_length(str, c);
        arr[i] = (char*)malloc(sizeof(char) * (length + 1));
        ft_split(str, arr[i], &c);
        // strncpy(arr[i], str + c, length);
        // arr[i][length] = '\0';
        // c += length;
        i++;
    }
    arr[i] = NULL;
    return arr;
}
