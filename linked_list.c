#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;
void insert_beginning(){
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node *));
    printf("Enter the value : ");
    int item;
    scanf("%d",&item);
    ptr->data=item;
    ptr->next=head;
    head=ptr;
    printf("\nNode inserted"); 
    

}
void insert_bet(){
    int s;
    int item;
    printf("Enter the posiion you want to insert: ");
    scanf("%d",&s);
    printf("Enter the data to be stored : ");
    scanf("%d",&item);
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node *));
    struct node *temp;
    temp=head;
    ptr->data=item;
    for(int i=2;i<s;i++){
        while(temp->next!=NULL){
            temp=temp->next;
        }
        ptr->next=temp->next;
        temp->next=ptr;
    }


}
void insert_end(){
    struct node *ptr;
    struct node *temp;
    temp=head;
    ptr=(struct node*)malloc(sizeof(struct node*));
    printf("Enter the value : ");
    int item;
    scanf("%d",&item);
    ptr->data=item;
    ptr->next=NULL;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=ptr;
    printf("node inserted : ");
}

void delete_beg(){
    struct node *ptr;
    ptr=head;
    head=head->next;
    free(ptr);
}

void delete_end(){
    
    struct node *temp;
    temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }

    free(temp->next);
    temp->next=NULL;
    
    
}
void display()
        {  
            struct node *temp;
            temp=head;
            while(temp!=NULL){
            printf("\n%d\n",temp->data);  
            temp = temp -> next;  
            }
}
void main(){
    int n;
    while(n!=7){
    printf("\nEnter the options: ");
    scanf("%d",&n);
    switch(n){
        case 1:insert_beginning();
        break;
        case 2:insert_bet();
        break;
        case 3:insert_end();
        break;
        case 4:delete_beg();
        break;
        case 5:delete_end();
        break;
        case 6:display();
        break;
        case 7:exit(0);
    }
    }
}