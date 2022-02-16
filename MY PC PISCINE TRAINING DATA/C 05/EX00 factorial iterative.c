#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int ft_iterative_factorial(int nb)
{
    int result;
    result = 1;

    while (nb)
    {
        result *= nb --;
    }
    return result;
}

int main()
{
    printf("%d", ft_iterative_factorial(4));


return 0;
}
