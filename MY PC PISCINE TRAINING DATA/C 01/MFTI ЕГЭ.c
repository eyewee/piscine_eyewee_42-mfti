#include <stdio.h>
#define N 6


int main () {

    int a[N];
    int i, j, k;

    for (i = 0; i < N; ++i)
    {
        scanf("%d", &a[i]);
    }

   k = 0; //will contain nb of fit elements
     for (i = 0; i < N; ++i)
    {
        if (a[i]>100 && a[i]%5 == 0)
            k++;
    }

    // now replace found
    for (i = 0; i < N; ++i)
    {
        if (a[i]>100 && a[i]%5 == 0)
        {
           a[i]=k;
        }
        printf("%d ", a[i]);
    }




return 0;
}
