#include <stdio.h>
#include <stdbool.h>





int main (int argc, char* argv[])
{


    int x, i;
    scanf("%d", &x);
    int m = -10000000, m_i;

    while (x != 0)
    {
        if (x%2 == 0) { //compare only even numbers
            if (x > m)
            {
                m = x;
                m_i = i; // remember placement of this value
            }
        }
        i += 1;
        scanf("%d", &x);


    }

    printf("maximum = %d and position %d\n", m, m_i);




    return 0;
}
