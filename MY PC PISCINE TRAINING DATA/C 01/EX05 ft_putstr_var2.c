#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c){
	write(1, &c, 1);
	return (0);
}


void ft_putstr(char *str)
{
	if (str)
	{
		while (*str != '\0')
		{
			ft_putchar(*str);
			++str;
		}
	}
}

int main(){
	char i[] = "Hello654";
	char *a;
	a = i;

	ft_putstr(a);
}
