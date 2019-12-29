#include <iostream>

using namespace std;
void selectionsort(int arr[],int n);
void insertionsort(int arr[],int n);
int part(int arr[],int s,int e);
int quicksort(int arr[],int s, int e);

int main()
{
    int n=5;
    int arr[]={5,4,3,2,1};
    printf("Selection sort on array of elements \t 5 4 3 2 1\n");
    selectionsort(arr,5);
        for(int i=0;i<n;i++)
        printf("%d  \t",arr[i]);
        printf("\n");

    int arr1[]={10,9,8,7,6};
    printf("Insertion sort on array of elements \t 10 9 8 7 6 \n");
    insertionsort(arr1,5);
        for(int i=0;i<n;i++)
        printf("%d  \t",arr1[i]);
        printf("\n");

    int arr2[]={9,7,3,8,4};
    printf("Quicksort on array of elements \t 9 7 3 8 4\n");
    quicksort(arr2,0,5);

    for(int i=0;i<n;i++)
        printf("%d \t",arr2[i]);
        printf("\n");

    return 0;
}


void selectionsort(int arr[],int n){

for(int i=0;i<n;i++){

int loc=i,temp;

    for(int j=i+1;j<n;j++){

        if(arr[j]<arr[j-1]){

            loc=j;

        }


    }
    temp=arr[i];
    arr[i]=arr[loc];
    arr[loc]=temp;

}

}


void insertionsort(int arr[],int n){


for(int i=1;i<n;i++){

    int value=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>value){

        arr[j+1]=arr[j];
        j--;

    }

    arr[j+1]=value;
}






}
int part(int a[],int s,int e){
    int pindex,pivot;
    pindex=s;
    pivot=a[e];
    for(int i=s;i<e;i++){
        if(a[i]<=pivot){
            swap(a[i],a[pindex]);
            pindex++;
        }

        }
swap(a[pindex],a[e]);


return pindex;



}

int quicksort(int a[],int s,int e){
    int p;
    if(s<e){
        p=part(a,s,e);
        quicksort(a,s,p-1);
        quicksort(a,p+1,e);

    }
return 0;
}
