#include<stdio.h>
#include<stdlib.h>
struct stack {
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
void push(struct stack* p,char value){
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
int parenthesismatching(char* exp){
    struct stack* p=(struct stack*)malloc(sizeof(struct stack));
    p->size=100;
    p->top=-1;
    p->arr=(char*)malloc(p->size*sizeof(char));
    for(int i =0;exp[i]!='\0';i++){
       if(exp[i]=='('){
        push(p,exp[i]);
       }
       else if(exp[i]==')'){
        if(isEmpty(p)){
            return 0;
        }
        else{
            pop(p);
        }
       }
    }
    if(isEmpty(p)){
        return 1;
    }
    return 0;
}
int main(){
int result;
char* exp = "((8)(*--$$9))";
    
    result=parenthesismatching(exp);
   if(result==1){
    printf("parenthesis matching\n");
   }
  else{
    printf("parenthesis not matching\n");
  }
 
    
    return 0;


}