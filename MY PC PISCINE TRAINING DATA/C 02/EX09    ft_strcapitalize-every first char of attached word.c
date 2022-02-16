#include <stdbool.h>
#include <stdio.h> //for printf


/*
char *ft_strcapitalize(char *str)
{
	int i;
	i = 0;

	while (true)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        i++;

        while (str[i] >= 'a' && str[i] <= 'z' )
        {
            i++;
            if (str[i] >= ' ' && str[i] <= '/')
            {
                break; //breaks the while loop
            }
        }

        if (str[i] == '\0')
        {
            break; //breaks the if loop
        }

	}

	return (str);
}
*/

char *ft_strcapitalize(char *str)
{
	int i;
	i = 0;

	while (true)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
            while (str[i] != ' ' || (str[i] >= 'a' && str[i] <= 'z'))
                i++;
        }

        if (str[i] == '\0')
        {
            break; //breaks the if loop
        }
        i++;
	}

	return (str);
}


int main()
{

    char str[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("my return is:\n  %s \n\n",  ft_strcapitalize(str));
	printf("MUST BE:\n  Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un \n");


return 0;
}
