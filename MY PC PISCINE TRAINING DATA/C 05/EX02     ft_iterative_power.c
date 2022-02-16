#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int ft_iterative_power(int nb, int power)
{
    if (power < 0)
        return 0;
    if (power == 0)
        return 1;

    int val = nb;
    while (--power)
        val *=nb;
    return val;
}

int main()
{
    printf("%d", ft_iterative_power(2, 3));

return 0;
}
