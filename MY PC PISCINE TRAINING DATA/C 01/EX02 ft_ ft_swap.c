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



int main (){ //testing if ok

    int a = 111;
    int b = 222;


    printf(" before swap A = %d, B = %d \n", a, b);

    ft_swap(&a, &b);

    printf(" after swap A = %d, B = %d", a, b);

return 0;
}
