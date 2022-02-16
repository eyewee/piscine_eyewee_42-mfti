#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>



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


int	main()
{
	char *str = NULL;
	str = "wsh";
	printf("the string length is %d", ft_strlen(str));

return 0;
}
