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
    short eTotal = 58;  //Total Sales
    float eSales = 8.6;        //Sales $
    float ePred; //answer
    
    //process values
    ePred=eSales*eTotal/PERCENT;
    
    //Output the results
    cout<<"Number of Sales " <<eTotal<<endl;
    cout<<"Revenue (million) $" <<eSales<<endl;
    cout<<"Total (million) $" <<ePred<<endl;
    
    //Exit stage right
    return 0;
}