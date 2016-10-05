/* 
   File:   main
   Author: Joseph Camacho
   Created on October 4, 2016, 1:28 PM
   Purpose:  Minimum/Maximum
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
    short x, y;
    //Input values
    cout<<"comparing numbers"<<endl;
    cout<<"enter two numbers"<<endl;
    cin>>x>>y;
    //Process values -> Map inputs to Outputs
    
    //Display Output
    if (x>y) cout<<x<<" is bigger"<<endl;
    else if (x<y) cout <<y<<" is bigger"<<endl;
    else if (x==y) cout<<x<<" & "<<y<<" are the same"<<endl;
    //Exit Program
    return 0;
}