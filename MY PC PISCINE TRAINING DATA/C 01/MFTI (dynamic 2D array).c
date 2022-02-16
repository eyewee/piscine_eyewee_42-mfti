#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("what size you want ur array to be?");
    scanf("%d", &x);
    int *X = (int *)malloc(x*sizeof(int));

    int i  = 0;
    while (i<x)
    {
        X[i] = i+1;
        printf("%d ", X[i]);
        i++;
    }

return 0;
}

