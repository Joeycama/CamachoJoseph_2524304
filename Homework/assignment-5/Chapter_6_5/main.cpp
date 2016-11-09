/* 
   File:   main
   Author: Joseph Camacho
   Created on November 8th, 2016, 12:00 PM
   Purpose:  Falling Distance
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
float Gravity=9.8;
//Function prototypes
float Fall(int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Display Output
    cout<<"time        Distance"<<endl;
    for(int Time=1;Time<=10;Time++){
 	cout<<Time<<"           "<<Fall(Time)<<endl;
 	}
    //Exit Program
    return 0;
}

float Fall(int Time){
	return .5*Gravity*pow(Time,2);
}
