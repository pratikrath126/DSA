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
    if(q->r==q->size-1){
      return 1;
    }
    return 0;
}
void enqueue(struct queue* q,int value){
    if(isFull(q)){
        printf("queue is full\n");
    }
    else{
        q->r++;
        q->arr[q->r]=value;
    }
}
int dequeue(struct queue* q){
    int a=-1;
    if(isEmpty(q)){
        printf("queue is Empty\n");
    }
    else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}
int main(){
    struct queue  q;
    q.size=100;
    q.f=q.r=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);

       printf(" dequeue element %d\n",dequeue(&q));
   
    return 0;
}