#include <stdio.h>
#include <stdlib.h>

struct node{

    int data;
    struct node *next;


}*head,*ptr,*ptr1,*temp;


int push(int x){

struct node *temp=(struct node*)malloc(sizeof(struct node));

temp->data=x;
temp->next=NULL;

if(head==NULL){

    head=temp;

}
else{
        ptr=head;
    while(ptr->next!=NULL){


        ptr=ptr->next;


    }

 ptr->next=temp;

}





}



void insertbeg(int x){

struct node *temp=(struct node*)malloc(sizeof(struct node));

temp->data=x;
temp->next=NULL;


temp->next=head;
head=temp;





}


void deletionend(){

  ptr=head;
  while(ptr->next!=NULL){
        ptr1=ptr;
        ptr=ptr->next;

  }

    ptr1->next=NULL;



}


void delbeg(){
ptr1=head;

head=head->next;
free(ptr1);

}


void randominsert(int place,int x){
ptr=head;

struct node *temp=(struct node *)malloc(sizeof(struct node));
temp->data=x;

for(int i=0;i<place-2;i++){

    ptr=ptr->next;

}
ptr1=ptr->next;
ptr->next=temp;
temp->next=ptr1;

}



void randomdelete(int place){

for(int i=0;i<place-2;i++){

    ptr=ptr->next;

}
    struct node *temp1;
    temp1=ptr->next;
    ptr1=ptr->next->next;

    ptr->next=ptr1;

    free(temp1);



}

struct node search(int x){
    ptr=head;
    while(ptr->next!=NULL){

        if(ptr->data==x){

            return *ptr;

        }




    }





}

void display(){
ptr=head;
while(ptr->next!=NULL){

    printf("%d\n",ptr->data);
    ptr=ptr->next;


}
printf("%d",ptr->data);


}



void reverse(){











}


int main()
{


    push(5);
    push(6);
    push(7);
    insertbeg(4);
    insertbeg(3);
    deletionend();
    deletionend();
    insertbeg(2);
    randominsert(1,0);
    randomdelete(1);
    search(2);
    ptr=search(3);
    printf("%d",ptr);

    return 0;
}
