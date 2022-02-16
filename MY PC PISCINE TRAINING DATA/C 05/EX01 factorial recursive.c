#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1)); //but this is very uneffective and mem consuming

}

int main()
{
    printf("%d", ft_recursive_factorial(4));


return 0;
}
