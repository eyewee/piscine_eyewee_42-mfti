#include <stdio.h>

int fib (int n)
{
    if (n <= 1) return n;
    else return fib(n-1) + fib(n-2);
}

int fib_dynamic(int n)
{
    int Fib[n+1];
    Fib[0]=0;
    Fib[1]=1;
    for ( int i=2; i<=n; i++)
        Fib[i]=Fib[i-1]+Fib[i-2];
    return Fib[n];
}


int main () {

    for (int n = 1; n < 40; n+=1)
    {
        printf("fib (%d) = %d\n", n, fib(n));
        printf("fib (%d) = %d\n", n, fib_dynamic(n));
    }

return 0;
}

