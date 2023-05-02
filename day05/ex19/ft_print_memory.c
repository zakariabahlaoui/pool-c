#include <unistd.h>

void ft_putchar(char c)
{
    write(1 ,&c ,1);
}

void	ft_num_line(int nb)
{
	char buffer[8];
	int i;

	i = 0;
	while (nb != 0)
	{
		buffer[i] = nb % 16;
        if(buffer[i] <= 9)
		    buffer[i] += '0';
        else
            buffer[i] += 87;
		nb = nb / 16;
		i++;
	}
	while (i < 8)
	{
		buffer[i] = '0';
		i++;
	}
    i--;
	while (i >= 0)
    {
        ft_putchar(buffer[i]);
        i--;
    }
		
}        
void ft_hex(unsigned char c)
{
    int hex1;
    int hex2;

    hex1 = c / 16 ;
    hex2 = c % 16 ;

    if(hex1 < 10)
        ft_putchar(hex1 + '0');
    else
        ft_putchar(hex1 + 87);
    if(hex2 < 10)
        ft_putchar(hex2 + '0');
    else
        ft_putchar(hex2 + 87);

}

void ft_print(unsigned char *addr,unsigned int size )
{
    unsigned int i;
    int printed_count;

    i = 0;
    printed_count = 0;
    while(i < size)
    {
        if(i % 2 == 0)
        {
            printed_count++;
            ft_putchar(' ');
        }
        ft_hex(addr[i]);
        printed_count += 2;
        i++;
    }
    while(printed_count < 40)
    {
        ft_putchar(' ');
        printed_count++;
    }  
    ft_putchar(' ');
    ft_putchar(' ');
    i = 0;
    while(i < size)
    {
        if (addr[i] >= 32 && addr[i] <= 126 )
			ft_putchar(addr[i]);
		else
			ft_putchar('.');
        i++;
    }   
}

void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned int i;
    unsigned char *buffer;
    
    buffer = (unsigned char*)addr;
    i = 0;
    while(i < size)
    {
        ft_num_line(i);
        ft_putchar(':');
        if (size - i >= 16)
            ft_print(buffer + i, 16);
        else
            ft_print(buffer + i, size - i);
        ft_putchar('\n');
        i += 16;
    }
    return addr;
}    

int main()
{
    char addr[]="0123456789abcde";
    // char addr[] = "Salut";
    //long addr[]= { 1, 2, 3, 4, 5, 6, 6, 7, 91, 23, 1, 3, 43, 5, 1, 2, 3, 4, 5, 6, 6, 7, 91, 23, 1, 3, 43, 5 };
    //char addr[]= {'a', 0, 'b', 0};

    ft_print_memory((void*)addr,sizeof(addr));

    return 0;
}
