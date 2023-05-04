#include <stdio.h>
#include "ft_point.h"

void set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}

int main(void)
{
    //struct s_point point;
    t_point point;

    set_point(&point);

    printf("x = %d\ny = %d\n",point.x,point.y);
    
    return (0);
}

// typedef int  deg;

// int main()
// {
//     deg a = 44;

//     printf("%d\n",a);
// }
