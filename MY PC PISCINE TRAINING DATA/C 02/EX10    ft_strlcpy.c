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

    char string[2] = "w"; //2 chars
    char *string2 = "ab"; //3 chars
    int i;
    for( i = 0; i < 2; i++ )
        printf("%c", string[i]);  // 'a' at the end is the NUL char
    printf("  <= dest string (a=null char)\n");
    printf("%s   <= dest string \n\n", string);

    ft_strlcpy(string, string2, 1);
    for( i = 0; i < 2; i++ )
        printf("%c", string[i]);
    printf(" <= dest MODIFIED string (a=null char)\n");
    printf("%s   <= dest MODIFIED string \n", string);


return 0;
}
