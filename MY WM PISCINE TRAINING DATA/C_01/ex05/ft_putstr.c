#include <unistd.h>
#include <stdlib.h>



void	ft_putstr(char *str)
{
	while(*str != '\0')
	{
		write(1, (char *)str, 1);
		str++;
	}
}


int	main()
{
	char *str = NULL;
	str = "wsh ololosh t'as vu cmt j'ai fait";
	ft_putstr(str);

return 0;
}
