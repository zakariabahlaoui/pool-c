#include<stdio.h>

void ft_sort_integer_table(int *tab, int size)
{
   int y = 0;
   int i ;
   int swap ;
   while (y < size) 
    {
        i = 0;
        while (i < size-1)
        {
            if (tab[i]>tab[i+1])
            {
                swap = tab[i];
                tab[i]= tab[i+1];
                tab[i+1] = swap;
            }
            i++;
        }
        y++;
    }
}
int main ()
{
    int i = 0 ;
    int tab[] = {8,11,43,15,9,7,-1};
    ft_sort_integer_table(tab,7);
    while( i < 7)
    {
        printf("%d\n",tab[i]);
        i++;
    }
}