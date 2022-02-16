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


int is_whitespace(char str[])
{
    return ( *str == '\t'
          || *str == '\n'
          || *str == '\v'
          || *str == '\f'
          || *str == '\r'
          || *str == ' ' );
}


int		ft_atoi_base(char *str, char *base)
{
	int result;
	int sign;

	result = 0;
	sign = 1;

	while (is_whitespace(++str));

	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;

	while ('0' <= *str && *str <= '9')
	{
		result *= 10;
		result += (sign * (*(str) - '0'));
		str++;
	}
	// 'result' is an integer so just give it to ft_print
	ft_putnbr_base(result, base);
}



int main()
{
    char *base_dec = "0123456789";
    char *base_hex = "0123456789ABCDEF";
    char *base_bin = "01";
    char *base_oct = "poneyvif";

    char *str = " ---+--+555ab567";
    ft_atoi_base(str, base_dec);
     /*ft_putnbr_base(nbr, base_hex);*/


return 0;
}
