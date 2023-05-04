#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_list_reverse(t_list **begin_list)
{
    t_list *list;
    t_list *temp;
    t_list *temp2;

    list = *begin_list;

	temp = list->next;
	temp2 = temp->next;
	list->next = NULL;
	temp->next = list;
	while (temp2)
	{
		list = temp;
		temp = temp2;
		temp2 = temp2->next;
		temp->next = list;
	}
	*begin_list = temp;
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

    head->data = "hello";
    head->next = second;

    second->data = "world";
    second->next = third;

    third->data = "abcd";
    third->next = fourth;

    fourth->data = "test";
    fourth->next = NULL;
    
    ft_list_reverse(&head);

    
    return 0;
}