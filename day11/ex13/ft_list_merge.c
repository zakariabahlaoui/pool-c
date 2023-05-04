#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
    t_list *list;
    
    list = *begin_list1;

    while(list->next)
        list = list->next;   

    list->next = begin_list2;    
      
}

int main()
{
    t_list *head = NULL;
    t_list *second = NULL;
    t_list *third = NULL;
    t_list *fourth = NULL;

    head = malloc(sizeof(t_list));
    second = malloc(sizeof(t_list));
    third = malloc(sizeof(t_list));
    fourth = malloc(sizeof(t_list));

    head->data = "a";
    head->next = second;

    second->data = "b";
    second->next = third;

    third->data = "c";
    third->next = fourth;

    fourth->data = "d";
    fourth->next = NULL;

    t_list *one = NULL;
    t_list *two = NULL;
    one = malloc(sizeof(t_list));
    two = malloc(sizeof(t_list));
    one->data = "e";
    one->next = two;
    two->data = "f";
    two->next = NULL;

    ft_list_merge(&head, one);
    while (head)
    {
      printf("%s\n", (char*)head->data);
      head = head->next;
    }
    return 0;
}