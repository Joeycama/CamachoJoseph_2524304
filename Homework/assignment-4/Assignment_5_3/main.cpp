/* 
   File:   main
   Author: Joseph Camacho
   Created on September 29th, 2016, 12:00 PM
   Purpose:Ocean level  
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
    int Year;
    float x = 0;
    //Input values
    cout<<"Ocean levels"<<endl;
    cout<<"year  Amount Risen"<<endl;
    //Process values -> Map inputs to Outputs
    
    //Display Output
    for(Year=1;Year<=25;Year++){
		x+= 1.5;
		cout<<Year<<"     "<<x<<endl;
	}
    //Exit Program
    return 0;
}