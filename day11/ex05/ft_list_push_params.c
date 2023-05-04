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

t_list *ft_list_push_params(int ac, char **av)
{
    t_list *list;
    t_list *last;
    t_list *elem;
    int i;

    list = NULL;
    last = NULL;
    i = 0;
    while(i < ac)
    {
        if (list == NULL)
        {
            list = ft_create_elem(av[i]);
            last = list;
        }
        else
        {
            elem = ft_create_elem(av[i]);
            last->next = elem;
            last = elem;
        }
        // ft_list_push_back(&list, av[i]);
        i++;
    }
    return list;
}

int main(int argc, char **argv)
{
    t_list *list;

    list = ft_list_push_params(argc - 1, argv + 1);

    while(list != NULL)
    {
        printf("%s\n",(char*)list->data);
        list = list->next;
    }
    return 0;
}

