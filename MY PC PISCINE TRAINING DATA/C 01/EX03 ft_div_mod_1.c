#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = (a/b);
    *mod = (a%b);
}



int main (){ //testing if ok

    int a = 256;
    int b = 3;

    int div;
    int mod;

    printf(" before manipulation a = %d, b = %d \n", a, b);

    ft_div_mod(a, b, &div, &mod);

    printf(" *div = %d, and *mod = %d", div, mod);

return 0;
}
