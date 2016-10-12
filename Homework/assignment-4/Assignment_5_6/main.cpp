/* 
   File:   main
   Author: Joseph Camacho
   Created on September 29th, 2016, 12:00 PM
   Purpose: Distance Traveled 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int Spe,Hrs,Dis,x;
    //Input values
    cout<<"enter speed of vehicle in mph"<<endl;
    cin>>Spe;
    cout<<"enter amount of hours traveled"<<endl;
    cin>>Hrs;
    //Process values -> Map inputs to Outputs
    Dis=0;
    if(Spe>=0&&Hrs>=1){
        cout<<"Hour  Distance Traveled"<<endl;
        cout<<"----------------------"<<endl;
        for(x=1;x<=Hrs;x++){
            Dis+=Spe;
            cout<<x<<"     "<<Dis<<endl;
        }
    }
    //Display Output
    
    //Exit Program
    return 0;
}