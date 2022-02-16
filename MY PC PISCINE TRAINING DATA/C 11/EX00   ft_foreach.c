#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void nb_to_hex(int nb)
{
    if (nb > 9)
        nb_to_hex(nb /10);
    write(1, &"0123456789"[nb % 10], 1);
}

void ft_foreach(int *tab, int length, void(*f)(int))
{
    int i;

    i = 0;
    while (i < length)
        f(tab[i++]);
}

int main () {
    int i = 0;
    int *tab;
    int length = 10;
    tab = malloc(length * sizeof(int));

    while (i < length)
    {
        tab[i]= i;
        i++;
    }
    ft_foreach(tab, length, &nb_to_hex);

return 0;
}
