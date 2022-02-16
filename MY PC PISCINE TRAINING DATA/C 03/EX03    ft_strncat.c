#include <unistd.h>
#include <stdio.h> //for printf
#include <string.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    int size;

    i = 0;
    size = ft_strlen(dest);

    while ( i <= nb )
    {
        dest[size+i] = src[i];
        i++;
    }
    dest[size] = '\0';

    return dest;
}


int main(void)
{
    char str1[7] = "12345";
    char str2[10] = "ABCDEFG";
    printf("return is %s", strncat(str1, str2, 3));
    printf("\n");
    printf("return is %s", ft_strncat(str1, str2, 3));

return 0;
}
