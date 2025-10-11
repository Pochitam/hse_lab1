#include <stdio.h>
#include <stdlib.h>

void func(int* ptrArr, int n){
    for(int i=0; i<n; i++){
        *(ptrArr+n+i) = *(ptrArr+i);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int* ptrArr = (int*)malloc(2*n*sizeof(int));
    int* ptrArr2 = ptrArr+n;
    for(int i=0; i<n; ++i){
        scanf("%d", ptrArr+i);
    }
    func(ptrArr, n);
    for (int i=0; i<n; ++i){
        printf("%d ", *(ptrArr2+i));
    }
    free(ptrArr);
}