#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;
void insert(){
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
void display()
        {  
            struct node *ptr;
            while(ptr!=NULL){
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
            
            }
}
void main(){
    for(int i=0;i<5;i++){
        insert();

    }
    display();
}