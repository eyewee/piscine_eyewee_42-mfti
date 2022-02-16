#include <stdio.h>

int factorial (int n)
{
    if ( n == 0)
        return 1; //factorial = 1
    return factorial(n-1)*n; //no need an "else" bcz 1st is SC

}

int main () {

    int n;
    scanf("%d", &n);
    printf("factorial(%d) = %d\n", n, factorial(n));

return 0;
}
