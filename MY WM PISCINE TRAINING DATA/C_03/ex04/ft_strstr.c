#include <unistd.h>
#include <stdio.h> //for printf
#include <string.h>


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

char *ft_strstr(char *str, char *to_find)
{
    int i, j;

    i = 0;
    j = 0;
    if (to_find[0] == '\0') //this one works
    {
        return str;
    }

    while (*str)
    {
        while (to_find[j] && str[i] == to_find[j])
        {
            ++i;
            ++j;
        }
        if (to_find[j] == 0)
        {
            return str+(i-j);
        }

        ++str;
    }

    return NULL;
}


int main(void)
{
    char str1[50] = "Wsh cama cava ololol yyy";
    char str2[10] = "cava";
    printf("searching for \"%s\" \n", str2);
    printf("return is %s", strstr(str1, str2));
    printf("\n");
    printf("return is %s", ft_strstr(str1, str2));

return 0;
}

