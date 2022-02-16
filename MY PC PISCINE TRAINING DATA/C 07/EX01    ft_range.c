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


int		main()
{
    int i = 0;
   int min = 2;
   int max = 20;
   while (i < max)
       printf("%d, ", (ft_range(min, max)[i++]));

	return (0);
}
