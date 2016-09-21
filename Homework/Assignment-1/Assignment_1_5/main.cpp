/* 
   File:   main
   Author: Joseph Camacho
   Created on September 20, 2016, 10:37 AM
   Purpose:
 */

//System Libraries
#include <iostream>   
using namespace std;  

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    short a = 28;
    short b = 32;
    short c = 37;
    short d = 24;
    short e = 33;
    short sum, avr;
    
    
    //Process values
    sum=a+b+c+d+e;
    avr=sum/5;
    //Display Output
    cout<<avr<<endl;
    //Exit Program
    return 0;
}