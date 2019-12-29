#include <stdio.h>
#include <stdlib.h>
int arr[10];

int top=-1;

int size=10;

int main()
{
    int arr[10];

    top=-1;




    push(5);
    push(6);
    push(7);

    display();
    pop();
    display();
    return 0;
}


void push(int x){

if(top<size){

    top++;

    arr[top]=x;

}
else{

    printf("Stack is full");

}



}

void pop(){


    top--;


}


void display(){


    for(int i=top;i>-1;i--){

        printf("%d",arr[i]);

    }




}
