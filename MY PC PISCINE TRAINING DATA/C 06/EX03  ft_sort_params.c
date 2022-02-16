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

int		main(int argc, char *argv[])
{
	ft_sort(argc, argv);
	while (--argc)
	{
		while (*argv[argc])
			write(1, argv[argc]++, 1);
		write(1, "\n", 1);
	}
	return (0);
}
