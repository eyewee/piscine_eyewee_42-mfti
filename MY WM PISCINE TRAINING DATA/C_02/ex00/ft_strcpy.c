#include <unistd.h>
#include <stdio.h>



char	*ft_strcpy(char *dest, char *src) //returns a ptr on the first char of the string
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
    char str2[11] = "Look man2!";

    char test[11] = "Test text";
    printf("%s \n", str2);

    ft_strcpy(str2, test);
    printf("%s \n ", str2);

return 0;
}

