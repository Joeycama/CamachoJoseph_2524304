/* 
   File:   main
   Author: Joseph Camacho
   Created on November 8th, 2016, 12:00 PM
   Purpose:  Kinetic Energy
 */

//System Libraries
#include <iostream>
#include <cmath>

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
float kinetic(int, int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int Mass,Velo;
    //Input values
    cout<<"Enter the mass"<<endl;
    cin>>Mass;
    cout<<"Enter the velocity"<<endl;
    cin>>Velo;
    //Display Output
    cout<<"This object has "<<kinetic(Mass, Velo)<<" joules of kinetic energy"<< endl;
    //Exit Program
    return 0;
}

float kinetic(int Mass, int Velo){   
	return .5 * Mass * pow(Velo, 2);
}