
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
    struct node* deleteinbetween(struct node* head,int index){
        struct node* ptr=head;
        int i=0;
        
        while(i!=index-1){
          ptr=ptr->next;
          i++;
        }
        struct node* q=(struct node*)malloc(sizeof(struct node));
        q=ptr->next;
        ptr->next=q->next;
        free(q);
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
    head->data=0;
    head->next=second;
     second->data=1;
    second->next=third;
     third->data=2;
    third->next=fourth;
     fourth->data=3;
    fourth->next=NULL;
    //traverse
    traverse(head);
    printf("\n");
    head=deleteinbetween(head,3);
    traverse(head);
    



    
}