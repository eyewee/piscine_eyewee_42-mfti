#include <unistd.h>
#include <stdlib.h>
#include <stdio.h> //for printf




int	 ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return 0;
		++i;
	}
	return 1;
}




int main()
{

    char *str = NULL;
	str = "ABCDEFGJIJKLMNOPQRSTUVWXYZ";
    printf("string is %s \n", str);

	printf("return is %d",  ft_str_is_lowercase(str));


return 0;
}
