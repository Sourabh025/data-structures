#include <iostream>

using namespace std;

struct node{

    int data;
    struct node *left;
    struct node *right;


}temp;

struct node * root=NULL;

struct node * insert1(struct node *root,int x){

struct node * temp=(node *)malloc(sizeof(node));
temp->data=x;
temp->left=NULL;
temp->right=NULL;



if(root==NULL){

    root=temp;

}

else{

    if(root->data>x){

        root->left=insert1(root->left,x);

    }
    else{

        root->right=insert1(root->right,x);
    }


}




return root;

}

void print(node * root){

if(root==NULL){

    return;
}
cout<<root->data<<endl;
print(root->left);
print(root->right);



}

node * findmin(node *root){

struct node *ptr;

ptr=root;


while(/*ptr!=NULL && */ptr->left!=NULL){


    ptr=ptr->left;



}

return ptr;
}





node* delete1(node *root,int x){


if(root==NULL){
    return root;

}

if(root->data>x){

    root->left=delete1(root->left,x);
}
else if(root->data<x){


    root->right=delete1(root->right,x);

}


else{

    if(root->left==NULL){

        struct node *temp=root->right;

        free(root);  //stored in above recusion root->left
        return temp;
    }


    if(root->right==NULL){

        struct node *temp=root->left;

        free(root);
        //stored in above recusion root->left
        return temp;
    }

    struct node *temp=findmin(root->right);
    root->data=temp->data;
    root->right=delete1(root->right,temp->data);





}



return root;
}

int height(node* root){

if(root==NULL){

    return -1;
}

int left=height(root->left);
int right=height(root->right);

if(left>right){

    return left+1;
}
else{
    return right+1;

}

}




int main()
{
    root=insert1(root,5);
    insert1(root,6);
    insert1(root,7);
    insert1(root,8);
    insert1(root,4);
    delete1(root,5);

   print(root);
   int h=height(root);
    cout<<endl<<h<<endl;

    return 0;
}
