#include <stdio.h>
#include <stdlib.h>
int queue[10];
int size =10;
front=0;
rear=0;

void pop(){

    front++;



}

void push(x){

    if(rear==size-1){

            printf("QUEUE is full");

    }

    else{




        queue[rear]=x;

        rear++;
    }



}
void display(){

    for(int i=front;i<rear;i++){


        printf("%d",queue[i]);
    }










}


int main()
{
    push(5);
    push(6);
    push(7);
    pop();
    display();
    return 0;
}
