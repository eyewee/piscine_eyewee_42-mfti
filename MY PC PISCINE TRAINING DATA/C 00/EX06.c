#include <unistd.h>


void ft_putchar(char c) {

write (1, &c, 1);

}

void ft_print_comb2(void) {
    char a = '0';
    char b;


while (a <= 99) {


    b= a + 1;


while (b <= 99)
    {
    ft_putchar('0' + a / 10);
    ft_putchar('0' + a % 10);
    ft_putchar(' ');
    ft_putchar('0' + b / 10);
    ft_putchar('0' + b % 10);
    if ( a!= 98 || b!= 99)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
    b++;
    }
    a++;

  }


}



int main () {


ft_print_comb2 ();


return 0;
}
