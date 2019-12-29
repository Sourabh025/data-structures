#include <bits/stdc++.h>
using namespace std;

struct node{

    float i;
    float j;
    float result;
    node * next;
}head,ptr;

node insert(node * head);
int main(){

  insert(node* head);


}



node insert(node *head){
int n;
cout<<"enter number of elements to stored";
cin>>n;


for(int i=1;i<=n;i++){

struct node *temp=(struct node *)malloc(sizeof(node));

cout<<"Enter complex numbers "<<i;
int j,q;
cin>>q;
cin>>j;

int sum=pow(q,2)+pow(j,2);
int result =sqrt(sum);

temp->i=q;

temp->j=j;

temp->result=result;

temp->next=NULL;
cout<<temp->result;


if(head == NULL){

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

}
