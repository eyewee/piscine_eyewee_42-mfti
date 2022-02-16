#include <unistd.h>
#include <fcntl.h>

void ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}


int main (int argc, char *argv[]) 
{
	int fd; // file_descriptor
	int rd; //reading file
	char c; //place holder for every char in the file

	if (argc  == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			ft_putstr("Cannot read file.\n");
		else
		{
			rd = read(fd, &c, sizeof(c));
			while (rd)
			{	
				write(1, &c, 1);
				rd = read(fd, &c, sizeof(c));
			}
			close(fd);
		}
	}
	

	return 0;
}
