/* 
   File:   main
   Author: Joseph Camacho
   Created on October 4, 2016, 1:28 PM
   Purpose:  Mass and Weight
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    unsigned short mass, weight;
    //Input values
    cout<<"enter Mass"<<endl;
    cin>>mass;
    //Input validation
    
    //Process values -> Map inputs to Outputs
    weight=mass*9.8;
    cout<<"weight = "<<weight<<endl;
    if(weight<10){
        cout<<"object is light"<<endl;
    }
    if(weight>1000){
        cout<<"object is heavy"<<endl;
    }
    //Display Output

    //Exit Program
    return 0;
}
