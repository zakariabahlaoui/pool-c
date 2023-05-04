#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    int i;

    i = 0;
    while(begin_list)
    {
        begin_list = begin_list->next;
        i++;
    }
    return i;
}

int main()
{
    int size;
    t_list *head = NULL;
    t_list *second = NULL;
    t_list *third = NULL;

    head = malloc(sizeof(t_list));
    second = malloc(sizeof(t_list));
    third = malloc(sizeof(t_list));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    size = ft_list_size(head);

    printf("%d\n",size);
    return 0;
}