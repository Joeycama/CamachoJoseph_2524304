/* 
   File:   main
   Author: Joseph Camacho
   Created on September 20, 2016, 10:37 AM
   Purpose:
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;  

//User Libraries

//Global Constants
const char PERCENT=100;  

//Functional Prototypes

//Program execution begins here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float a = 88.67; //cost
    float b = 6.75; //tax
    float c = 20; //tip percent
    float d, e, f; //answer, tip percent, tax percent
    //process values
    f=a*b/PERCENT;
    e=a*(c/PERCENT);
    d=(a+f)+e;
    
    //Output the results
    cout<<"Meal cost: $"<<a<<endl;
    cout<<"Tax: $"<<f<<endl;
    cout<<"Tip: $"<<e<<endl;
    cout<<"Bill Total: $"<<d<<endl;
    
    //Exit stage right
    return 0;
}