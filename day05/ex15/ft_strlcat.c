#include<stdio.h>
#include<string.h>

unsigned int ft_strlen(char* str)
{
    unsigned int len;
    
    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

unsigned int ft_strlcat(char *dest, char *src,unsigned int size)
{
	unsigned int c;
	unsigned int d;

	c = ft_strlen(dest);
	if (size <= c)
		return (size + ft_strlen(src));
	d = 0;
	while (src[d] != '\0' && c  < size)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
    //return (ft_strlen(dst) + d);
	return (ft_strlen(dest) + ft_strlen(&src[d]));
}

int main() 
{
    int r ;
    //int r2;
    char src[17]="hello";
    char dest[13]="world";
    r = ft_strlcat(dest,src,3);
    //r2 = strlcat(dest,src,1);
    printf("%d\n",r);

    return 0;
}