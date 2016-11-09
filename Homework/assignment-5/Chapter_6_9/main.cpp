/* 
   File:   main
   Author: Joseph Camacho
   Created on November 8th, 2016, 12:00 PM
   Purpose:  Present Value
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
float presentValue(float,float,int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float PValue,value,Rate;
    int year;
    //Input values
    cout<<"enter desired future amount"<<endl;
    cin>>value;
    cout<<"enter interest rate"<<endl;
    cin>>Rate;
    cout<<"enter amount of years"<<endl;
    cin>>year;
    //Process values -> Map inputs to Outputs
    PValue=presentValue(value, Rate, year);
    //Display Output
	cout<<"You need to deposit $"<<PValue<<" to have a balance of $"<<value<<" in "<<year<<" years"<<endl;
    //Exit Program
    return 0;
}

float presentValue(float value, float Rate, int year){
	return value/pow(1 + Rate, year);
}