#include <unistd.h>

int		ft_strcmp(char *s1, char *s2) //each argv is a pointer to a string beginning so u compare these strings
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2); //result may vary
		++s1;
		++s2;
	}
	return (*s1 - *s2); //result will be 0
}

void	ft_sort(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i++ < argc)
	{
		j = 1;
		while (++j < argc)
		{
			if (ft_strcmp(argv[j - 1], argv[j]) < 0) //<0 means s2 was bigger
			{
				tmp = argv[j - 1];
				argv[j - 1] = argv[j];
				argv[j] = tmp;
			}
		}
	}
}

void ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int main    (int argc, char *argv[])
{
    int i;
    i = 1;
	ft_sort(argc, argv);
    while (i < argc)
    {
        ft_putstr(argv[argc-i]);
	write (1, "\n", 1);
	i++;
    }

return 0;
}

