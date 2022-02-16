#include <stdio.h>





int main (int argc, char* argv[])
{

    int x;
    printf("nb to split on digits");
    scanf("%d", &x);

    while(x)
    {
        int digit = x%10; //it separates the last digit
        if (digit%2 != 0)
            printf("%d ", digit);
        x /= 10;
    }

    return 0;
}
