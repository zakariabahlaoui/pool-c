#include<stdio.h>

void ft_ultimate_ft(int ***nbr);
int main ()
{
    int r = 77 ;
    int *p1 ;
    int **p2 ;
    int ***p3 ;

    p1 = &r ;
    p2 = &p1 ;
    p3 = &p2 ;

    //***p3 = 42 ;
    ft_ultimate_ft(p3);
    printf("%d\n",r);
    return 0;
}
void ft_ultimate_ft(int ***nbr)
{
    ***nbr = 42 ;
}