#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int ft_sqrt(int nb)
{
    long long i;

    if (nb <= 0)
        return 0;

    i = 1;
    while (i * i < nb)
        i++;

    if (i * i == nb)
        return i;

    return 0;
}

int main()
{
    printf("%d", ft_sqrt(256));


return 0;
}
