#include <stdio.h>

void odd (int n);
void even (int n);



int main () {

    int n;
    odd (1);

return 0;
}

void odd (int n)
{
    if (n <=10) {
        printf("%d", n+1);
        n++;
        even(n);
    }
}
void even (int n)
{
    if (n <=10) {
        printf("%d", n-1);
        n++;
        odd(n);
    }

}
