#include <iostream>

using namespace std;
int rec(int arr[],int s,int e,int x);
int main()
{
    int arr[]={1,2,3,4,5};
    int m=rec(arr,0,4,2);
    cout<<m;
    return 0;
}



int rec(int arr[],int s,int e,int x){

    int mid;
    if(s<=e){

    mid=(s+e)/2;


    if(arr[mid]==x){

            return mid;

    }
    if( arr[mid]>x){

         return rec(arr,s,mid-1,x);

    }

    if(arr[mid]<x)
       return  rec(arr,mid+1,e,x);

}


return -1;
}
