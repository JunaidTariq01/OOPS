#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};


void Print(struct Node* P){
    if(P==NULL)return;
    printf("%d",P->data);
    Print(P->next);
}
struct Node* Insert(struct Node* head,int data){
    struct Node* temp = (struct Node * )malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if(head == NULL )
    head = temp;
    else{
        struct Node* temp1 = head;
        while(temp1 -> next != NULL){
            temp1= temp1->next;
            temp1-> next= temp;
        }
    }
    return head;
}
int main(){
    struct Node * head=NULL;

   head =  Insert(head,2);
    head = Insert(head,4);
    head = Insert(head,6);
    // int i,n,m;
    // printf("numbers");
    // scanf("%d",&n);
    // printf("Elements");
    // for(i=0;i<n;i++){
    //     scanf("%d",&m);
    //     Insert(m);
    // }
    Print(head);
}