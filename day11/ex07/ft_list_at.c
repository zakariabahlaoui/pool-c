#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    t_list *list;
    unsigned int i;

    list = begin_list;

    if(list == NULL)
        return 0;
    i = 0;
    while(list->next != NULL)
    {
        list = list->next;
        i++; 
        if(i == nbr) 
            return list;
    }
    return list;
}

int main()
{
    t_list *nbr_list;
    
    t_list *head = NULL;
    t_list *second = NULL;
    t_list *third = NULL;
    t_list *fourth = NULL;

    head = malloc(sizeof(t_list));
    second = malloc(sizeof(t_list));
    third = malloc(sizeof(t_list));
    fourth = malloc(sizeof(t_list));

    head->data = "hello";
    head->next = second;

    second->data = "world";
    second->next = third;

    third->data = "abcd";
    third->next = fourth;

    fourth->data = "test";
    fourth->next = NULL;
    


    nbr_list = ft_list_at(head,22);
    
    printf("%s\n",(char*)nbr_list->data);
    
    return 0;
}