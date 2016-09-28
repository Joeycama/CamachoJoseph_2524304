/* 
   File:   main
   Author: Joseph Camacho
   Created on August 29, 2016, 9:41 AM
   Purpose:  Miles per Gallon
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
    unsigned short Gas;
    unsigned short Miles;
    float MPG;
    //Input values
    cout<<"Input number of gallons of gas that your car can hold"<<endl;
    cin>>Gas;
    cout<<"input the number of miles your car can drive with a full tank"<<endl;
    cin>>Miles;
    //Process values -> Map inputs to Outputs
    MPG=Miles/Gas;
    //Display Output
    cout<<"your car can go "<<MPG<<" Mile(s) Per Gallon"<<endl;
    //Exit Program
    return 0;
}
