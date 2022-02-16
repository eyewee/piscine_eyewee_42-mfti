#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define SIZE 10


int	ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

char *ft_strcpy(char *dest, char *src) //returns a ptr on the first char of the string
{
    int i;
    i = 0;
    while( src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

return dest;
}



int main()
{
    char str[10] = "Look man!";
    char str2[15] = "Look man2!";

    char test[11] = "Test text";
    printf("%s \n %s \n\n", str, str2);

    strcpy(str, "Ololosh");
    printf("%s \n \n", str);

    ft_strcpy(str2, "lemmesee text");
    printf("%s \n ", str2);

return 0;
}
