#include <iostream>

#define max 4


using namespace std;


struct node{
int key;
node * next;


}*temp,*ptr;

struct listadj{

    node * head;

}*t;

listadj *adjlist[4];    //pointer type array list

void push(int s, int e)
{

    temp=(node*)malloc(sizeof(node));
    temp->key=e;
    temp->next=NULL;


    if(adjlist[s]->head==NULL){
        adjlist[s]->head=temp;

    }
    else{

        node *ptr=adjlist[s]->head;

        while(ptr->next!=NULL){

            ptr=ptr->next;

        }

        ptr->next=temp;

    }

}


int main()
{


    for(int i=0;i<max;i++){              //initialised array of list will NULL values in pounter
        t=(listadj *)malloc(sizeof(listadj));
        t->head=NULL;
        adjlist[i]->head=NULL;

    }


    push(0,1);




     return 0;
}
