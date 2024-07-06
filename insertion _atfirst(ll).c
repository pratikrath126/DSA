
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
    struct node* insertatfirst(struct node* head,int data){
        struct node* ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=data;
        ptr->next=head;
        return ptr;
    }

int main(){
    //create structure pointer
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;
    //allocate memory dynamically to pointer locations
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    //insert data
    head->data=1;
    head->next=second;
     second->data=2;
    second->next=third;
     third->data=3;
    third->next=fourth;
     fourth->data=4;
    fourth->next=NULL;
    //traverse
    traverse(head);
    printf("\n");
    head=insertatfirst(head,0);
    traverse(head);
    



    
}