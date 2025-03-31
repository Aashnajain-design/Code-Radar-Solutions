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
    int k;
    scanf("%d", &k);
    int arr[n];
    scanf("%d", &arr[n]);
    k = k%n;
    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    rotate(arr, 0, n-1);
    rotate(arr, 0, k-1);
    rotate(arr, k, n-1);
    for(int i =0; i<5; i++){
        printf("%d", arr[i]);
    }
}