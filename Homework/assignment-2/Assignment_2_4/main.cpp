/* 
   File:   main
   Author: Joseph Camacho
   Created on August 29, 2016, 9:41 AM
   Purpose:  Average Rainfall
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
    char MonthA[10];
    char MonthB[10];
    char MonthC[10];
    unsigned short A;
    unsigned short B;
    unsigned short C;
    float Avg;
    //Input values
    cout<<"Input first Month"<<endl;
    cin>>MonthA;
    cout<<"Input amount(inches) of rainfall for this month"<<endl;
    cin>>A;
    cout<<"Input second Month"<<endl;
    cin>>MonthB;
    cout<<"Input amount(inches) of rainfall for this month"<<endl;
    cin>>B;
    cout<<"Input third Month"<<endl;
    cin>>MonthC;
    cout<<"Input amount(inches) of rainfall for this month"<<endl;
    cin>>C;
    //Process values -> Map inputs to Outputs
    Avg=(A+B+C)/3;
    //Display Output
    cout<<"The Average rainfall for "<<MonthA<<", "<<MonthB<<" and "<<MonthC<<" is "<<Avg<<" inches"<<endl;
    //Exit Program
    return 0;
}
