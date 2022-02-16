#include <unistd.h>
#include <stdio.h> //for printf



void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_hex(unsigned char c)
{
    ft_putchar("0123456789abcdef"[c / 16]);
    ft_putchar("0123456789abcdef"[c % 16]);
}



void	ft_putaddr(void *addr)
{
	char	addr_c[15]; //string to store (translated into hex) every element of 16 addr elements
	long	addr_l;
	int		i;

	addr_l = (long)addr; //type casting void addr into long int (= 4 bytes)
	i = 0;

	while (addr_l > 0) //until address is empty,
	{
		addr_c[i] = addr_l % 16; //store 1/16 of the address in 1/16 of the given array

		// converting to hex
		if (addr_c[i] < 10) // this will put numbers if result is > 9 (hex numbers 0-9)
			addr_c[i] += '0';
		else
			addr_c[i] += 87; // this will put low_case letters if result is > 9 (hex letters)

		addr_l = addr_l / 16; //divide address by 16 each time until its 0
		i++;
	}

    while (i < 15) //fills the rest of 16 bits by zero
	{
		addr_c[i] = '0';
		i++;
	}
	while (--i >= 0) //puts actual address at every iteration
		ft_putchar(addr_c[i]);
}




void	ft_print_line(void *addr, int size)
{
	int		i;
	int		sp_to_print;
	char	*addr_c;

	addr_c = (char *)addr;
	i = 0;
	while (i < size)
	{
		ft_print_hex(addr_c[i++]);
		if (i % 2 == 0) // after every pair put a space
			ft_putchar(' ');
	}
	sp_to_print = ((16 - size) * 2) + (19 - size) / 2;
	while (--sp_to_print > 0)
		ft_putchar(' ');
	i = -1;
	while (++i < size) // put . if char is not printable
	{
		if (addr_c[i] >= 32 && addr_c[i] <= 126)
			ft_putchar(addr_c[i]);
		else
			ft_putchar('.');
	}
}


void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	char_to_print; //how many chars to print on each line => must be 16
	unsigned int	offset;

	offset = 0;
	while (size)
	{
		if (size >= 16) //u need to print addr of 1st char every 16 char (1 line = 16 chars)
		{
			char_to_print = 16;
			size -= 16;
		}
		else
		{
			char_to_print = size;
			size = 0;
		}
		ft_putaddr(addr+offset);
		/*printf("%x", (unsigned int)addr+offset);*/
		ft_putchar(':');
		ft_putchar(' ');
		ft_print_line(addr + offset, char_to_print);
		ft_putchar('\n');
		offset += 16;
	}
	return (addr);
}


int main(void)
{

    char *str;
    str = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. ";
    ft_print_memory(str, 91); // because str is 91 chars in total


return 0;
}

