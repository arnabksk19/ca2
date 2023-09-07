#include<stdio.h>
int top=-1;
int stack[5];
void insert();
void delet();
void display();
int main(){
    int choice;
    do{
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d",&choice);

        switch(choice){
            case 1 : insert();
            break;

            case 2 : delet();
            break;

            case 3 : display();
            break;

            case 4 : return 0;
            break;

            default : printf("Wrong choice !");
        }
    }while(choice!=4);
}
void insert(){
    int item;
    if(top==4)printf("\nOverflow");
    else{
        printf("\nEnter the value to insert:");
        scanf("%d",&item);
        if(top==-1){
            top=0;
            stack[top]=item;
        }
        else{
            top++;
            stack[top]=item;
        }
    }
}
void delet(){
    if(top==-1)printf("\nUnderflow");
    else top--;
}
void display(){
    if(top==-1)printf("Stack empty");
    else{
        for (int i=top; i>=0; i--){
            printf("\n%d",stack[i]);
        }
    }
}