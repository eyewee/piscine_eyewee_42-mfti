#include <stdbool.h>
#include <stdio.h> //for printf



char *ft_strlowcase(char *str)
{
	int i;
	i = 0;

	while (str)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }

        else if(str[i] == '\0')
        {
            break; //breaks the if loop
        }
        i++;
	}

	return (str);
}


int main()
{

    char str[20] = "D - E";
    printf("string is %s \n", str);

	printf("return is %s \n", ft_strlowcase(str));


return 0;
}

