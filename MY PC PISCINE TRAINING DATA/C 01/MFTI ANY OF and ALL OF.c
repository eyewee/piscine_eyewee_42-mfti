#include <stdio.h>
#include <stdbool.h>





int main (int argc, char* argv[])
{

    int nb;
    printf("nb to verify");
    scanf("%d", &nb);

    bool any = false;
    bool all = true;


    while(nb)
    {
        int digit = nb%10; //it separates the last digit
        any = any || (digit < 5); //
        all = all && (digit < 5);
        nb /= 10; // reduce nb by removing last digit
    }

    printf("any = %d \nall = %d", any, all);

    return 0;
}
