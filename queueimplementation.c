#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;

int isfull(){
    return(rear==MAX-1);
}

int isempty(){
    return(front==-1);
}

void insert(int value){
    if(isfull()){
        printf("queue is full");
    }
    else{
        if(front==-1){
            front=0;
        }

    rear++;
    queue[rear]=value;
    printf("inserted %d in the queue\n",value);


        
}
}

void delete(){
    if(isempty()){
        printf("stack is empty");
    }
    else{
        printf("deleted element is %d \n",queue[front]);
        if(front==rear){
            front=rear=-1;
        }
        else{
            front++;
        }
    }
}

void display(){
     if(isempty()){
        printf("stack is empty");
    }

    else{
        printf("queue elements");
        for(int i=front;i<=rear;i++){
            printf("%d",queue[i]);
        }
        printf("\n");
    }

}

int main(){
    int choice,value;
    while(1){
        printf("\n queue operations \n");
        printf("\n1.insert\n2.delete\n3.display\n4.exit\n");
        printf("\n enter a choice");
        scanf("%d",&choice);

        switch(choice){
            case 1:printf("enter value to inseert");
            scanf("%d",&value);
            insert(value);
            break;

            case 2:
            delete();
            break;

            case 3:
            display();
            break;

            case 4:
            printf("exited program\n");
            return 0;

            default:
            printf("invalid choice entered");
        }
    }
}