#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

void ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
    t_list *elem;
    t_list *curr;
    t_list *prev;

    elem = ft_create_elem(data);
    if (*begin_list == NULL)
    {
        *begin_list = elem;
        return ;
    }
    prev = NULL;
    curr = *begin_list;
    while (curr)
    {
        if (cmp(curr->data, data) > 0)
        {
            if (prev == NULL)
            {
                elem->next = *begin_list;
                *begin_list = elem;
            }
            else
            {
                prev->next = elem;
                elem->next = curr;
            }
            return ;
        }
        prev = curr;
        curr = curr->next;
    }
    prev->next = elem;
}

int main()
{
    t_list *begin_list;

    begin_list = NULL;

    ft_sorted_list_insert(&begin_list,"a",&strcmp);
    ft_sorted_list_insert(&begin_list,"c",&strcmp);
    ft_sorted_list_insert(&begin_list,"b",&strcmp);

    while(begin_list)
    {
        printf("%s\n",(char *)begin_list->data);
        begin_list = begin_list->next;
    }
}