#include <iostream>

using namespace std;

struct node{

    int data;
    node*left;
    node*right;

}*temp,*head,*ptr,*ptr1;


void insert(int x){

temp=(node*)malloc(sizeof(node));
temp->left=NULL;
temp->right=NULL;
temp->data=x;
if(head == NULL){

    head=temp;
    temp->left=head;
    temp->right=head;

}
else{

    ptr=head;
    while(ptr->right !=head){

            ptr=ptr->right;

}

    ptr->right=temp;
    temp->left=ptr;

    head->left=temp;temp->right=head;
}

}

void print(){
ptr=head;
while(ptr->right!=head){

    cout<<ptr->data<<"  ";
    ptr=ptr->right;


}
cout<<ptr->data<<"  "<<endl;

}

void reverse(){

    ptr=head->left;
    ptr1=ptr;
    while(ptr->left!=ptr1){
            cout<<ptr->data<<"  ";
            ptr=ptr->left;
}
cout<<ptr->data<<"  ";







}




int main()
{
    insert(5);
    insert(6);
    insert(7);
    print();
    reverse();

    return 0;
}
