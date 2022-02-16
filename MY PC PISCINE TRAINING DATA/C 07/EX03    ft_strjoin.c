#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

long int		ft_strlen(char *str)
{
	long int n;

	n = 0;
	while (str[n++]);

	return (n);
}

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;

	return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    char *ret;
    char *tmp;
    long int total_length;

    if (size == 0)
    {
        ret = (char *)malloc(1);
        ret[0] = 0;
        return ret;
    }

    total_length = 0;
    i = 0;
    while (i < size)
        total_length += ft_strlen(strs[i++]); //totally how many chars


    ret = (char *)malloc(total_length + (ft_strlen(sep) * (size-1)) + 1);
    // now ret is ready to be filled with all the strings

    //initialize tmp, putting ret with strs[0] at the beginning of ret.
    tmp = ft_strcpy(ret, strs[0]);

    i = 1;
    while (i < size)
	{
		tmp = ft_strcpy(tmp, sep);
		tmp = ft_strcpy(tmp, strs[i++]);
	}
	*tmp = 0;
	return (ret);
}


int		main()
{
    char *result;
    char **strs = (char**)malloc(4 * sizeof(strs));
    strs[0] = "so now";
    strs[1] = "you are able";
    strs[2] = "to merge strings?";
    char *separator = " ";

    result = ft_strjoin(3, strs, separator);
    printf("%s", result);
    free(result);

	return (0);
}
