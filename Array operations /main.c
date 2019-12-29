#include <stdio.h>
#include <stdlib.h>



int insert(int arr[],int n);

void print(int arr[],int n);

void linearsearch(int arr[],int n);

int main()
{
    int x,n;
    printf("Enter the number of elements\t");
    scanf("%d",&n);

    int arr[100];

    printf("Enter elements\n");

    for(int i=0;i<n;i++){
        scanf("%d",&x);
        arr[i]=x;
    }

    n=insert(arr,n);
    print(arr,n);
    n=delete(arr,n);
    print(arr,n);
    linearsearch(arr,n);

    binary_search(arr,0,n-1,5);

    return 0;
}


int insert(int arr[],int n){

int x,pos;

printf("Enter the position of element to be inserted \n");

scanf("%d",&pos);
 if(pos>n-1 ||pos<1){
  printf("Enter valid position\n");
 }
 else{
    printf("Enter the element\n");

    scanf("%d",&x);
    for(int i=n-1;i>=pos-1;i--){
    arr[i+1]=arr[i];

    }
    arr[pos-1]=x;

    }

 return n+1;
}

void print(int arr[],int n){

for(int i=0;i<n;i++){

    printf("%d\t",arr[i]);

}




}


int delete(int arr[],int n){
int pos;
printf("\nEnter the element position to be deleted\n");
scanf("%d",&pos);
    if(pos>n || pos<1){
        printf("\n Enter valid postion\n");
    }
    else{
        for(int i=pos-1;i<n-1;i++){

            arr[i]=arr[i+1];

        }
    }
return n-1;

}

void linearsearch(int arr[],int n){
int x;
printf("\nEnter element to search");
scanf("%d",&x);
for(int i=0;i<n;i++){

    if(arr[i]==x){

        printf("\n Linear search : element is present at index %d\n",i);

    }



}




}


int binary_search(int arr[],int s,int e,int key){
    if(e>=s){
    int mid;

    mid =s + (e-s)/2;

    if(arr[mid]==key){

        printf("\nBinary search : Element at index %d\n",mid);

        return mid;
    }
    if(key<arr[mid])
        return binary_search(arr,s,mid-1,key);



    return binary_search(arr,mid+1,e,key);


}
return 0;

}





