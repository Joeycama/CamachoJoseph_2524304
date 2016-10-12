/* 
   File:   main
   Author: Joseph Camacho
   Created on September 29th, 2016, 12:00 PM
   Purpose: Celsius to Fahrenheit 
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
    float c,f;
    //Input values
    cout<<"Celsius    Fahrenheit"<<endl;
    //Process values -> Map inputs to Outputs
    for(c=0;c<=20;c++){
        f=(9/5*c)+32;
        cout<<c<<"          "<<f<<endl;
    }
    
    //Display Output
    
    //Exit Program
    return 0;
}