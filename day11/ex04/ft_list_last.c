#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
    if(begin_list == NULL)
        return NULL;
    while(begin_list->next)
    {
        begin_list = begin_list->next;
    }
    return begin_list;
}

int main()
{
    t_list *last;
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

    last = ft_list_last(head);

    printf("%d\n",last->data);
    return 0;
}