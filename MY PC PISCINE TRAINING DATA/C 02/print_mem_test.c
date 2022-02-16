#include <unistd.h>
#include <stdio.h> //for printf


void	ft_putchar(char c)
{
	write(1, &c, 1);
}




int main(void)
{

    char *str;
     unsigned char tmp;


    str = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. ";

    tmp = *(1+ (unsigned char*) str); // MSB
    putchar( "0123456789abcdef"[tmp >> 4] );
    putchar( "0123456789abcdef"[tmp & 0xF] );

    tmp = *(0+ (unsigned char*) str); // LSB
    putchar( "0123456789abcdef"[tmp >> 4] );
    putchar( "0123456789abcdef"[tmp & 0xF] );

    printf("\n long int size is = %d", sizeof(long));


return 0;
}
