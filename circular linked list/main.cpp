#include <iostream>

using namespace std;

struct node{
    int data;
    struct node *next;

}*ptr,*temp,*head,*temp1,*ptr1;



void insertend(int item){

temp=(struct node *)malloc(sizeof(struct node));
temp->data=item;
temp->next=NULL;

if(head==NULL){

    head=temp;
    temp->next=head;
}
else{
    ptr=head;
    while(ptr->next!=head){

    ptr=ptr->next;

    }

    //ptr point to last node
    ptr->next=temp;
    temp->next=head;

}

}

void print(){
    ptr=head;
    while(ptr->next!=head){

    cout<<ptr->data<<"  ";
    ptr=ptr->next;


    }
    cout<<ptr->data<<"  "<<endl;



}

void insertbeg(int item){

temp=(struct node *)malloc(sizeof(struct node));
temp->data=item;
temp->next=NULL;




 while( ptr-> next != head){
          ptr = ptr-> next;
}
temp->next=head;
head=temp;
ptr->next=head;

}

void deletend(){
    ptr=head;

while(ptr->next!=head){

    ptr1=ptr;
    ptr=ptr->next;

 }
ptr1->next=head;
free(ptr);


}

void deletebeg(){

ptr=head;
while(ptr->next!=head){


     ptr=ptr->next;
}

temp1=head->next;

head=temp1;

ptr->next=head;



}

void deletepos(int pos){

ptr=head;

if(pos==1){
    temp1=head;
    ptr1=head;

    while(ptr1->next!=head){
        ptr1=ptr1->next;
    }

    ptr1=head->next;

    ptr1->next=head;
}
else{

for(int i=0;i<pos-1;i++){
    ptr1=ptr;
    ptr=ptr->next;
}

temp1=ptr->next;

ptr->next=NULL;

ptr1->next=head;


}
}

void reverselist(node *ptr){

    if(ptr->next==head){
        cout<<ptr->data<<"  ";
        return;
    }

    reverselist(ptr->next);

    cout<<ptr->data<<"  ";


}

void reverselist2(){


    ptr=head;


    while(ptr->next!=head){

        ptr=ptr->next;

    }
    temp1=ptr;

    ptr->next=NULL;
    node * current=head;
    node * prev;
    node * next;

    ptr1=head;

    while(ptr1->next!=NULL){

        next=current->next;

        current->next=prev;

        prev=current;

        current=next;

    }

    head=temp1;

    node *var=head;

    while(var->next!=NULL){

        var=var->next;

    }

    var->next=head;
    node * t=head;

    while(t->next != head){
        cout<<t->data<<"  ";
        t=t->next;
    }
}

int main()
{
    insertend(5);
    insertend(6);
    insertend(7);
    //print();
    insertbeg(4);
    insertbeg(3);
    print();
    //deletend();
   //print();
    //deletebeg();
    //print();
    //deletepos(1);
    //print();
    //ptr=head;
    //reverselist(ptr);
    reverselist2();
    //print();

    return 0;
}
