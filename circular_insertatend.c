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
    struct node* insertend(struct node* head,int data){
       struct node* ptr=(struct node*)malloc(sizeof(struct node));
       ptr->data=data;
       struct node* p=head;
       while(p->next!=head){
        p=p->next;
       }
       ptr->next=p->next;
       p->next=ptr;
       return head;
       
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
    printf("before inserting at end:\n");
    traverse(head);
    head=insertend(head,8);
    printf("after inserting at end:\n");
    traverse(head);
    

    return 0;
}