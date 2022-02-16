#include <stdio.h>
# define ABS(Value) ((Value < 0) ? -Value : Value)


int	main(void)
{
	int	index;

	index = -5;
	while (index < 5)
	{
		printf("macros::abs(%d) = %d\n", index, ABS(index));
		index++;
	}
}
