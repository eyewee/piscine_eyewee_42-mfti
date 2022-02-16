#include <unistd.h>
#include <stdlib.h>
#include <stdio.h> //for printf




int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') &&
			(str[i] < 'a' || str[i] > 'z'))
			return 0;
		++i;
	}
	return 1;
}




int main()
{

    char *str = NULL;
	str = "abc-";
    printf("%s \n", str);

	printf("%d", ft_str_is_alpha(str));


return 0;
}
