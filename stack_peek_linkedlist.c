#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
int isEmpty(struct node* top){
    if(top==NULL){
       return 1;
    }
    return 0;
}
int isFull(struct node* top){
    struct node* p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL){
       return 1;
    }
    return 0;
}
void traverse(struct node* ptr){
    while(ptr!=NULL){
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node* push(struct node* top,int data){
    if(isFull(top)){
       printf("Stack overflow");
    }
    else{
    struct node* p=(struct node*)malloc(sizeof(struct node));
    p->data=data;
    p->next=top;
    top=p;
    return top;
    }
}
struct node* pop(struct node* top){
    if(isEmpty(top)){
        printf("Stack underflow");
    }
    else{
    struct node* p=top;
    top=p->next;
    int data=p->data;
    printf("Popped %d\n",data);
    free(p);
    return top;
    }
}
int peek(struct node* top,int position){
    struct node* p=top;
    for(int i=0;(i<position-1 && p!=NULL);i++){
        p=p->next;
    }
    if(p==NULL){
        printf("Invalid position");
        return -1;
    }
    return p->data;
    

}
int main(){

    struct node * top=NULL;
    top=push(top,1);
    top=push(top,2);
    top=push(top,3);
    top=push(top,4);
    top=push(top,5);
    top=push(top,6);

    
    printf("Element %d at position %d",peek(top,2),2);
   


    return 0;
}