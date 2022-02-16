#include <stdio.h>
#define N 10


void array_prnt(int A[])
{
    for (int i = 0; i<N; ++i)
    {
        printf("%3d ", A[i]);
    }
}

int main (int argc, char* argv[])
{

    int A[N] = {0,10,20,30,40,50,60,70,80,90};
    int B[N] = {0};

    for (int i = 0; i < N; ++i)
    {
        B[i]=A[N-1-i];
    }

array_prnt(A);
printf("\n");
array_prnt(B);

// oTHER METHOD
int C[N] = {0,10,20,30,40,50,60,70,80,90}; //reinitisalise A
printf("\n\n\n Method 2: with only one tmp var: \n");

array_prnt(C);

    for (int i = 0; i < N/2; ++i)
    {
        int tmp = C[i]; //save the value
        C[i] = C[N-1-i]; //copy last value to the 1st position
        C[N-1-i] = tmp; //copy saved into last position

    }
printf("\n");
array_prnt(C);


//CYCLICAL OFFSET TO THE RIGHT
printf("\n\n\n Method 3: CYCLICAL OFFSET TO THE RIGHT: \n");
int D[N] = {0,10,20,30,40,50,60,70,80,90};
array_prnt(D);
int tmp2 = D[N-1];
    for (int i = N-1; i > 0; --i)
    {
        D[i] = D[i-1];
    }
D[0] = tmp2;
printf("\n");
array_prnt(D);


    return 0;
}
