#include <stdlib.h>
#include <unistd.h>

char **ft_split_whitespaces(char *str);

void ft_putchar(char c)
{
    write(1, &c, 1);    
}

void ft_print_words_tables(char **tab)
{
    int i;
    int j;

    i = 0;
    while(tab[i])
    {
        j = 0;
        while(tab[i][j])
        {
            ft_putchar(tab[i][j]);
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}

int main()
{
    char *str="  hello  abcd  ";
    char **split= ft_split_whitespaces(str);
    
    ft_print_words_tables(split);
    return 0;
}
