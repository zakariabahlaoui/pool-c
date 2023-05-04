#include <stdio.h>

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

void ft_sort_wordtab(char **tab)
{
    int i;
    int j;
    char *swap;

    i = 0;
    while(tab[i])
    {
        j = i + 1;
        while(tab[j])
        {
            if(ft_strcmp(tab[i],tab[j]) > 0)
            {
                swap = tab[i];
                tab[i] = tab[j];
                tab[j] = swap;
            }
            j++;
        }
        
        i++;
    }
}

int main()
{
    char *tab[]={"hello","abcd","world",NULL};

    ft_sort_wordtab(tab);

    int i = 0;
    while(tab[i])
    {
        printf("%s ",tab[i]);
        i++;
    }
    return 0;
}