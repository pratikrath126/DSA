#include<stdio.h>
int indelement(int arr[],int size,int capacity,int index,int element){
    int i;
    if(size>=capacity){
        return -1;
    }
    else{
        for(int i=index;i<=size-1;i++){
            arr[i]=arr[i+1];
        }
        
        return 1;
    }
}
int main(){
    int arr[100],size,i,index,element;
    printf("enter array size:");
    scanf("%d",&size);
    printf("enter array elements:");
    for(i=0;i<size;i++){
        printf("enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter index to delete in:");
    scanf("%d",&index);
   
   

printf(" previous array is:");
for(i=0;i<size;i++){
        printf(" %d\t",arr[i]);
        
    }
indelement(arr,size,100,index,element);
size-=1;
printf(" \nnew array is:");
for(i=0;i<size;i++){
        printf(" %d\t",arr[i]);
        
    }


    return 0;
}