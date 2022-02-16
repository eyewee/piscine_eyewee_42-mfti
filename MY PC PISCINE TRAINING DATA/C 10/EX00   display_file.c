#include <unistd.h>
#include <stdio.h>



int		ft_atoi(char *str)
{
	int ret;

	ret = 0;
	while (*str)
	{
		ret *= 10;
		ret += (*(str++) - '0');
	}
	return (ret);
}

int main () {

    char *c = "1234";
    int i;
    printf("ft atoi = %d", i = ft_atoi(c));

return 0;
}
