#include <iostream>

using namespace std;
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string arr[100];
int op[100];
vector<string> str;
static string s;
int top=0;
int top1=0;
int top2=0;
int n;
void append(){

    cin>>s;
    n=s.size();
    for(int i=0;i<n;i++){
        arr[i]=s[i];
        str.push_back(s);

        top++;
        top1++;
    }

}

void delete1(){
    int m;
    cin>>m;
    for(int i=0;i<m;i++){

        top++;


    }}

void print(){
    int l;
    cin>>l;

    cout<<arr[top-l]<<endl;

}

void undoappend(){

    for(int i=0;i<s.size();i++){

        top--;

    }


}

void undodelete(){


    for(int i=0;i<s.size();i++){

        top1--;

    }

}

void undo(){
    for(int i=0;i<s.size();i++){
        if(op[i]==1){

            undoappend();

        }
        if(op[i]==2){

            undodelete();
        }
    }



}

int main() {
    int q;
    int w;
    cin>>w;
    for(int i=0;i<w;i++){
        cin>>q;
        op[i]=q;
    switch (q)
    {
        case 1:

            append();
            break;

        case 2:
            delete1();
            break;

        case 3:
            print();
            break;

        case 4:
            undo();
            break;
    }
    }
    return 0;
}








