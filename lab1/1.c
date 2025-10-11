// среднне значение int или double
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n;
    scanf("%d", &n);
    int* ptrArr = (int*)malloc(n*sizeof(int));
    srand(time(NULL));
    for (int i=0; i<n; ++i){
        int* x = ptrArr+i;
        *x = rand()%16256;
    }
    int min=16256, max=0, sr=0; 
    for (int i=0; i<n; ++i){
        int el = *(ptrArr+i);
        min = (el < min ? el: min);
        max = (el>max ? el : max);
        sr += el;
        printf("%d\n", *(ptrArr+i));
    }
    free(ptrArr);
    printf("Max %d; Min %d; Average %d\n", max, min, sr/n);
    return 0;
}