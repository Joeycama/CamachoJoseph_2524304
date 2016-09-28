/* 
   File:   main
   Author: Joseph Camacho
   Created on August 29, 2016, 9:41 AM
   Purpose:  Stadium Seating
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
    float A;
    float B;
    float C;
    unsigned short ClassA;
    unsigned short ClassB;
    unsigned short ClassC;
    float Profit;
    
    //Input values
    cout<<"Number of Class A sales"<<endl;
    cin>>ClassA;
    cout<<"Number of Class B sales"<<endl;
    cin>>ClassB;
    cout<<"Number of Class C sales"<<endl;
    cin>>ClassC;
    //Process values -> Map inputs to Outputs
    A=15;
    B=12;
    C=9;
    Profit=(A*ClassA)+(B*ClassB)+(C*ClassC);
    //Display Output
    cout<<"$ "<<Profit<<" was made"<<endl;
    //Exit Program
    return 0;
}
