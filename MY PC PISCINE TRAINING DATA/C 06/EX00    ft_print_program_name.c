#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int main    (int argc, char *argv[])
{
    if (argc)
        ft_putstr(*argv);
    write (1, "\n", 1);

return 0;
}
