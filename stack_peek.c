#include<stdio.h>
#include<stdlib.h>
struct stack {
    int size;
    int top;
    int* arr;
};
int isEmpty(struct stack* p){
    if(p->top==-1){
        return 1;
    }
    return 0;
}
int isFull(struct stack* p){
    if(p->top==p->size-1){
        return 1;
    }
    return 0;
}
void push(struct stack* p,int value){
    if(isFull(p)){
        printf("Stack is full can't push %d\n",value);
    }
    else{
        p->top++;
        p->arr[p->top]=value;
    }
}
int pop(struct stack* p){
    if(isEmpty(p)){
        printf("Cannot pop stack is empty");
    }
    else{
        int value=p->arr[p->top];
        p->top--;
        return value;
    }
}
int peek(struct stack* p ,int position){
    if(p->top-position+1<0){
        printf("Invalid position");
        return -1;
    }
    return p->arr[p->top-position +1];
}
int main(){
    struct stack* stk=(struct stack*)malloc(sizeof(struct stack));
    stk->size=6;
    stk->top=-1;
    stk->arr=(int*)malloc(stk->size*sizeof(int));
    push(stk,1);
     push(stk,2);
      push(stk,3);
       push(stk,4);
        push(stk,5);
         push(stk,6);



    for(int i=1;i<=stk->top+1;i++){
        printf("Element %d is at postion %d\n",peek(stk,i),i);
    }
    
    return 0;


}