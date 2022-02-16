#include <stdio.h>
#include <stdbool.h>
#define ALLOCATE_SIZE 1000

//simply create an array
int input_array(int A[], int max_size)
{
    int top = 0;

    while (true)
    {
        int x;
        scanf("%d", &x);
        // stop if x=0 or buffer is at it's max
        if (x ==0 || top == max_size) break;
        A[top] = x;
        top++;
    }

    return top;
}


void insert_sort(int A[], int N)
{
    for(int i = 1; i < N; ++i)
    {
        int k = i;
        while (k>0 && A[k-1]>A[k])
        {
            int tmp = A[k-1];
            A[k-1]=A[k];
            A[k] = tmp;
            k -= 1;
        }
    }
}


void print_array(int A[], int N)
{
    for( int i = 0; i < N; ++i)
        printf("%3d ", A[i]);
    printf("\n");
}




int main () {

    printf("enter nb to test   ");
    int A[ALLOCATE_SIZE];
    int N;

    N = input_array(A, ALLOCATE_SIZE);
    insert_sort(A, N);
    print_array(A, N);




return 0;
}
