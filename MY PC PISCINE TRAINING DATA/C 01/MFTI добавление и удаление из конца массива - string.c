#include <stdio.h>


int get_nb_factors(int x, int A[])
{
    int top = 0;
    int divisor = 2;

    while ( x != 1) //until x reaches 1
    {
        while (x%divisor == 0) //until x is divisible by divisor
        {
            A[top] = divisor;
            top++;
            x /= divisor;
        }
        divisor++;
    }
    return top;
}

int main () {

    int x;
    printf("Enter nb to factorize:");
    scanf("%d", &x);
    int A[100]; //buffer for inserting result
    int N; //value to indicate how much of A will be filled
    N = get_nb_factors(x, A);

        for (int i=0; i< N; ++i) //print elements 1 by 1
        {
            printf("%d ", A[i]);
        }
    printf("\n");

return 0;
}
