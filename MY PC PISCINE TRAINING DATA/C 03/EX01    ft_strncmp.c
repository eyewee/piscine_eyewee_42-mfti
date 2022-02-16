#include <unistd.h>
#include <stdio.h> //for printf
#include <string.h>



void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int outcome;
    int i;

    outcome = 0;
    i = 0;
    while (i != n)
    {
        if (s1[i] < s2[i])
        {
            outcome = -(s2[i] - s1[i]);
            break;
        }

        else if (s1[i] > s2[i])
        {
            outcome = s1[i] - s2[i];
            break;
        }

        else
            outcome = 0;
        i++;
    }
    return outcome;
}


int main(void)
{
    char str1[] = "aaa123";
    char str2[] = "aaa456";
    printf("if 0 = identical,\nif -1 = s1 is lesser,\nif 1 = s1 is greater,\n=> result is %d \n", strncmp(str1, str2, 3));
    printf("\n");
    printf("if 0 = identical,\nif -1 = s1 is lesser,\nif 1 = s1 is greater,\n=> result is %d \n", ft_strncmp(str1, str2, 3));


return 0;
}
