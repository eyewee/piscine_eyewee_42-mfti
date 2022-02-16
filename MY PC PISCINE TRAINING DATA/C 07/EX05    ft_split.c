#include <stdio.h>
#include <stdlib.h>


int			is_in_charset(char c, char *charset) //if at least 1 char is present in given str
{
	while (*charset)
		if (c == *charset++)
			return (1);

	return (0);
}

long long	ft_count(char *str, char *charset)
{
	long long cnt;

	cnt = 0;
	while (*str++)
		if (!is_in_charset(*str, charset))
            ++cnt;
            // doesn't count charset letters bcz they won't be printed

	return (cnt);
}

void		ft_strcpy(char *dst, char *from, char *until)
{
	while (from < until)
		*(dst++) = *(from++);
	*dst = 0;
}


char		**ft_split(char *str, char *charset)
{
	char		**ret;
	long long	idx;
	char		*from;

	ret = (char**)malloc(sizeof(char*) * ft_count(str, charset) + 1);
	idx = 0;
	while (*str)
	{
		if (!is_in_charset(*str, charset))
		{
			from = str; //the starting point of str
			while (*str && !is_in_charset(*str, charset)) //while chars are without charset separator
				++str;

			ret[idx] = (char*)malloc(str - from + 1); //first appearence of charset in str => create ptr on str
			ft_strcpy(ret[idx++], from, str); //copy 'from' amount of chars until 'str[i]'

		}
		++str;
	}
	ret[idx] = 0;
	return (ret);
}

int		main()
{
    int i = 0;
    char **string = ft_split("Hello fellow! How's_it+going?", " +'_");
    while (string[i] != '\0')
        printf("%s\n", string[i++]);


	return (0);
}
