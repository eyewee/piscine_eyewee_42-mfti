#include <unistd.h>
#include <string.h>
#include <stdio.h> //for printf



char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    i = 0;
    while( i < n) //until the char limit we set is reached
    {
        dest[i] = src[i];
        i++;
    }

return dest;
}



int main()
{

    char string[4] = "www";
    int i;
    for(i=0; i<sizeof(string); i++)
    {
        printf("%c", string[i]);  // 'a' at the end is the NUL char
    }
    printf("\n");

    ft_strncpy(string, "cccc", 4); // > makes "cccc" without \0 at the end
    for(i=0; i<sizeof(string); i++)
    {
        printf("%c", string[i]);
    }
    printf("\n");

    string[4] = '\0'; //this will make printf work
    printf("%s", string);



return 0;
}
