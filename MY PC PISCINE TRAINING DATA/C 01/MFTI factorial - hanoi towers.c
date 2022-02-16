#include <stdio.h>

void hanoi ( int n, int i, int k);


int main () {

    hanoi(3, 1, 2);

return 0;
}

void hanoi ( int n, int i, int k){

    if (n==1)
        printf("Move disk 1 from pin %d to pin %d \n", i, k);
    else
    {
        int tmp = 6 - i - k;
        hanoi (n-1, i, tmp); //move disk from i to tmp
        printf("Move disk %d from pin %d to pin %d \n", n, i, k);
        // than from i to k
        hanoi (n-1, tmp, k); //now from tmp to k
    }
}
