#include <stdio.h>
#include <stdlib.h>

int freqNum(int* ptrArr ,int n ,int x) {
    if (x>n){
        printf("введеная граница превышает размер массива");
        return 0;
    }
    int maxCount = 0; int num;
    for (int i=x-1; i<n; ++i){
        int count = 0;
        for (int j=i; j<n; ++j){
            if (*(ptrArr+i) == *(ptrArr+j)){
                ++count;
            }
        }
        if (count>maxCount){
            maxCount = count;
            num = *(ptrArr+i);
        }
    }
    if (maxCount==1 && (n-x+1)!=1){
        printf("все элементы уникальны");
    }else if(maxCount==1 && (n-x+1)==1){
        printf("%d", num);
    }else{
        printf("%d", num);
    }
    return 0;
}

int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    int* ptrArr = &arr[0];
    for (int i=0; i<N; i++){
        int x;
        scanf("%d", &x);
        *(ptrArr+i) = x;
    }
    int x; 
    scanf("%d", &x);
    freqNum(arr, N, x);
}