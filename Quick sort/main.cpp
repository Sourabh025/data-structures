
#include <iostream>

using namespace std;


int partion(int a[],int s,int e){
    int pindex,pivot,temp;
    pindex=s;
    pivot=a[e];

    for(int i=s;i<e;i++){
        if(a[i]<=pivot){
            temp=a[i];
	    a[i]=a[pindex];
            a[pindex]=temp;
            pindex++;
        }

        }
temp=a[e];
a[e]=a[pindex];
a[pindex]=temp;

return pindex;


}

int quicksort(int a[],int s,int e){
    int p;
    if(s<e){
        p=partion(a,s,e);
        quicksort(a,s,p-1);
        quicksort(a,p+1,e);

    }

}

int main()
{
    int a[]={5,6,3,2,1};
    int s=0;
    int e=4;
    int d;

    quicksort(a,s,e);


    for(int i=0;i<e+1;i++){


    cout<<a[i]<<endl;


    }

    return 0;
}

