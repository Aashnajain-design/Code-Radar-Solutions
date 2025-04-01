#include<stdio.h>

int bubbleSort(int input[], int size){
    for(int i = size; i>0; i--){
        
        for(int j=0; j<i-1; j++){
            if(input[j]>input[j+1]){
                return 0;
                // int temp = input[j];
                // input[j] = input[j+1];
                // input[j+1] = temp;
               
            }
        }
        // if(flag==0) {

        return 1;
    }
}
int main(){
    // int flag;
    int n;
    scanf("%d",&n); 
    int arr[n];
    for( int i=0; i<n; i++){
         scanf("%d", &arr[i]);
}
bubbleSort(arr, n);
// for(int i=0; i<n; i++){
    if(bubbleSort){
        printf("Sorted");

    }
    else {
        printf("Not Sorted");
    }

   

// }
//  printf("Sorted");
return 0;
}