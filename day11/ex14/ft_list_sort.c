#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

int ft_strcmp(char *s1, char *s2)
{
    int i ;
    int j ;
    j = 0 ;
    while(s2[j] != 0)
    {
        j++;
    }
    i = 0 ;
    while(s1[i] != 0)
    {
        if(s1[i] != s2[i])
            return s1[i]-s2[i];
        i++;
    }
    if (j > i)
        return s1[i]-s2[i];
    
    return 0 ;
}

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
    t_list *list;
    t_list *list2;
    t_list *temp;

    list = *begin_list;
    while(list)
    {
        list2 = list;
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

    head->data = "d";
    head->next = second;

    second->data = "a";
    second->next = third;

    third->data = "c";
    third->next = fourth;

    fourth->data = "b";
    fourth->next = NULL;
 
    ft_list_sort(&head, &strcmp);
    while (head)
    {
      printf("%s\n", (char*)head->data);
      head = head->next;
    }

    return 0;
}