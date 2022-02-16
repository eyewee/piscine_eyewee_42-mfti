#include <stdio.h>
#include <stdlib.h>



int main()
{
    int N;
    printf("how much memory to allocated in bites?");
    scanf("%d", &N);

    char *A = (char *)malloc(N);
    printf("If it reached this text = memory allocated OK");


return 0;
}

