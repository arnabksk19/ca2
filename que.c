#include<stdio.h>
int front=-1,rear=-1;
int queue[5];
void insert();
void display();
void delet();
int main(){
    int choice;
    do{
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("\nEnter your choicce:");
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
    if(rear==4) printf("\nOverflow");
    else{
        printf("Enter the element to insert:");
        scanf("%d",&item);
        if(rear==-1){
            front=0;
            rear=0;
            queue[rear]=item;
        }
        else{
            rear++;
            queue[rear]=item;
        }
    }
}

void delet(){
    int item;
    if(front==-1)printf("\nUnderflow");
    else{
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else front++;
    }
}

void display(){
    if(front==-1)printf("Queue is empty");
    else{
        for (int i=front; i<=rear; i++){
            printf("%d ",queue[i]);
        }
    }
}