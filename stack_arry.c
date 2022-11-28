#include<stdio.h>
int x,stack[100],i,choice;
int top = -1;
void push(){
    if(top>=99){
        printf("Stack overflow ");
    }
    else{
    printf("\nEnter a value to be pushed: ");
    scanf("%d",&x);
    top++;
    stack[top]=x;
    }
    
}
void pop(){
    if(top==-1){
        printf("Stack underflow");
    }
    else{
    printf("\nThe popped elements is : %d",stack[top]);
    top--;
    }
}
void display(){
    printf("Elements in stack are: \n");
    for(i=top;i>=0;i--){
        printf("\t%d",stack[i]);
    }
}
int main(){
    do{
        scanf("%d",&choice);
        switch(choice){
            case 1:push();
                break;
            case 2:pop();
                break;
            case 3:display();
                break;
            case 4:break;
            default:printf("Enter a valid choice");
            
        }
    
    }while(choice!=4);
    return 0;
            
        
    

}
