#include <stdbool.h>
#include <stdio.h> //for printf



int is_alphanum (char c)
{
    return ((c >= '0' && c <= '9') ||
            (c >= 'a' && c <= 'z') ||
            (c >= 'A' && c <= 'Z'));
}


char *ft_strcapitalize(char *str)
{
	int i;
	i = 1;


	    if (is_alphanum(str[0]))
            str[0] = str[0] >= '0' && str[0] <= '9' ? str[0] : str[0] - 32;

        while (str[i] != '\0')
	    {
	        if(is_alphanum(str[i-1]) == 0 && is_alphanum(str[i]) == 1)
                //if previous is NOT alphanum and next IS
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] >= '0' && str[i] <= '9' ? str[i] : str[i] - 32;
                    // or also can be written as:
                    /*
                    if (!(str[i] >= '0' && str[i] <= '9'))
                    {
                        str[i] -= 32;
                    }
                    */
            }

            if (is_alphanum(str[i - 1]) == 1 && is_alphanum(str[i]) == 1)
            {
                if (str[i] >= 'A' && str[i] <= 'Z')
                    str[i] = str[i] >= '0' && str[i] <= '9' ? str[i] : str[i] + 32;
                    // or also can be written as:
                    /*
                    if (!(str[i] >= '0' && str[i] <= '9'))
                    {
                        str[i] += 32;
                    }
                    */
            }
        i++;
	    }

	return (str);
}

int main()
{

    char str[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un pLEGA";
    printf("INPUT:\n  salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un pLEGA \n");
	printf("MUST BE:\n  Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un Plega \n");
	printf("my return is:\n  %s \n\n",  ft_strcapitalize(str));



return 0;
}
