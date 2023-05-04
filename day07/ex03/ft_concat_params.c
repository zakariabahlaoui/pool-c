#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
    dest[i+j] ='\n';
    dest[i+j+1] = '\0';
	return dest;
}

char *ft_concat_params(int argc, char **argv)
{

    char *str;
    int     i;
    int  size;

	size = 0;
    i = 0;
    while(i < argc)
    {
        size += strlen(argv[i]) + 1;
        i++;
    }
    
    str = malloc(size * sizeof(char));
    str[0]='\0';
    i = 0;
    while(i < argc)
    {
        str= ft_strcat(str,argv[i]);
        i++;
    }
    return str;
}


int main(int argc, char **argv)
{
    char *str = ft_concat_params(argc - 1, argv + 1);
    
    printf("%s",str);

    
    
    return 0;
}
