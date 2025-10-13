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
    printf("Размер двух массивов через пробел:\n");
    scanf("%d %d", &n1, &n2);
    int* ptrArr = (int*)malloc(n1*sizeof(int));
    int* ptrArr2 = (int*)malloc(n2*sizeof(int)+n1*sizeof(int));
    printf("Элементы массива 1:\n");
    vvod(ptrArr, n1);
    printf("Элементы массива 2:\n");
    vvod(ptrArr2, n2);
    func(ptrArr, n1, ptrArr2, n2);
    printf("Изначальный массив:\n");
    for (int i=0; i<n2; ++i){
        printf("%d ", *(ptrArr2+i));
    }
    printf("\nМассив с скопированными элементами:\n");
    for (int i=0; i<n2+n1; ++i){
        printf("%d ", *(ptrArr2+i));
    }
    free(ptrArr);
    free(ptrArr2);
}

// #include <stdio.h>
// #include <stdlib.h>

// void func(int* ptrArr, int n){
//     for(int i=0; i<n; i++){
//         *(ptrArr+n+i) = *(ptrArr+i);
//     }
// }

// int main(){
//     int n;
//     scanf("%d", &n);
//     int* ptrArr = (int*)malloc(2*n*sizeof(int));
//     int* ptrArr2 = ptrArr+n;
//     for(int i=0; i<n; ++i){
//         scanf("%d", ptrArr+i);
//     }
//     func(ptrArr, n);
//     for (int i=0; i<n; ++i){
//         printf("%d ", *(ptrArr2+i));
//     }
//     free(ptrArr);
// }
