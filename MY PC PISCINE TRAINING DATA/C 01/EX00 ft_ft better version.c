#include <unistd.h>
#include <stdio.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_ft(int *nbr)
{
   *nbr = 42;

}



int main (){ //testing if ok

int *nbr; //creating ptr
int value = 0;
nbr = &value;
printf("result before is %d \n", *nbr);

ft_ft(nbr); // function will attribute 42 to this ptr
printf("result after is %d\n", *nbr);

return 0;
}
