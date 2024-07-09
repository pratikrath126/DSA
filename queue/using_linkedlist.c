#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node* next;
};
void traverse(struct node* ptr){
    while(ptr!=NULL){
        printf("the data:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void enqueue(struct node** f,struct node** r,int val){
    struct node* n=(struct node*)malloc(sizeof(struct node));
    
    if(n==NULL){
        printf("Queue is full\n");
    }
    else{
         n->data=val;
         n->next=NULL;
        if(*f==NULL){
            *f=*r=n;
        }
        else{
            (*r)->next=n;
            *r=n;
        }
    }
}
int dequeue(struct node** f){
    struct node* n=*f;
    int val=-1;
    
    if(*f==NULL){
        printf("Queue is Empty\n");
    }
    else{
        *f=(*f)->next;
        val=n->data;
        free(n);
    }
    return val;
}
int main(){
    struct node* f=NULL;
    struct node* r=NULL;
    enqueue(&f,&r,1);
    enqueue(&f,&r,2);
    enqueue(&f,&r,3);
    enqueue(&f,&r,4);
    traverse(f);
    printf("Dequeued %d\n",dequeue(&f));
     printf("Dequeued %d\n",dequeue(&f));
      printf("Dequeued %d\n",dequeue(&f));
      traverse(f);
    



    return 0;
}