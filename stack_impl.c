#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int* arr;
};


int main(){
    struct stack* ptr;
    ptr=(struct stack*)malloc(sizeof(struct stack));
    ptr->size=10;
    ptr->top=-1;
    ptr->arr=(int*)malloc(ptr->size*sizeof(int));
    printf("Enter 5 stack elements:\n");
    for(int i=0;i<5;i++){
       printf("Element:");
       scanf("%d",&ptr->arr[i]);
       ptr->top++;

    }
    for(int i=0;i<5;i++){
       printf("\nElement:");
       printf("%d",ptr->arr[i]);
    

    }
    
}