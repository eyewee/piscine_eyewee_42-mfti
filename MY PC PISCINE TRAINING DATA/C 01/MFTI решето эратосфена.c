#include <stdio.h>
#define N 20



int main (int argc, char* argv[])
{

    int prime[N] = {0};


for (int i = 2; i*i < N; ++i)
{
    for (int k = i*i; k<N; k+=i)
    {
        prime[k] = 1;
    }
}

    for (int i = 0; i < N; ++i)
    {
        printf("%3d", i);
    }

      printf("\n");

    for (int i = 0; i < N; ++i)
    {
        printf("%3d", prime[i]);
    }
      printf("\n");


printf("\nPRIME NUMBERS ARE:");
    for (int i = 2; i < N; ++i)
    {
        if ( prime[i] == 0)
        {
            printf(" %d ", i);
        }
    }
    printf("\n");


    return 0;
}
