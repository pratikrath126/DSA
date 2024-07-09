#include<stdio.h>
void display(int arr[]){
   for(int i=0;i<8;i++){
      printf("%d ",arr[i]);
   }
}
void selectionSort(int arr[],int n){
    int i,j,temp,indexofmin;
     for(i=0;i<n-1;i++){
        indexofmin=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[indexofmin]){
                indexofmin=j;
            }
        }
        if(indexofmin!=i){
            temp=arr[i];
            arr[i]=arr[indexofmin];
            arr[indexofmin]=temp;
        }

        }
     }

int main(){
    int arr[]={2,4,98,3,23,34,1,43};
    printf("Before Sorting");
    display(arr);
    printf("\nAfter sorting:");
    selectionSort(arr,8);
    display(arr);
    
    return 0;
}