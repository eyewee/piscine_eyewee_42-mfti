#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define SIZE 10
#define FILLSTART 1

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    while(i < size/2)
    {
        int tmp = tab[i]; // temporary saves the value
        tab[i] = tab[size-1-i]; //now the 1st value gets replaced by the last value
        tab[size-1-i] = tmp; //puts saved value to the end
        i++;
    }
}



int main()
{
    int tab[SIZE];
    for(int i = 0; i < SIZE; ++i) //creates an array filled up
    {
      tab[i] = i;
    }

    for(int i = 0; i < SIZE; ++i) //prints this array
    {
        printf(" %d ", tab[i]);
    }
    printf("\n");

//////////////////////////////////////////////////////////
    ft_rev_int_tab(tab, SIZE);


    for(int i = 0; i < SIZE; ++i) // prints the modified array
    {
        printf(" %d ", tab[i]);
    }
    printf("\n");

return 0;
}
