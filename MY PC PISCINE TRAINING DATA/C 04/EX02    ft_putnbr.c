#include <unistd.h>
#include <stdlib.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void ft_putnbr(int nb)
{
    if (nb > 9)
       ft_putnbr(nb / 10);

    if (nb == -2147483648)
    {
        ft_putnbr(nb / 10);
        ft_putchar('8');
    }

    else if (nb < 0) {
        ft_putchar('-');
        ft_putnbr(-nb);
    }

    ft_putchar("0123456789"[nb % 10 ]);
}



int main()
{
    int nbr = 789456;
    int max = 2147483647;
    int min = -2147483648;
    ft_putnbr(nbr);


return 0;
}
