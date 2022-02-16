#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>



int is_whitespace(char str[])
{
    return ( *str == '\t'
          || *str == '\n'
          || *str == '\v'
          || *str == '\f'
          || *str == '\r'
          || *str == ' ' );
}

/*
int is_charnumb(char str[])
{
    return (*str >= '0' && *str <= '9');
}




int ft_atoi(char *str)
{
    unsigned int i, j, counter; //counter will count the amount of numbers, must not overcome 10
    i = 0;
    j = 0;
    counter = 10;

////////loop to find max 10 digits in our string///////////////////////////////////////////////
    while(str+i !='\0' || counter != 0)
    {
        while (is_charnumb(str+i))
        {
            j++;
            counter--;
            i++;
        }
        //now if previous loop is finished and counter is still not 0
        if (j != 0) //if we counted any number in j
        {
            counter = i-j; //now counter keeps index from where to print our integers
            break;
        }
        i++;
    }
    counter = i-j;


////////loop to to manage -+ signs, and min/max values///////////////////////////////
    i = 0;
    int number;
    while (*str >= '0' && *str <= '9')
    {
        number *= 10;
        number = str[counter] - 48;
        j--;
        counter++;
    }

    return number;
}*/

int		ft_atoi(char *str)
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
	return (result);
}


int main()
{
    char *str = " ---+--+1234ab567";
    printf("%d \n",atoi(str)) ;
    printf("%d \n",ft_atoi(str));


return 0;
}
