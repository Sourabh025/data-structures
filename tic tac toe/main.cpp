#include <iostream>

using namespace std;

char game[9][9];

int x,y;

static int i;

int p[10]={0};  //check present index

int q[10]={0};
int input1(){

repeat:

cout<<endl<<"Player1 enter your input index"<<endl;

cin>>x;
p[x]=1;

if(x==0){

    cout<<"Please choose correct index"<<endl;

    goto repeat;

}

if(x==1 || x==2 || x==3 && q[x]==0){

    game[0][x-1]='x';


}


if(x==4 || 5 || 6 )

{

if(x==4 && game[1][0]=='o'){

    game[1][0]='x';

}

}


if(x==5 && game[1][1]==NULL){

    game[1][1]='x';

}


if(x==6 && game[1][2]==NULL){


    game[1][2]='x';


}




if(x==7 || x==8 || x==9){


if(x==7 && game[2][0]==NULL){

    game[2][0]='x';

}

if(x==8 && game[2][1]==NULL){

    game[2][1]='x';

}

if(x==9 && game[2][2]==NULL){

    game[2][2]='x';

}

}

}






int input2(){

repeat:

cout<<endl<<"Player2 enter your input index"<<endl;

cin>>x;
q[x]=1;

if(x==0){

    cout<<"Please enter correct index "<<endl;

    goto repeat;

}

if(x==1 || 2 || 3 && game[0][x-1]!='x'){

        game[0][x-1]='o';
        q[x]=1;

}

if(x==4 || 5 || 6)
{

if(x==4){

if(game[1][0] == NULL){

    game[1][0]='o';
    q[4]=1;
}

}

if(x==5 && game[1][1]==NULL){


        game[1][1]='o';
        q[5]=1;

}

if(x==6 && game[1][2]==NULL){

    game[1][2]='o';
    q[6]=1;

}

}

if(x==7 || x==8 || x==9 ){


if(x==7 && game[2][0]==NULL){

game[2][0]='o';
q[7]=1;

}

if(x==8 && game[2][1]==NULL){

game[2][1]='o';
q[8]=1;

}

}

if(x==9 && game[2][2]==NULL){

game[2][2]='o';

q[9]=1;
}


}




int display(){


cout<<game[0][0]<<"\t|"<<game[0][1]<<"\t|"<<game[0][2]<<endl;

cout<<"----------------------------"<<endl;

cout<<game[1][0]<<"\t|"<<game[1][1]<<"\t|"<<game[1][2]<<endl;

cout<<"----------------------------"<<endl;

cout<<game[2][0]<<"\t|"<<game[2][1]<<"\t|"<<game[2][2]<<endl;

cout<<"----------------------------"<<endl;



}

int check(){

int flag=0;

for(int i=0;i<3;i++){

    for(int j=0;j<1;j++){

        if(game[i][j] == 'x' && game[i][j+1] =='x' && game[i][j+2] == 'x'){


                cout<<"PLAYER1 WON CONGRATULATIONS PLAYER1"<<endl;

                return 1;

        }

        else if(game[i][j]=='o' && game[i][j+1]=='o' && game[i][j+2]== 'o'){


                cout<<"PLAYER2 WON CONGRATULATIONS PLAYER2"<<endl;

                return 1;

        }

        if(game[j][i]=='x' && game[j+1][i]=='x' && game[j+2][i]=='x'){


                        cout<<"PLAYER1 WON CONGRATULATIONS PLAYER1"<<endl;

                        return 1;

        }
        else if(game[j][i]=='o' && game[j+1][i]=='o' && game[j+2][i]=='o'){


                    cout<<"PLAYER2 WON CONGRATULATIONS PLAYER2"<<endl;

                    return 1;
        }

        if(game[0][0]=='x' && game[1][1]=='x' && game[2][2]=='x'){



                    cout<<"PLAYER1 WON CONGRATULATION PLAYER1"<<endl;

                    flag=1;

                    break;

        }
        else if(game[0][0]=='o' && game[1][1]=='o' && game[2][2]=='o'){


                    cout<<"PLAYER2 WON CONGRATULATION PLAYER2"<<endl;

                    flag=1;

                    break;
        }


    }


        if(flag==1){

            break;
        }


}

return flag;

}


int isfull(){

static int i;

for(i=0;i<3;i++){

    for(int j=0;j<1;j++){

            if(game[i][j] != NULL || game[i][j+1]!=NULL || game[i][j+2]!=NULL){

                return 1;


            }

            else{

                    return 0;

            }

    }


}





}




int main()
{
        cout<<"Player 1 use x"<<endl<<endl;

        cout<<"Player 2 use o"<<endl<<endl;

        cout<<"________________________________________________________________________________"<<endl;

        int s=0;

        while(s<9){

            if(s==8){

                input1();

                s+=1;

                display();

                int t=check();

                if(t==1 ){

                    break;

                }
            }

            else{

                    int y=check();

                    if(y!=1){

                    input1();

                    display();

                    input2();

                    display();

                 }

                if(y==1){

                    break;

                }

                    s+=2;

            }

     }


return 0;

}

