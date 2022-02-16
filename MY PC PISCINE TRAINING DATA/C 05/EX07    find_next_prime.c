#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>


int  ft_find_next_prime(int nb)
{
    int divisor, k;
    divisor = 2;
    while (divisor * divisor < nb)
    {
        k = divisor * divisor
        while ( k < nb)
        {
            k += i;
            prime[k] = 1;
        }
        divisor++;
    }
    return prime;
}

int main()
{
    printf("%3d",  ft_find_next_prime(8));


return 0;
}
