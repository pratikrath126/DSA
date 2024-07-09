#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
int isoperator(char ch){
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
        return 1;
    }
    return 0;
}
int precedence(char ch){
    int p;
    if(ch=='*'||ch=='/'){
       p=3;
    }
    else if(ch=='+'||ch=='-'){
        p=2;
    }
    else{
        p=0;
    }
    return p;
}
char stacktop(struct stack* sp){
    return sp->arr[sp->top];
}
char* infixtopostfix(char* infix){
    struct stack* sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=100;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
    int i=0,j=0;
    char* postfix=(char*)malloc((strlen(infix)+1)*sizeof(char));
    while(infix[i]!='\0'){
        if(!isoperator(infix[i])){
          postfix[j]=infix[i];
          i++;
          j++;
        }
        else{
            if(precedence(infix[i])>precedence(stacktop(sp))){
                push(sp,infix[i]);
                i++;
            }
            else{
                postfix[j]=pop(sp);
                j++;
            }
        }
    }
    while(!isEmpty(sp)){
        postfix[j]=pop(sp);
        j++;
    }
    postfix[j]='\0';
    return postfix;
}

int main(){
   char* infix;
   printf("enter infix to convert:");
   scanf("%s",infix);
   printf("postfix is %s\n",infixtopostfix(infix));

    

    return 0;
}