#include <stdio.h>
#include <stdlib.h>




struct node{


    int data;
    struct node *next;
    struct node *prev;



}*temp,*ptr,*head;

void push(int x){

struct node * temp=(struct node *)malloc(sizeof(struct node));


temp->data=x;
temp->next=NULL;
temp->prev=NULL;


if(head == NULL){

head=temp;



}
else{

    ptr=head;
    while(ptr->next!=NULL){

        ptr=ptr->next;



    }

    ptr->next=temp;
    temp->prev=ptr;


}





}




void Display(){
    ptr=head;
    while(ptr->next!=NULL){


      printf("%d",ptr->data);

      ptr=ptr->next;


    }
printf("%d",ptr->data);





}


int main()
{


    push(5);
    push(6);
    Display();



    return 0;
}
