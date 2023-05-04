#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data)
{
    t_list *list;
    list = NULL;

    list = (char *)malloc(sizeof(t_list));

    if (list != NULL)
    {
        list->data = data;
        list->next = NULL;
    }

    return list;
}

int main()
{
    char *li = "hello";
    t_list *list;

    list = ft_create_elem(li);

    printf("%s\n", (char *)list->data);

    return 0;
}