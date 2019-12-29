#include <iostream>
#include <stdlib.h>
using namespace std;

void insert(int x);
void print();
struct node{

    int data;
    node * next;
    node * prev;

}*head,*temp,*ptr;


int main()
{



    insert(5);
    insert(4);
    print();
    return 0;
}

void insert(int x ){

    temp=(node *)malloc(sizeof(node));
    temp->data=x;
    temp->next=NULL;
    temp->prev=NULL;

    if(head == NULL){

       head=temp;
       temp->next=head;
       temp->prev=NULL;

    }

    else{

        ptr=head;

        while(ptr->next !=head){

            ptr=ptr->next;

        }

        ptr->next=temp;
        temp->next=NULL;
        temp->prev=ptr;

    }

}

void print(){
    node *ptr2;
    ptr2=head;
    while(ptr2 !=NULL){

        cout<<ptr2->data<<endl;

        ptr2=ptr2->next;

    }




}

