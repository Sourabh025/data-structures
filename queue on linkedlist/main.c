#include <stdio.h>
#include <stdlib.h>

struct node{

int data;
struct node *next;


}*front,*rear;



void push(int x){

struct node *temp=(struct node*)malloc(sizeof(struct node));

temp->data=x;
temp->next=NULL;

if(front==NULL && rear==NULL){

    front=rear=temp;

}

else{
    rear->next=temp;
    rear=temp;

}




}

void display(){
struct node *ptr;
ptr=front;
while(ptr->next!=NULL){

    printf("%d\n",ptr->data);
    ptr=ptr->next;


}
printf("%d",ptr->data);


}

void pop(){

struct node *ptr1=front;



    front=front->next;

    free(ptr1);





}




int main()
{

    push(4);
    push(5);
    //display();
    pop();
    display();
    return 0;
}
