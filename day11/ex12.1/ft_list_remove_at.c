#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_list
{
    void  *data;
    struct s_list *next;

}t_list;

void ft_list_remove_at(t_list **begin_list, unsigned int index)
{
  t_list *curr;
  t_list *prev;
  t_list *to_free;
  unsigned int i;

  curr = *begin_list;
  prev = NULL;
  i = 0;
  while(curr)
  {
    if (i == index)
    {
      to_free = curr;
      if (prev == NULL)
        *begin_list = curr->next;
      else
        prev->next = curr->next;
      free(to_free);
      break ;
    }
    else
    {
      prev = curr;
      curr = curr->next;
    }
    i++;
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

    second->data = "b";
    second->next = third;

    third->data = "c";
    third->next = fourth;

    fourth->data = "d";
    fourth->next = NULL;

    ft_list_remove_at(&head, 5);
    while (head)
    {
      printf("%s\n", (char*)head->data);
      head = head->next;
    }
    return 0;
}
