
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
//refer to vid if not understand ,,we return head because we lose head pointer if not return(as changes are made in heap)
    struct node* insertatbetween(struct node* head,int data,int index){
        struct node* ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=data;
        struct node* p=head;
        int i=0;
        while(i!=index-1){
            p=p->next;
            i++;
        }
        ptr->next=p->next;
        p->next=ptr;
        return head;
        
        
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
    head=insertatbetween(head,10,1);
    traverse(head);
    



    
}