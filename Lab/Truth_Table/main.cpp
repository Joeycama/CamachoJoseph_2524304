/* 
 * File:   Truth Table
 * Author: Joseph Camacho
 * Created on September 26, 2016, 10:14 AM
 * Purpose:  Truth Table
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    bool X, Y;
    
    //Output Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y (X^Y)^Y (X^Y)^X !(X&&Y) !X||!Y !(X||Y) !X&&!Y\n"; 
    //Input Row 1
    X=true;
    Y=true;
    //Display Row 1
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<" ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"  ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"   ";
    cout<<((X^Y)^Y?'T':'F')<<"       ";
    cout<<((X^Y)^X?'T':'F')<<"       ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<"      ";
    cout<<endl;
    //Input Row 2
    X=true;
    Y=false;
    //Display Row 2
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<" ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"  ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"   ";
    cout<<((X^Y)^Y?'T':'F')<<"       ";
    cout<<((X^Y)^X?'T':'F')<<"       ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<"      ";
    cout<<endl;
    //Input Row 3
    X=false;
    Y=true;
    //Display Row 3
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<" ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"  ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"   ";
    cout<<((X^Y)^Y?'T':'F')<<"       ";
    cout<<((X^Y)^X?'T':'F')<<"       ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<"      ";
    cout<<endl;
    //Input Row 4
    X=false;
    Y=false;
    //Display Row 4
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<" ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"  ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"   ";
    cout<<((X^Y)^Y?'T':'F')<<"       ";
    cout<<((X^Y)^X?'T':'F')<<"       ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<"      ";
    cout<<endl;

    //Exit
    return 0;
}

