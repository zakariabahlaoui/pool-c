#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_len(void *str)
{
    char *src = (char*)str;
    int i = 0;
    while(src[i])
        i++;;
    printf("%d",i)    
}

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

void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
    t_list	*list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
        if((*cmp)(list_ptr->data, data_ref) == 0)
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
 
    ft_list_foreach_if(head, &ft_len, "world", &ft_strcmp);


    return 0;
}