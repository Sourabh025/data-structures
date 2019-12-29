#include <iostream>

#define max 4


//code from youtube ankpro training

using namespace std;


struct node{
int key;
node * next;


}*temp,*ptr;

struct listadj{

    node * head;

}*t;

listadj *adjlist[max];    //pointer type array list

void push(int s, int e)
{



    if(adjlist[s]->head==NULL){

        temp=(node*)malloc(sizeof(node));
        temp->key=s;
        temp->next=NULL;
        adjlist[s]->head=temp;
}

    ptr=(node *)malloc(sizeof(node));
    ptr->next=NULL;
    ptr->key=e;
    node *t=adjlist[s]->head;

    while(t->next!=NULL){

        t=t->next;



    }
    t->next=ptr;



}


void display(){

    for(int i=1;i<max;i++){
        ptr=adjlist[i]->head;


        while(ptr){

            cout<<i<<" "<<ptr->key;
            ptr=ptr->next;


        }


    }






}



int main()
{


   for(int i=0;i<max;i++){              //initialised array of list will NULL values in pounter
        adjlist[i]=(listadj *)malloc(sizeof(listadj));
        adjlist[i]->head=NULL;


    }

    push(0,1);

    push(1,2);
    push(1,3);

    cout<<adjlist[1]->head->key;
    display();

     return 0;
}
