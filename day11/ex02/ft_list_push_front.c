#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data)
{
    t_list *list;
    list = NULL;
    
    list = (t_list*)malloc(sizeof(t_list));
    
    if(list != NULL)
    {
        list->data = data;
        list->next = NULL; 
    }
    
    return list;
}

void ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *elem;

    elem = ft_create_elem(data);
    elem->next = *begin_list;
    *begin_list = elem;
}

int main()
{
    t_list *begin_list;

    begin_list = NULL;

    ft_list_push_front(&begin_list, "world");
    ft_list_push_front(&begin_list, "abcdCV");
    ft_list_push_front(&begin_list, "nnnn");


    while(begin_list != NULL)
    {
        printf("%s\n",(char*)begin_list->data);
        begin_list = begin_list->next;
    }
    return 0;
}