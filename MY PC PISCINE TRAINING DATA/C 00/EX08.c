#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}


// converting putchar into int
void ft_putnbr(int nb) {

    if (nb > 0) { // but it actually works in any case
        ft_putnbr(nb/10); //however, for >9 this shall work.
        ft_putchar('0'+ nb%10);
    }
}

//initialising number of values
int init_arrray (int n)
{
    int a[n];

    return a[n];
}


//looping combinations
void ft_print_comb2(void) { //to show combinations of 4 digits



    int n = 2;
    n = n - 1;
    int a[1]={0};

    init_arrray (n); //return int a[n]



        while (a[0] <= 9)
        {
         a[9] = a[0] + 9;

            while (a[9] <= 9)
                {

                ft_putnbr(a[0] / 10);
                ft_putnbr(a[0] % 10);

 while (n == 2)  {
                ft_putnbr(a[1] / 10);
                ft_putnbr(a[1] % 10);
                }
 while (n == 3)  {
                ft_putnbr(a[2] / 10);
                ft_putnbr(a[2] % 10);
                }
 while (n == 4)  {
                ft_putnbr(a[3] / 10);
                ft_putnbr(a[3] % 10);
                }
 while (n == 5)  {
                ft_putnbr(a[4] / 10);
                ft_putnbr(a[4] % 10);
                }
 while (n == 6)  {
                ft_putnbr(a[5] / 10);
                ft_putnbr(a[5] % 10);
                }
 while (n == 7)  {
                ft_putnbr(a[6] / 10);
                ft_putnbr(a[6] % 10);
                }
 while (n == 8)  {
                ft_putnbr(a[7] / 10);
                ft_putnbr(a[7] % 10);
                }
 while (n == 9)  {
                ft_putnbr(a[8] / 10);
                ft_putnbr(a[8] % 10);
                }
 while (n == 10) {
                ft_putnbr(a[9] / 10);
                ft_putnbr(a[9] % 10);
                }

                if ( a[0]!= 9)
                    {
                    ft_putchar(',');
                    ft_putchar(' ');
                    }

                a[9]++;
                }
            a[0]++;
        }

  }





//to process this value in a loop, which shows combinations of it
//
void ft_print_combn(int n) {
    ft_putnbr(n);

}


int main () {


    ft_print_combn(5);
    ft_putchar('\n');
    ft_print_comb2();


return 0;

}
