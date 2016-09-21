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
const char PERCENT=100;
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float a = 15.95;
    float b = 24.95;
    float c = 6.97;
    float d = 12.95;
    float e = 3.95;
    float f = 9.7;
    float subtotal, total, tax;
    
    
    //Process values
    subtotal=a+b+c+d+e;
    tax=subtotal*(f/PERCENT);
    total=subtotal+tax;
    //Display Output
    cout<<"Item 1: $"<<a<<endl;
    cout<<"Item 2: $"<<b<<endl;
    cout<<"Item 3: $"<<c<<endl;
    cout<<"Item 4: $"<<d<<endl;
    cout<<"Item 5: $"<<3<<endl;
    cout<<"subtotal: $"<<subtotal<<endl;
    cout<<"tax: $"<<tax<<endl;
    cout<<"total: $"<<total<<endl;
    //Exit Program
    return 0;
}