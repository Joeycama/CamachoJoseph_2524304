/* 
   File:   main
   Author: Joseph Camacho
   Created on September 29th, 2016, 12:00 PM
   Purpose: Membership Fees Increase 
 */

//System Libraries
#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float fee=.04,charge=2500.0;
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int year;
    float rate;
    //Input values
    cout<<"year    sales"<<endl;
    //Process values -> Map inputs to Outputs
    for(year=1;year<=6;year++){
		rate=charge*(1+year*fee);
		cout<<year<<"       $"<<rate<<endl; 
	}
    //Display Output
    
    //Exit Program
    return 0;
}