#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main(){
    srand(time(NULL));
    int i;
    double vt[N] , *ptr;
    ptr = &vt[0];

    for(i = 0; i<N; i++){
        ptr[i] = 1 + rand() %100;
        printf("%.2f , ", *(ptr + i));
        ptr + i;
        
    }
}