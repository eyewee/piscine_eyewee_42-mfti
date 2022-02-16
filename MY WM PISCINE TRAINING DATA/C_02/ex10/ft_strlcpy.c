#include <unistd.h>
#include <string.h>
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

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    i = 0;

    if ( size <= sizeof(dest))
    {
        while ( i != size-1)
        {
             dest[i] = src[i];
             i++;
        }
    }

    else
    {
        while ( i != sizeof(dest)-1)
        {
             dest[i] = src[i];
             i++;
        }
    dest[sizeof(dest)] = '\0';
    }

    if (size == 0 || (size <= sizeof(dest))) //NULL TERMINATION WITHOUT FILLING ALL THE REST BY 0
    {
        dest[size] = '\0';
    }

return ft_strlen(src);
}

int main()
{

    char string[4] = "www";
    char *string2 = "abcd";
    int i;
    for(i=0; i<4; i++)
        printf("%c", string[i]);  // 'a' at the end is the NUL char
    printf("    <= this is initial string printed char by char (a=null char)\n");
    printf("%s  <= initial string printed as string\n\n", string);

    ft_strlcpy(string, string2, 7); // > makes "ccc" with \0 at the end
    for(i=0; i<4; i++)
        printf("%c", string[i]);
    printf("    <= this is modified string printed char by char (a=null char)\n");
    printf("%s  <= modified string printed as string\n", string);
    printf("return size of function is: %d \n", ft_strlcpy(string, "cccc", 4));


return 0;
}

