#include <unistd.h>
#include <stdlib.h>
#include <stdio.h> //for printf




int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9'))
			return 0;
		++i;
	}
	return 1;
}




int main()
{

    char *str = NULL;
	str = "123";
    printf("string is %s \n", str);

	printf("return is %d", ft_str_is_numeric(str));


return 0;
}
