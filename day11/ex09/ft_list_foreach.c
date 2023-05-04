#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_mul(void *str)
{
    printf("%s\n", (char*)str);
}

void ft_list_foreach(t_list *begin_list, void (*f)(void*))
{
    t_list	*list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
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

    head->data = "saas";
    head->next = second;

    second->data = "abcd";
    second->next = third;

    third->data = "hello";
    third->next = fourth;

    fourth->data = "world";
    fourth->next = NULL;
 
    ft_list_foreach(head,&ft_mul);

    return 0;
}