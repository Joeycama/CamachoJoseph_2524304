/* 
   File:   main
   Author: Joseph Camacho
   Created on August 29, 2016, 9:41 AM
   Purpose:  Test Average
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
    unsigned short A;
    unsigned short B;
    unsigned short C;
    unsigned short D;
    unsigned short E;
    float Avg;
    //Input values
    cout<<"Input five Scores"<<endl;
    cin>>A;
    cin>>B;
    cin>>C;
    cin>>D;
    cin>>E;
    //Process values -> Map inputs to Outputs
    Avg=(A+B+C+D+E)/5;
    //Display Output
    
    cout<<"Test Average: "<<Avg<<endl;
    //Exit Program
    return 0;
}
