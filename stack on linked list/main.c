#include <stdio.h>
#include <stdlib.h>

struct node{

    int data;
    struct node *next;
}*temp,*head,*top,*ptr;




push(int x){


  struct node *temp=(struct node*)malloc(sizeof(struct node));
  temp->data=x;


  ptr=head;



  temp->next=head;

    head=temp;






}


void display( ){
    ptr=head;
    while(ptr->next!=NULL){
printf("%d\n",ptr->data);
        ptr=ptr->next;


    }
printf("%d\n",ptr->data);



}
void pop(){

ptr=head;
head=head->next;
free(ptr);




}

int main()
{


    push(5);
    push(6);
    push(9);
    display();
    pop();
    printf("\n");
    display();
    pop();
    printf("\n");
    display();

    return 0;
}
