#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
    t_list *list;
    t_list *list2;
    t_list *temp;
    
    list = *begin_list1;

    while(list->next)
        list = list->next;   

    list->next = begin_list2;   
    
    list = *begin_list1;
    while(list)
    {
        list2 = *begin_list1;
        while(list2->next)
        {
            if((*cmp)(list2->data,list2->next->data) > 0)
            {
                temp = list2->data;
                list2->data = list2->next->data; 
                list2->next->data = temp;
            }
            list2 = list2->next;
        }
        list = list->next;
    }


      
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

    head->data = "f";
    head->next = second;

    second->data = "a";
    second->next = third;

    third->data = "e";
    third->next = fourth;

    fourth->data = "d";
    fourth->next = NULL;

    t_list *one = NULL;
    t_list *two = NULL;
    one = malloc(sizeof(t_list));
    two = malloc(sizeof(t_list));
    one->data = "c";
    one->next = two;
    two->data = "b";
    two->next = NULL;

    ft_sorted_list_merge(&head, one, &strcmp);
    while (head)
    {
      printf("%s\n", (char*)head->data);
      head = head->next;
    }
    return 0;
}