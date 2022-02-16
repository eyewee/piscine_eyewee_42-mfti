#include <stdio.h>



int main()
{
    int i = 10;
    int *pi = &i;
    int **ppi = &pi;
    int ***pppi = &ppi;
    printf("%d\n", i);
    *pi = 11;
    printf("%d\n", i);
    ***pppi = 12;
    printf("%d\n", i);

return 0;
}

