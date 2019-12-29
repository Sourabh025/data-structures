#include <iostream>

using namespace std;

char game[9][9];

int x,y;

static int i;


int input1(){

repeat:

cout<<endl<<"Player1 enter your choice"<<endl;

cin>>x;


if(x==0){

    cout<<"Please enter correct index "<<endl;

    goto repeat;

}

if(x==1 || 2 || 3 ){

    if(game[0][x-1]!='o'){

        game[0][x-1]='x';

    }

    else{

    cout<<"This index is already filled by 'PLAYER_2' please enter correct index"<<endl;

    goto repeat;

    }
}

if(x==4 || 5 || 6)

{

    if(x==4){

        if(game[1][0] != 'o'){

            game[1][0]='x';


}

    else{

        cout<<"This index is already filled by 'PLAYER_2' please enter correct index"<<endl;

        goto repeat;

}

}

if(x==5 ){

    if(game[1][1] != 'o'){

        game[1][1]='x';


    }

    else{

        cout<<"This index is already filled by 'PLAYER_2' please enter correct index"<<endl;

        goto repeat;

    }


}

if(x==6 ){

    if(game[1][2] != 'o'){

        game[1][2]='x';

    }

    else{

        cout<<"This index is already filled by 'PLAYER_2' please enter correct index"<<endl;

        goto repeat;

    }


}

if(x==7 || x==8 || x==9 ){


    if(x==7){


        if(game[2][0] != 'o'){

            game[2][0]='x';


        }

    else{

        cout<<"This index is already filled by 'PLAYER_2' please enter correct index"<<endl;

        goto repeat;

    }



}

if(x==8 ){

    if(game[2][1] != 'o'){

        game[2][1]='x';


    }

    else{

        cout<<"This index is already filled by 'PLAYER_2' please enter correct index"<<endl;

        goto repeat;

    }


}

}

if(x==9){

    if(game[2][2] != 'o'){

        game[2][2]='x';


    }

    else{

        cout<<"This index is already filled by 'PLAYER_2' please enter correct index"<<endl;

        goto repeat;

    }


}

}

}



int input2(){

repeat:

cout<<endl<<"Player2 enter your choice"<<endl;

cin>>x;


if(x==0){

    cout<<"Please enter correct index "<<endl;

    goto repeat;

}

if(x==1 || 2 || 3 ){

    if(game[0][x-1]!='x'){

        game[0][x-1]='o';

    }

    else{

        cout<<"This index is already filled by 'PLAYER_1' please enter correct index"<<endl;

        goto repeat;
    }
}

if(x==4 || 5 || 6)

{

if(x==4){

    if(game[1][0] != 'x'){

        game[1][0]='o';

}

    else{

        cout<<"This index is already filled by 'PLAYER_1' please enter correct index"<<endl;

        goto repeat;

    }

}

if(x==5 ){

if(game[1][1] != 'x'){

    game[1][1]='o';

}

    else{

        cout<<"This index is already filled by 'PLAYER_1' please enter correct index"<<endl;

        goto repeat;

    }


}

if(x==6 && game[1][2]==NULL){

    if(game[1][2] != 'x'){

        game[1][2]='o';


    }

    else{

        cout<<"This index is already filled by 'PLAYER_1' please enter correct index"<<endl;

        goto repeat;

    }





}

if(x==7 || x==8 || x==9 ){


    if(x==7 ){


        if(game[2][0] != 'x'){

            game[2][0]='o';



        }

    else{

        cout<<"This index is already filled by 'PLAYER_1' please enter correct index"<<endl;

        goto repeat;

}



}

if(x==8 && game[2][1]==NULL){

    if(game[2][1] != 'x'){

        game[2][1]='o';



    }

    else{

    cout<<"This index is already filled by 'PLAYER_1' please enter correct index"<<endl;

    goto repeat;

    }


}



if(x==9 && game[2][2]==NULL){

    if(game[2][2] != 'x'){

        game[2][2]='o';



    }

    else{

        cout<<"This index is already filled by 'PLAYER_1' please enter correct index"<<endl;

        goto repeat;

    }


}


}

}

}


void display(){


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


        if(game[0][2]=='x' && game[1][1]=='x' && game[2][0]=='x'){


                    cout<<"PLAYER1 WON CONGRATULATION PLAYER1"<<endl;

                    flag=1;

                    break;

        }

        else if(game[0][2]=='o' && game[1][1]=='o' && game[2][0]=='o'){


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
//not used isfull in this program.
//this program checks weather matrix is full or not

int isfull(){


static int i;


for(i=0;i<3;i++){

    for(int j=0;j<1;j++){

            if(game[i][j] != NULL || game[i][j+1] != NULL || game[i][j+2] != NULL){

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


        cout<<"Player_1 use X"<<endl<<endl;

        cout<<"Player_2 use O"<<endl<<endl;

        cout<<"---------------------------------'INSTRUCTION'----------------------------------"<<endl;

        cout<<"1> Each player has to input index number from 1-9 on their turns"<<endl;
        cout<<endl;
        cout<<"2> Aim of this game is to make same pattern either of X or O vertically,horizontially or diagonaly"<<endl;

        cout<<"--------------------------------------------------------------------------------"<<endl;

repeat:

        int s=0;

        while(s<9){

            if(s==8){

                input1();

                s+=1;

                break;

                }

            else{

                int y=check();

                if(y!=1){

                input1();

                display();

                int w=check();

                if(w==1){

                    cout<<endl;
                    display();

                    break;

                }

                input2();

                w=check();

                if(w==1){

                    cout<<endl;

                    display();

                    break;

                 }

                 cout<<endl;

                 display();

                 }

                if(y==1){

                    cout<<endl;

                    display();

                    break;

                }

                s+=2;

            }

        }


       if(s==9 && !check()){

            cout<<endl;

            display();

            cout<<"There is a tie!!"<<endl;

            cout<<"Wanna One more match"<<endl;

            goto repeat;

       }


return 0;

}

