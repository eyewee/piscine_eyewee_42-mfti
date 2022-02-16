#include <unistd.h>
#include <stdio.h> //for printf

void	ft_putchar(char c)
{
	write(1, &c, 1);
}





int main()
{
    int c = '@';
    char table[16] = "0123456789ABCDEF";
            ft_putchar(table[c / 16]);

return 0;
}
