#include <unistd.h>
#include <stdlib.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

int	ft_strlen(char *str)
{
	int counter;
	counter = 0;

	while(*str != '\0')
	{
		str++;
		counter++;
	}
return counter;
}



int main()
{


return 0;
}
