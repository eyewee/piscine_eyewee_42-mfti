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

char *ft_strcat(char *dest, char *src)
{
    int i;
    int size;

    i = 0;
    size = ft_strlen(dest);

    while (src[i++] != '\0')
    {
        dest[size+i] = src[i];
    }
    dest[size] = '\0';

    return dest;
}


int main(void)
{
    char str1[50] = "12345";
    char str2[10] = "- 678910";
    printf("return is %s", strcat(str1, str2));
    printf("\n");
    printf("return is %s", ft_strcat(str1, str2));

return 0;
}

