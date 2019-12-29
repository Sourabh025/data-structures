#include <stdio.h>
#include <stdlib.h>

struct node{

int key;
struct node * left;
struct node * right;

}*root;


struct node* push(struct node * root,int x){


struct node *temp=(struct node *)malloc(sizeof(struct node));
temp->key=x;
temp->left=NULL;
temp->right=NULL;

if(root== NULL){


    root=temp;

}
else{


    if(x>root->key){

        root->right=push(root->right,x);

    }
    if(x<root->key){

        root->left=push(root->left,x);


    }





}







}

void inorder(struct node * root){

 if(root==NULL){

    return;
 }

inorder(root->left);

printf("%d",root->key);

inorder(root->right);


}





int main()
{
    root=NULL;
    root=push(root,5);
    push(root,6);
    push(root,4);
    inorder(root);


    return 0;
}
