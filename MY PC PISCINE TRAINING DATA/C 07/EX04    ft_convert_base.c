#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_in_base(char c, char *base)
{
	int i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int		ft_checkbase(char *base)
{
	int i;

	i = -1;
	while (base[++i])
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| ft_in_base(base[i], base+i+1) >= 0
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
	return ((i < 2) ? 0 : i);
}

int		ft_atoi_base(char *str, char *base, int size)
{
	int i;
	int n;
	int sign;

	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;

	sign = 1;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign *= -1;
	n = 0;
	while ((i = ft_in_base(*str++, base)) >= 0)
		n = n * size + i;
	if (sign)
		n *= -1;
	return (n);
}

int		ft_nbrlen(unsigned int n, unsigned int base_size)
{
	if (n < base_size)
		return (1);
	return (1 + ft_nbrlen(n / base_size, base_size));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*dest;
	unsigned int	nb;
	int				size;
	int				i;
	int				n;

	n = ft_checkbase(base_from);
	if (!(n && (size = ft_checkbase(base_to))))
		return (NULL);
	n = ft_atoi_base(nbr, base_from, n);
	nb = (n < 0) ? -n : n;
	i = ft_nbrlen(nb, size) + ((n < 0) ? 1 : 0);
	if (!(dest = malloc((i + 1) * sizeof(char))))
		return (NULL);
	dest[i] = '\0';
	while (i--)
	{
		dest[i] = base_to[nb % size];
		nb /= size;
	}
	if (n < 0)
		dest[0] = '-';
	return (dest);
}

int		main()
{
	printf("result : %s \n", ft_convert_base("2147483647", "0123456789", "0123456789abcdef"));
	printf("result : %s \n", ft_convert_base("---------7fffffff", "0123456789abcdef", "01"));
	printf("result : %s \n", ft_convert_base("---+--0001023a", "0123456789", "0123456789"));
	printf("result : %s \n", ft_convert_base("-0", "0123456789", "abcdefghij"));

	return (0);
}
