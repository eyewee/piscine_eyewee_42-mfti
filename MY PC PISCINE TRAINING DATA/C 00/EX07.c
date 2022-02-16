#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void ft_putnbr(int nb) {

    if (nb > 9) { // but it actually works in any case
        ft_putnbr(nb/10); //however, for >9 this shall work.
        ft_putchar('0'+ nb%10);
    }

    else if (nb < 9 && nb >= 0) {
        ft_putchar('0'+ nb);
    }

    else if (nb == -2147483648) {
        ft_putnbr(nb / 10);
        ft_putchar('8');
    }

    else if (nb < 0) {
        ft_putchar('-'); //in any other case, means if int < 0
        ft_putnbr(-nb);

    }

}

int main () {

    ft_putnbr(5111);
    ft_putchar('\n');
    ft_putnbr(0);
    ft_putchar('\n');
    ft_putnbr(2147483647);
    ft_putchar('\n');
    ft_putnbr(-2147483648);

return 0;
}
