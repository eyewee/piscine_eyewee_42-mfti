#include <unistd.h>


void ft_putchar(char c) {

write (1, &c, 1);

}


void ft_print_comb (void) {


char a, b, c;
a='0';

while ( a <= '7') {

    b = a+1;

while (b <= '8') {
    c=b+1; //c will always be +1 bigger than b


if (c != '9') {

    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(c);
    ft_putchar(',');
    c++;
}
else
{
    b++;
}

}
a++;
}



}



int main () {

 ft_print_comb ();


return 0;
}
