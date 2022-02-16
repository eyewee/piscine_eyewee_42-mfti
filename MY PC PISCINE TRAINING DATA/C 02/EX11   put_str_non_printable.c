#include <unistd.h>
#include <stdio.h> //for printf

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr_non_printable(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        if ((str[i] < 32 || str[i] == 127))
        {
            ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
        }
        ft_putchar(str[i]);
        i++;
    }
}


int main()
{
    char *str = "\n";
    ft_putstr_non_printable(str);


return 0;
}
