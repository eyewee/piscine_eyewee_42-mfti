#include <unistd.h>
#include <stdlib.h>
#include <stdio.h> //for printf




int	 ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 31)
			return 0;
		++i;
	}
	return 1;
}




int main()
{

    char *str = NULL;
	str = "fgj78|!/*4-";
    printf("string is %s \n", str);

	printf("return is %d",  ft_str_is_printable(str));


return 0;
}
