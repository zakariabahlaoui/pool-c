#include "ft.h"

void ft_swap(int *a, int *b)
{
    int c;

    c = *b ;
    *b = *a ;
    *a = c ;    
}
