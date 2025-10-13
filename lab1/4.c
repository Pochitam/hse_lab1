#include <stdio.h>
#include <stdlib.h>

void func(int* ptrArr, int n1, int* ptrArr2, int n2){
    for(int i=0; i<n1; i++){
        *(ptrArr2+n2+i) = *(ptrArr+i);
    }
    return;
}

void vvod(int* ptrArr, int n1){
    for (int i=0; i<n1; ++i){
        scanf("%d", ptrArr+i);
    }
    return;
}

int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int* ptrArr = (int*)malloc(n1*sizeof(int));
    int* ptrArr2 = (int*)malloc(n2*sizeof(int)+n1*sizeof(int));
    vvod(ptrArr, n1);
    vvod(ptrArr2, n2);
    func(ptrArr, n1, ptrArr2, n2);
    for (int i=0; i<n2; ++i){
        printf("%d ", *(ptrArr2+i));
    }
    for (int i=0; i<n2+n1; ++i){
        printf("%d ", *(ptrArr2+i));
    }
    free(ptrArr);
    free(ptrArr2);
}

