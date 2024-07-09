#include<stdio.h>
#include<stdlib.h>
struct stack{
   int size;
   int top;
   char* arr;
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
void push(struct stack* p,char element){
    if(isFull(p)){
        printf("Stack Overflow");
    }
    else{
    p->top++;
    p->arr[p->top]=element;
    }
}
char pop(struct stack* p){
   if(isEmpty(p)){
    printf("Stack underflow");
    return -1;
   }
   else{
    char element=p->arr[p->top];
    p->top--;
    return element;

   }
}
int isMatching(char a,char b){
    if(a=='(' &&  b==')'){
        return 1;
    }
    if(a=='{' &&  b=='}'){
        return 1;
    }
    if(a=='[' &&  b==']'){
        return 1;
    }
    return 0;
}
int multipleparenthesis(char arr[]){
    struct stack* p=(struct stack*)malloc(sizeof(struct stack));
    p->size=10;
    p->top=-1;
    p->arr=(char*)malloc(p->size*sizeof(char));
    int i;
    for(i=0;arr[i]!='\0';i++){
        if(arr[i]=='('||arr[i]=='['||arr[i]=='{'){
            push(p,arr[i]);
        }
        else if(arr[i]==')'||arr[i]=='}'||arr[i]==']'){
            if(isEmpty(p)){
                return 0;
            }
            else{
             char element=pop(p);
             if(!isMatching(element,arr[i])){
                return 0;
            }
        }
    }
    }
    if(isEmpty(p)){
        return 1;
    }
    return 0;


}
int main(){
    char arr[100];
    printf("Enter expression:");
    scanf("%s",arr);
   int result= multipleparenthesis(arr);
   if(result==1){
      printf("Balance expression");
   }
   else{
    printf("unbalanced expression");
   }
    

    return 0;
}