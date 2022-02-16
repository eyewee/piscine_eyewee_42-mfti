#include <unistd.h>
#include <stdio.h> //for printf
#include <string.h>




unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;

    i = 0;

    while (*dest && i++ < size) //count dest untill it's out of printable chars
        dest++;

    while (*src && i+1 < size) // now start putting src into dest
    {
        *dest = *src;
        dest++;
        src++;
        i++;
    }
    if (i < size)
        *dest = 0;
    while (*src++)
        i++;

    return (i);

}


int main(void)
{
    char dest[10] = "123";
    char src[] = "456";


    printf("\n");
    printf("return is %d", ft_strlcat(dest, src, 4 ) );
    printf("\n%s", dest );

return 0;
}
