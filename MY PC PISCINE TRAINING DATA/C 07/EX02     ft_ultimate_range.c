#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int *ft_range(int min, int max)
{
	int *ret;
	int *tmp;
	int i;

	if (min >= max)
		return (NULL);

	ret = (int*)malloc(sizeof(int) * (max - min));
	if (!ret)
		return (NULL);

	tmp = ret;
    i = 0;
	while (min < max)
        tmp[i++] = min++;


	return (ret);
}


int ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
        return 0;

	return (max-min);
}


int		main()
{
   int min = 2;
   int max = 15;
   int *range;
   printf("%d ", (ft_ultimate_range(&range, min, max)) );

	return (0);
}
