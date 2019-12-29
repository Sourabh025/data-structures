#include <iostream>

using namespace std;
void selection(int arr[],int n);
void insertion(int arr[],int n);
void bsort(int arr[],int n);
int main()
{

   int arr[]={5,4,3,2,1};
   int n=5;
   insertion(arr,n);
   //selection(arr,n);
   //bsort(arr,n);
    return 0;
}



void insertion(int arr[],int n){


for(int i=1;i<n;i++){

    int value=arr[i];

    int j=i-1;

while(j>=0 && arr[j]>value){

    arr[j+1]=arr[j];
    j--;

}


arr[j+1]=value;

}

for(int i=0;i<n;i++){


cout<<arr[i]<<' ';
}


}





void selection(int arr[],int n){


for(int i=0;i<n;i++){

int loc=i;

for(int j=loc +1;j<n;j++){

    if(arr[j]<arr[loc]){

        loc=j;

    }

swap(arr[loc],arr[i]);

}


}



for(int i=0;i<n;i++){


    cout<<arr[i]<<' ';
}



}




void bsort(int arr[],int n){


for(int i=0;i<n;i++){


for(int j=0;j<n-i-1;j++){

    if(arr[j]>arr[j+1]){

    swap(arr[j],arr[j+1]);

    }


}


}

for(int i=0;i<n;i++){


cout<<arr[i];

}



}
