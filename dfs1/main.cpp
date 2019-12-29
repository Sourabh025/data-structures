#include <iostream>

using namespace std;

int arr[10];
int matrix[10][10];
int n;

void dfs(int s){

    int i;
    cout<<s<<endl;
    arr[s]=1;

    // not we only need first row and first coloumn to print in dfs format

        for(int j=0;j<n;j++){

        if(!arr[j] && matrix[s][j]==1){
                    dfs(j);

         }


    }


    }







int main()
{
    cout<<"Enter the number of verticies"<<endl;
    cin>>n;
    cout<< "enter the matrix "<<endl;
    for(int i=0;i<n;i++){

    arr[i]=0;

    }
    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){


                cin>>matrix[i][j];

        }

        cout<<endl;
    }




    dfs(0);






    return 0;
}
