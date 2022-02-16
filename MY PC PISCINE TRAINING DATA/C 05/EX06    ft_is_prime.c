#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>


int ft_is_prime(int nb)
{
    int divisor;
    divisor = 2;
    while (divisor * divisor <= nb)
    {
        if (nb % divisor == 0)
            return 0;
        divisor++;
    }
    return 1;
}

int main()
{
    printf("%d", ft_is_prime(5));


return 0;
}
