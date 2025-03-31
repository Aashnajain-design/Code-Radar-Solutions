#include<stdio.h>

void rotate(int arr[], int start, int stop){
    for(int i= start, j=stop; i<j; i++, j--){
        int temp=arr[i];
        arr[i]= arr[j];
        arr[j]= temp;
    }
    return;
}
int main(){
    int k =7;
    int arr[5] ={1, 2,3, 4, 5};
    k = k%5;
    for(int i=0; i<5; i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    rotate(arr, 0, 4);
    rotate(arr, 0, k-1);
    rotate(arr, k, 4);
    for(int i =0; i<5; i++){
        printf("%d", arr[i]);
    }
}