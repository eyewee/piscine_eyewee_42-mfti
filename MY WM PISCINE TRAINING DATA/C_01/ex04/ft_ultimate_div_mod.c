#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_ultimate_div_mod(int *a, int *b)
{
	int div = (*a / *b);
	int mod	= (*a % *b);
	*a = div;
	*b = mod;
}


int main () {

int a = 256;
int b = 3;

printf("before manip a = %d; b = %d \n", a, b);

ft_ultimate_div_mod(&a, &b);

printf("after manip a(div) = %d; b(mod) = %d;\n", a, b);


return 0;
}

