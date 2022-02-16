#include <stdio.h>


int main () {


  int N;
  scanf("%d", &N);
  int A[N];


  for (int i = 0; i < N; i++)
  {
      scanf("%d", &A[i]); //type in nbrs to scan
  }

    int m = 0; // nbr of such fit pairs

    for (int i = 0; i < N; i++)
    {
        for (int k = i+1; k < N; k++)
        {
            if (A[i]*A[k]%26 == 0)
                m++;
        }
    }
    printf("number is %d\n", m);



return 0;
}
