#include <stdio.h>

#include <stdlib.h>

int partition(int arr[],int s,int e){

int pindex=s;
int pivot=e;

for(int i=s;i<e;i++){

    if(arr[pivot]>=arr[i]){

        int temp=arr[i];
        arr[i]=arr[pindex];
        arr[pindex]=temp;
        pindex++;
    }



}

int temp =arr[e];
arr[e]=arr[pindex];
arr[pindex]=temp;

return pindex;
}


void quicksort(int arr[],int s, int e){

    if(s<e){

            int p=partition(arr,s,e);
            quicksort(arr,s,p-1);
            quicksort(arr,p+1,e);


    }




}



int main()
{

    int arr[]={1,2,3,4,5};

    quicksort(arr,0,4);
    for(int i=0;i<5;i++){
    printf("%d",arr[i]);
    }







    return 0;
}
