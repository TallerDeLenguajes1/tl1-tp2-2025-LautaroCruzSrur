#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7

int main()
{
    
    int i,j;
    int mt[N][M];
    int *ptr;
    srand(time(NULL));

    ptr = &mt[0][0];

    for (i=0;i<N; i++)
    {
        for (j = 0; j < M; j++)
        {
            *ptr =  1 + rand() % 100;

            printf("%d ", *ptr++);
        }
        printf("\n");
    }
}
