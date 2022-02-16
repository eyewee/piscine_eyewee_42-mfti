#include <stdio.h>
#include <stdbool.h>

bool is_prime_number (int x)
{
    int divisor = 2;
    while (divisor*divisor <= x)
    {
        if (x%divisor == 0)
        {
            return false;
        }
        divisor++;
    }

    return true;
}


int main () {


for (int i = 1; i < 20; ++i)
{
    if (i == 13) continue; // ignore 13
    if (i%7 == 0) continue; //ignore multiples of 7
        printf("Nb i = %d. ", i);
    if (i%3 == 0)
        printf("it's multiple of 3\n");
    else
        printf("it's not multiple of 3\n");
}


int x;
scanf ("%d", &x);

if (is_prime_number(x))
    printf("Nb %d is prime", x);

 else
    printf("Nb %d is NOT prime", x);


return 0;

}
