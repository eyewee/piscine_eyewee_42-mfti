#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define SIZE 10


int	ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    while(i < size)
    {
        int k = i;
        while(k > 0 && tab[k-1] > tab[k])
        {
            int tmp = tab[k-1];
            tab[k-1] = tab[k];
            tab[k] = tmp;
            k--;
        }
     i++;
    }
}



int main()
{
    /*
    int tab[SIZE];
    for(int i = 0; i < SIZE; ++i) //creates an inversed array filled up
    {
        tab[i] = SIZE-1-i;
    }
    */
    int tab[10] = {8, 4, 1, 8, 7, 1, 5, 9, 4, 2};

    for(int i = 0; i < SIZE; ++i) //prints this array
    {
        printf(" %d ", tab[i]);
    }
    printf("\n");

//////////////////////////////////////////////////////////
    ft_sort_int_tab(tab, SIZE);


    for(int i = 0; i < SIZE; ++i) // prints the modified array
    {
        printf(" %d ", tab[i]);
    }
    printf("\n");

return 0;
}
