#include<stdio.h>
#define max 30
int queue[max];
int front=-1,rear=-1;
int data;
int insert(int x){
    if(rear==max){
        printf("Overflow");
    }
    else{
        rear=rear+1;
        queue[rear]=x;
    }
}
void delete(){
    if(front>rear){
        printf("Queue Underflow ");
    }
    else{
        front++;
    }
}
void display(){
    if(front<=rear){
        for(int i=front;i<=rear;i++){
            printf("%d\t",queue[i]);
        }
    }
    else{
        printf("Queue is empty\n");
    }
}
void main(){
    int n,x;

    while(n!=4){
    printf("Enter your choice :");
    printf("1. for insert \n2.for deletion\n3.for display\n4. for exiting\n");
    scanf("%d",&n);
        switch(n){
            case 1:printf("Enter the elements to be inserted : ");
            scanf("%d",&x);
            insert(x);
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            default:printf("Invalid Input");
        }
    }
    
}