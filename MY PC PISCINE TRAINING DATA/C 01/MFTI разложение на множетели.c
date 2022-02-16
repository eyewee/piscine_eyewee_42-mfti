#include <stdio.h>


void print_number_factors(int x)
{
    printf("number factors: ");
    int divisor = 2;

    while (x != 1)
    {
        while(x%divisor == 0)
        {
            printf("%d ", divisor);
            x /= divisor;
        }
        divisor += 1;
    }
    printf("\n");
}


//version using if insteat of while in loop
void print_number_factors_2(int x)
{
    printf("number factors: ");
    int divisor = 2;

    while (x != 1)
    {
        if (x%divisor == 0)
        {
            printf("%d ", divisor);
            x /= divisor;
        }
        else
            divisor += 1;

    }
    printf("\n");
}




int main (int argc, char* argv[])
{
    int x;
    printf("enter nb to factorise: ");
    scanf("%d", &x);

    print_number_factors(x);
    print_number_factors_2(x);

    return 0;
}
