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

void ft_list_push_back(t_list **begin_list, void *data)
{
    t_list *curr;

    if(*begin_list == NULL)
    {
        *begin_list = ft_create_elem(data);
        return ;
    }
    curr = *begin_list;
    while(curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = ft_create_elem(data);

}

int main()
{
    t_list *begin_list;

    begin_list = NULL;

    ft_list_push_back(&begin_list, "world");
    ft_list_push_back(&begin_list, "abcdCV");
    ft_list_push_back(&begin_list, "nnnn");


    while(begin_list != NULL)
    {
        printf("%s\n",(char*)begin_list->data);
        begin_list = begin_list->next;
    }
    return 0;
}
