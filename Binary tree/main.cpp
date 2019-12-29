#include <iostream>

using namespace std;



struct node{

    int key;
    node*left;
    node*right;

}* root,*ptr;
void print(node * root );
node* insert(node * root, int key);
node * newnode(int key);
int main()
{
   root=NULL;
   root=insert(root,0);
   insert(root,5);
   insert(root,6);
   insert(root,7);
   print(root);
    return 0;
}


void print(node *root){
if(root!=NULL){

print(root->left);
cout<<root->key<<' ';
print(root->right);

}

}



struct node* insert(node *root,int key){


if(root==NULL){
ptr=(node *)malloc(sizeof(node));
ptr->key=key;
ptr->left=NULL;
ptr->right=NULL;
return ptr;

}
if(root->key > key){

    root->left=insert(root->left,key);

}
if(root->key < key)

    root->right=insert(root->right,key);


    return root;
}
