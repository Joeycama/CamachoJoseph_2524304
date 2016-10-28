/* 
   File:   main
   Author: Joseph Camacho
   Created on October 25th, 2016, 12:00 PM
   Purpose:  Project 1
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>    //Random number generator
#include <ctime>      //Time
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
char TTT[3][3]={'1','2','3','4','5','6','7','8','9'};
char player = 'x';
short computr;
char comp = 'o';
//Function prototypes
void draw();
void Input();
void Input2();
void Player();
void Player2();
char win();
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int Choos;
    //Input Variable
    cout<<"Tic Tac Toe"<<endl;
    cout<<"How many wish to Play"<<endl;
    cin>>Choos;
    cout<<" "<<endl;
    //Display Output
    if(Choos==2){
        draw();
        while(1){
            Input();
            draw();
            if(win()=='x'){
                cout<<"Player 1 wins"<<endl;
                break;
            }
            else if (win()=='o'){
                cout<<"Player 2 wins"<<endl;
                break;
            }
            Player();
        }
    }
    else if(Choos==1){
        draw();
        while(1){
            Input();
            Input2();
            draw();
            if(win()=='x'){
                cout<<"You win"<<endl;
                break;
            }
            else if (win()=='o'){
                cout<<"You lose"<<endl;
                break;
            }
            Player2();
        }
    }
    else{
        cout<<Choos<<" people, really?...your choice buddy!"<<endl;
        draw();
        while(1){
            Input();
            draw();
            if(win()=='x'){
                cout<<"Who ever was x won"<<endl;
                break;
            }
            else if (win()=='o'){
                cout<<"Who ever was o won"<<endl;
                break;
            }
            Player();
        }
    }
    
    return 0;
}
void draw()
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<TTT[i][j]<<" ";
        }
        cout<<endl;
    }
}
void Input(){
    int a;
    cout<<"Press the number of the field: ";
    cin>>a;
    
    if (a==1)
    {
        if (TTT[0][0]=='1')
        TTT[0][0]=player;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==2)
    {
        if (TTT[0][1]=='2')
        TTT[0][1]=player;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==3)
    {
        if (TTT[0][2]=='3')
        TTT[0][2]=player;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==4)
        {
        if (TTT[1][0]=='4')
        TTT[1][0]=player;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==5)
        {
        if (TTT[1][1]=='5')
        TTT[1][1]=player;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==6)
        {
        if (TTT[1][2]=='6')
        TTT[1][2]=player;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==7)
        {
        if (TTT[2][0]=='7')
        TTT[2][0]=player;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==8)
        {
        if (TTT[2][1]=='8')
        TTT[2][1]=player;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==9)
        {
        if (TTT[2][2]=='9')
        TTT[2][2]=player;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
}
void Input2(){
    int a;
    
    srand(static_cast<unsigned int>(time(0)));
    a=(rand()%9)+1;
    cout<<"the computer chose: "<<a<<endl;
    if (a==1)
    {
        if (TTT[0][0]=='1')
        TTT[0][0]=comp;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==2)
    {
        if (TTT[0][1]=='2')
        TTT[0][1]=comp;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==3)
    {
        if (TTT[0][2]=='3')
        TTT[0][2]=comp;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==4)
        {
        if (TTT[1][0]=='4')
        TTT[1][0]=comp;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==5)
        {
        if (TTT[1][1]=='5')
        TTT[1][1]=comp;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==6)
        {
        if (TTT[1][2]=='6')
        TTT[1][2]=comp;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==7)
        {
        if (TTT[2][0]=='7')
        TTT[2][0]=comp;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==8)
        {
        if (TTT[2][1]=='8')
        TTT[2][1]=comp;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==9)
        {
        if (TTT[2][2]=='9')
        TTT[2][2]=comp;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
}
void Player(){
    if(player=='x')
        player='o';
    else
        player ='x';
}
void Player2(){
    player='x';
    comp='o';
}
char win(){
    //first player
    //Horizontal
    if (TTT[0][0] =='x' && TTT[0][1] =='x' && TTT[0][2] =='x')
        return 'x';
    if (TTT[1][0] =='x' && TTT[1][1] =='x' && TTT[1][2] =='x')
        return 'x';
    if (TTT[2][0] =='x' && TTT[2][1] =='x' && TTT[2][2] =='x')
        return 'x';
    //Vertical
    if (TTT[0][0] =='x' && TTT[1][0] =='x' && TTT[2][0] =='x')
        return 'x';
    if (TTT[0][1] =='x' && TTT[1][1] =='x' && TTT[2][1] =='x')
        return 'x';
    if (TTT[0][2] =='x' && TTT[1][2] =='x' && TTT[2][2] =='x')
        return 'x';
    //diagonal
    if (TTT[0][0] =='x' && TTT[1][1] =='x' && TTT[2][2] =='x')
        return 'x';
    if (TTT[0][2] =='x' && TTT[1][1] =='x' && TTT[2][0] =='x')
        return 'x';
    //second player
    //Horizontal
    if (TTT[0][0] =='o' && TTT[0][1] =='o' && TTT[0][2] =='o')
        return 'o';
    if (TTT[1][0] =='o' && TTT[1][1] =='o' && TTT[1][2] =='o')
        return 'o';
    if (TTT[2][0] =='o' && TTT[2][1] =='o' && TTT[2][2] =='o')
        return 'o';
    //vertical
    if (TTT[0][0] =='o' && TTT[1][0] =='o' && TTT[2][0] =='o')
        return 'o';
    if (TTT[0][1] =='o' && TTT[1][1] =='o' && TTT[2][1] =='o')
        return 'o';
    if (TTT[0][2] =='o' && TTT[1][2] =='o' && TTT[2][2] =='o')
        return 'o';
    //diagonal
    if (TTT[0][0] =='o' && TTT[1][1] =='o' && TTT[2][2] =='o')
        return 'o';
    if (TTT[0][2] =='o' && TTT[1][1] =='o' && TTT[2][0] =='o')
        return 'o';
    
    return '/';
}