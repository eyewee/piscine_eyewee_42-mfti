#include <stdio.h>
#define N 20




int main (int argc, char* argv[])
{

    int A[N] = {0};

    for (int i = 0; i < N/2; ++i) // for even
    {
        A[i*2] = i;
        A[i*2+1] = N/2+i;
    }


    for (int i = 0; i < N; ++i)
    {
        printf(" %d ", A[i]);
    }


    return 0;
}
