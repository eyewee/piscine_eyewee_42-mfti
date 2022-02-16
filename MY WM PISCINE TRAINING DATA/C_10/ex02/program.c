# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <libgen.h>
# include <errno.h>
# include <string.h>

char	*g_prog;
char	*g_buf;
int		g_fd;
int		g_buf_size;

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	print_error_msg(char *file)
{
	ft_putstr(basename(g_prog));
	ft_putstr(": ");
	ft_putstr(file);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
}

int		ft_atoi(char *str)
{
	int ret;

	ret = 0;
	while (*str)
	{
		ret *= 10;
		ret += (*str - '0');
		str++;
	}
	return (ret);
}

void	display_file(int fd)
{
	long long	idx;
	int		tmp;

	if (g_buf_size == 0)
	{
		while (read(fd, g_buf, 1))
			if (errno)
				return ;
	}
	else
	{
		idx = 0;
		while (read(fd, &g_buf[(idx % g_buf_size)], 1))
		{
			if (errno)
				return ;
			++idx;
		}
		tmp = idx % g_buf_size;
		if (idx >= g_buf_size)
			write(1, g_buf + tmp, g_buf_size - tmp);
		write(1, g_buf, tmp);
	}
}

void	display(int argc, char *argv[])
{
	int i;
	int k;

	i = 2;
	k = 0;
	while (++i < argc)
	{
		errno = 0;
		if ((g_fd = open(argv[i], O_RDONLY)) == -1)
		{
			print_error_msg(argv[i]);
			continue ;
		}
		if (argc > 4)
		{
			if (k)
				ft_putstr("\n");
			ft_putstr("==> ");
			ft_putstr(argv[i]);
			ft_putstr(" <==\n");
		}
		k = 1;
		display_file(g_fd);
		close(g_fd);
	}
}

int		main(int argc, char *argv[])
{
	g_prog = argv[0];
	g_buf_size = ft_atoi(argv[2]);
	g_buf = (char*)malloc(g_buf_size);
	if (argc == 3)
		display_file(0);
	else
		display(argc, argv);
	free(g_buf);
	return (0);
}
