#include<stdio.h>
int binarysearch(int arr[],int element,int size){
    int low,mid,high;
    low=0;
    high=size-1;
    
    while(low<=high){
         mid=(low+high)/2;
        if(arr[mid]==element){
            printf("element %d found at index %d",element,mid);
            return 1;
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    return -1;
}
int main(){
    int size,arr[100],element,result;
    printf("Enter size of array:");
    scanf("%d",&size);
    printf("enter elements of array:");
    for(int i=0;i<size;i++){
        printf("\nenter element %d",i);
        scanf("%d",&arr[i]);
    }
    printf("enter element to search:");
    scanf(" %d",&element);
    result=binarysearch(arr,element,size);
    if(result==-1){
      printf("element not found");
    }
    return 0;
}