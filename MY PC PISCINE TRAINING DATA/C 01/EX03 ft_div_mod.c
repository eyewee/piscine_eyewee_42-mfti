#include <unistd.h>
#include <stdio.h>
#include <assert.h>


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
    assert(div != 0);
    assert(mod != 0);
    int aa = (a/b);
    int bb = (a%b);

    div = &aa;
    mod = &bb;
}



int main (){ //testing if ok

    int a = 256;
    int b = 3;

    int *div;
    div = 0;

    int *mod;
    mod = 0;


    printf(" before manipulation a = %d, b = %d \n", a, b);

    ft_div_mod(a, b, div, mod);

    printf(" *div = %d, and *mod = %d", *div, *mod);

return 0;
}
