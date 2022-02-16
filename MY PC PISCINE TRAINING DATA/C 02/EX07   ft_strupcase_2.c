#include <stdbool.h>
#include <stdio.h> //for printf



char *ft_strupcase(char *str)
{
	int i;
	i = 0;

	while (true)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
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

    char str[10] = "fgjcgukl";
    printf("string is %s \n", str);

	printf("return is %s \n", ft_strupcase(str));


return 0;
}
