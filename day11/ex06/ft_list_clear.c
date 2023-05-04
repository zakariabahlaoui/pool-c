#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_list_clear(t_list **begin_list)
{
    t_list *list;
    t_list *fr;

    list = *begin_list;
    while(list)
    {
        if(list)
            fr = list->next;
        else
            fr = NULL;    
        free(list);
        list = fr;   
    }
}

int main()
{
    
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

    ft_list_clear(&head);

    
    printf("%d\n",head->data);
    
    return 0;
}