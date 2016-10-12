/* 
   File:   main
   Author: Joseph Camacho
   Created on September 29th, 2016, 12:00 PM
   Purpose:Sum of Numbers  
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int x;
    short y;
    //Input values
    cout<<"This program calculates the sum of a positive integer value"<<endl;
    cout<<"insert a starting number"<<endl;
    cin>>x;
    //Process values -> Map inputs to Outputs
    y=0;
    if (x>0){
        for(int Num=1;Num<=x;Num++){
            y+=Num;
        }
        cout<<"the sum of 1 to "<<x<<" is "<<y<<endl;
    }
    else if (x==0){
        cout<<"zero plus zero still equals zero"<<endl;
    }
    else if (x<0){
        cout<<"did not accept negative starting number"<<endl;
    }
    
    //Display Output

    //Exit Program
    return 0;
}