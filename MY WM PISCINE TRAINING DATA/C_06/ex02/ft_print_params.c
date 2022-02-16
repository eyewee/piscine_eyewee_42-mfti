#include <stdio.h>
#include <unistd.h>


int main    (int argc, char *argv[])
{
    int i;

    i = 1;
    while (i < argc)
    {
        while(*argv[argc-i])
		write(1, argv[argc-i]++, 1);
        write (1, "\n", 1);
	i++;
    }

return 0;
}
