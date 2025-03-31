#include<stdio.h>

void bubbleSort(int input[], int size){
    for(int i = size; i>0; i--){
        int flag =0;
        for(int j=0; j<i-1; j++){
            if(input[j]>input[j+1]){
                flag = 1;
                int temp = input[j];
                input[j] = input[j+1];
                input[j+1] = temp;
               
            }
        }
        if(flag==0) break;
    }
}
int main(int argc, char const *argv[]){
int arr[5] = {11, 28, 13, 34, 65};
bubbleSort(arr, 5);
for(int i=0; i<5; i++){
    printf("%d", arr[i]);
    printf("Sorted");










}
return 0;
}