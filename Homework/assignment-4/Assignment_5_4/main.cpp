/* 
   File:   main
   Author: Joseph Camacho
   Created on September 29th, 2016, 12:00 PM
   Purpose: Calories Burned 
 */

//System Libraries
#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float cpm=3.6;
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int min;
    float x;
    //Input values
    cout<<"Time    Calories burned"<<endl;
    //Process values -> Map inputs to Outputs
    for(min=10;min<=30;min+=5){
		x=min*cpm;
		cout<<min<<"      "<<x<<endl; 
	}
    //Display Output
    
    //Exit Program
    return 0;
}