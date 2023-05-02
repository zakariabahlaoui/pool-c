#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n) // this function incorrect !!!!
{
    int i;
    int j;
    j = 0;
    i = 0;
    // while(s1[i] != n) ..
    while (i < n)
    {
        if (s1[i] == s2[i] && s1[i + 1] == s2[i + 1] && s1[i + 1] == 0)
            return 0;
        if (s1[i] != s2[i])
            return s1[i] - s2[i];

        i++;
    }
    if (s2[j])
        return s1[i] - s2[i];

    return 0;
}
int main()
{
    char a[] = "abcr";
    char b[] = "ab";

    int result1 = strncmp(a, b, 4);
    int result2 = ft_strncmp(a, b, 4);

    printf("strcmp: %d\n", result1);
    printf("ft_strcmp: %d\n", result2);
    return (0);
}