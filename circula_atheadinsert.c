#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void traverse(struct node* head){
    struct node* ptr=head;
    do{
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
    struct node* insertatfirst(struct node* head,int data){
       struct node* ptr=(struct node*)malloc(sizeof(struct node));
       ptr->data=data;
       ptr->next=head;
       struct node* p=head;
       while(p->next!=head){
        p=p->next;
       }
       p->next=ptr;
       return ptr;

    }


int main(){
    struct node* head=(struct node*)malloc(sizeof(struct node));
    struct node* second=(struct node*)malloc(sizeof(struct node));
    struct node* third=(struct node*)malloc(sizeof(struct node));
    struct node* fourth=(struct node*)malloc(sizeof(struct node));
    struct node* fifth=(struct node*)malloc(sizeof(struct node));
    struct node* sixth=(struct node*)malloc(sizeof(struct node));
    struct node* seventh=(struct node*)malloc(sizeof(struct node));
    
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=fifth;
    fifth->data=5;
    fifth->next=sixth;
    sixth->data=6;
    sixth->next=seventh;
    seventh->data=7;
    seventh->next=head;
    printf("bedore inserting at first:");
    traverse(head);
    head=insertatfirst(head,0);
    printf("after inserting at first:\n");
    traverse(head);
    

    return 0;
}