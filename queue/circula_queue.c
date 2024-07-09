#include<stdio.h>
#include<stdlib.h>
struct queue{
   int size;
   int f;
   int r;
   int* arr;
};
int isEmpty(struct queue* q){
    if(q->f==q->r){
      return 1;
    }
    return 0;
}
int isFull(struct queue* q){
    if((q->r+1)%q->size==q->f){
      return 1;
    }
    return 0;
}
void enqueue(struct queue* q,int value){
    if(isFull(q)){
        printf("queue is full\n");
    }
    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=value;
         printf("enqued element %d\n",value);
    }
}
int dequeue(struct queue* q){
    int a=-1;
    if(isEmpty(q)){
        printf("queue is Empty\n");
    }
    else{
        q->f=(q->f+1)%q->size;
        a=q->arr[q->f];
        printf("Dequed element %d\n",a);
    }
    return a;
}
int main(){
    struct queue  q;
    q.size=4;
    q.f=q.r=0;
    q.arr=(int*)malloc(q.size*sizeof(int));
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);
    dequeue(&q);
     dequeue(&q);
      dequeue(&q);
    enqueue(&q,4);
   
    return 0;
}