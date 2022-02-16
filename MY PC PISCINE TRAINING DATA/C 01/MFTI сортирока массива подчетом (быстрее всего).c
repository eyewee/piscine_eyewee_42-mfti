#include <stdio.h>
#include <stdbool.h>
#define ALLOCATE_SIZE 1000



void print_array(int A[], int N)
{
    for( int i = 0; i < N; ++i)
        printf("%3d ", A[i]);
    printf("\n");
}




int main () {

    //array for 10 possible numbers 0-9
    int counters[10] = {0};
    int x;

    while(true)
    {
        scanf("%d", &x);
        if (x == 10) break; //terminator
        if (x < 0 || x > 9) continue; //skip these nbrs if conditions met
        counters[x] += 1;
    }

    for (x = 0; x<10; ++x) //global loop
        for (int i = 0; i < counters[x]; ++i) //loop for every x
            printf("%3d ", x);

return 0;
}
