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
    int a = sizeof(char);
    int b = sizeof(int);
    int c = sizeof(float);
    int d = sizeof(double);
    //Process values
    
    //Display Output
    cout<<"char is stored in "<<a<<" byte"<<endl;
    cout<<"int is stored in "<<b<<" bytes"<<endl;
    cout<<"float is stored in "<<c<<" bytes"<<endl;
    cout<<"double is stored in "<<d<<" bytes"<<endl;
    //Exit Program
    return 0;
}