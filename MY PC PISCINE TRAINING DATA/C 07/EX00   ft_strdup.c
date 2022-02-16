#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
    int n;

    n= 0;
	while(str[n++]);

return n-1;
}

char *ft_strdup(char *src)
{
    int i;
    char *copy = (char*)malloc(ft_strlen(src));

    i = 0;
    if (!copy)
        return (NULL);

    while (src[i] != '\0')
    {
        copy[i] = src[i];
        i++;
    }
    copy[ft_strlen(src)] = '\0';

    return copy;
}



int		main()
{
    char string[] = "Mista Bond!";
    printf("%d\n", ft_strlen(string));
    printf("%s", ft_strdup(string));


	return (0);
}
