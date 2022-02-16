#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int	ft_strlen(char *str)
{
	int counter;
	counter = 0;

	while(*(str++) != '\0')
		counter++;

return counter;
}


int     base_correct(char *base) //works fine
{
    int i;
    i = 0;

    while (base[i] != '\0')
    {
        if(base[i] == ' '
           || base[i] == '+'
           || base[i] == '-'
           || base[i] == '\t'
           || base[i] == '\n'
           || base[i] == '\v'
           || base[i] == '\r'
           || base[i] == '\f'
           || ft_strlen(base) <= 1)
            {
                return 0;
                break;
            }

        if (base[i] == base[i+1])
            {
                return 0;
                break;
            }
        i++;
    }
return 1;
}


void	ft_print(int number, char *base, int base_length)
{
	if (number == -2147483648)
	{
		ft_print(number / base_length, base, base_length);
		write(1, &(base[-(number % base_length)]), 1); //add '8' when all numbers are printed
		return ;
	}
	if (number < 0)
	{
		write(1, "-", 1);
		ft_print(-number, base, base_length);
		return ;
	}

	if (number > base_length - 1)
		ft_print(number / base_length, base, base_length);

	write(1, &(base[number % base_length]), 1);
}

void    ft_putnbr_base(int nbr, char *base)
{

    while(!base_correct(base)) //works fine
    {
        break;
    }
    ft_print(nbr, base, ft_strlen(base));

}



int main()
{
    int nbr = 111111;
    char *base_dec = "0123456789";
    char *base_hex = "0123456789ABCDEF";
    char *base_bin = "01";
    char *base_oct = "poneyvif";

    ft_putnbr_base(nbr, base_hex);


return 0;
}
