#include <stdio.h>

int fastpower (double a, int n)
{
    if ( n == 0)
        return 1; //factorial = 1
    if (n%2 == 1)
        return a*fastpower(a, n-1);
    else
        return fastpower(a*a, n/2);
}

int main () {

    int n;
    double m;
    scanf("%d%d", &n, &m);
    printf("fastpower (%d, %d) = %lf\n", n, m, fastpower(n, m));

return 0;
}
