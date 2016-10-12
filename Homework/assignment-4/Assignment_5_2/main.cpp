/* 
   File:   main
   Author: Joseph Camacho
   Created on September 29th, 2016, 12:00 PM
   Purpose:Characters for the ASCII codes  
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
    int x,y,z,ASCII;
    y=0;
    //Input values
    for(z=0;z<6;z++){
        x=y+16;
        for(ASCII=y;ASCII<x;ASCII++){
            cout<<static_cast<char>(ASCII)<<" ";
        }
        y=x;
        cout<<endl;
    }
    //Process values -> Map inputs to Outputs
   
    //Display Output

    //Exit Program
    return 0;
}