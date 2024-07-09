#include<stdio.h>
void display(int arr[]){
   for(int i=0;i<8;i++){
      printf("%d ",arr[i]);
   }
}
void insertionSort(int arr[],int n){
    int i,j,key;
    for(i=1;i<=n-1;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[]={2,4,98,3,23,34,1,43};
    printf("Before Sorting");
    display(arr);
    printf("\nAfter sorting:");
    insertionSort(arr,8);
    display(arr);
    
    return 0;
}