#include <string.h>
#include <unistd.h>




int main(void)
{

    char str;
    str = 'B';
    printf("long int size is = %d\n", sizeof(long));

    /* initialisation */
    char string[]="0123456789ABCDEF";       // array of characters corresponding to numbers from 0 to 15
    uint16_t ptr;

    /* these lines go inside the loop */
    while (str)
    {
    ptr = (uint16_t) &str;                // store 16-bit address of 'value'

    putchar( string[ (ptr >>  4) & 0xF ] );
    putchar( string[ (ptr >>  0) & 0xF ] ); // Write out lowest 4-bits of memory address

    }

return 0;
}
