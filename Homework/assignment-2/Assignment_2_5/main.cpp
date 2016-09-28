/* 
   File:   main
   Author: Joseph Camacho
   Created on August 29, 2016, 9:41 AM
   Purpose:  Male and Female Percentages
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
    unsigned short Male;
    unsigned short Female;
    float Class;
    short MPercent;
    short FPercent;
    //Input values
    cout<<"Input number of males"<<endl;
    cin>>Male;
    cout<<"Input number of females"<<endl;
    cin>>Female;
    //Process values -> Map inputs to Outputs
    Class=Male+Female;
    MPercent=(Male/Class)*100;
    FPercent=(Female/Class)*100;
    //Display Output
    cout<<"Percentage of Males in class: "<<MPercent<<"%"<<endl;
    cout<<"Percentage of Females in class: "<<FPercent<<"%"<<endl;
    //Exit Program
    return 0;
}
