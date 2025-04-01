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
int main(){
    int flag;
    int n;
    scanf("%d",&n); 
    int arr[n];
    for( int i=0; i<n; i++){
         scanf("%d", &arr[i]);
}
bubbleSort(arr, n);
for(int i=0; i<n; i++){
    if(flag==1){
        printf("Sorted");

    }
    else if(flag==0){
        printf("Not Sorted");
    }

   

// }
//  printf("Sorted");
return 0;
}