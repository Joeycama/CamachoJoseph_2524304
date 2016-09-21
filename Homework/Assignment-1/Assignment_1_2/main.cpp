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
    short tSales = 95;  //purchase
    float tState = 4;        //state tax
    float tCount = 2;   //country tax
    float tPred;
    //process values
    tPred=tSales*((tCount/PERCENT)+(tState/PERCENT));
    
    //Output the results
    cout<<"Purchase: $"<<tSales<<endl;
    cout<<"State Tax: "<<tState<<endl;
    cout<<"County Tax: "<<tCount<<endl;
    cout<<"total Sales Tax: "<<tPred<<endl;
    
    //Exit stage right
    return 0;
}