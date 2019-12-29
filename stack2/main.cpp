#include <iostream>

using namespace std;

char arr[100];
string s;
int top=0;
int n;

void insert(){

    cin>>s;
    n=s.size();
    for(int i=0;i<n;i++){
        arr[i]=s[i];
        top++;
    }

}
void print(){

for(int i=top;i>=0;i--){

    cout<<arr[i]<<endl;

}


}

int main()
{   insert();
    print();
    return 0;
}


