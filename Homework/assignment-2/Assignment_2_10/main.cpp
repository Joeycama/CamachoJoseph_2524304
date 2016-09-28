/* 
   File:   main
   Author: Joseph Camacho
   Created on August 29, 2016, 9:41 AM
   Purpose:  How Much Insurance?
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
    signed short replace;
    float insure;
    float cost;
    //Input values
    cout<<"replacement cost of building"<<endl;
    cin>>replace;
    //Process values -> Map inputs to Outputs
    insure=.8;
    cost=replace*insure;
    //Display Output
    cout<<"Minimal amount of insurance: $"<<cost<<endl;
    //Exit Program
    return 0;
}
