#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_list
{
    void  *data;
    struct s_list *next;

}t_list;

int ft_strcmp(char *s1, char *s2)
{
    int i ;
    int j ;

    j = 0 ;
    while(s2[j] != 0)
        j++;

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

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *curr;
    t_list *prev;
    t_list *to_free;

    curr = *begin_list;
    prev = NULL;
    while(curr)
    {
      if (cmp(curr->data, data_ref) == 0)
      {
        to_free = curr;
        if (prev == NULL)
        {
          *begin_list = curr->next;
          curr = *begin_list;
          //curr = curr->next;
        }
        else
        {
          prev->next = curr->next;
          curr = curr->next;
        }
        free(to_free);
      }
      else
      {
        prev = curr;
        curr = curr->next;
      }
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

    head->data = "a";
    head->next = second;

    second->data = "a";
    second->next = third;

    third->data = "a";
    third->next = fourth;

    fourth->data = "ab";
    fourth->next = NULL;
 
    ft_list_remove_if(&head, "a", &strcmp);
    printf("%s\n", (char*)head->data);
    return 0;
}
