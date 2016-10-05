/* 
   File:   main
   Author: Joseph Camacho
   Created on October 4, 2016, 1:28 PM
   Purpose:  Roman Number Converter
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
    unsigned short x;
    
    //Input values
    cout<<"Roman Numeral Converter"<<endl;
    cout<<"type in a number between 1 and 10 to convert"<<endl;
    cin>>x;
    
    //Input validation
    if(x<1||x>10){
        cout<<"Nope "<<x<<" isn't something between 1 and 10"<<endl;
        cout<<"Exit and try again"<<endl;
        return 1;//Return failure
    }
    
    
    //Process values -> Map inputs to Outputs
    switch(x){
        case 1: cout<<x<<" converts to I"<<endl;break;
        case 2: cout<<x<<" converts to II"<<endl;break;
        case 3: cout<<x<<" converts to III"<<endl;break;
        case 4: cout<<x<<" converts to IV"<<endl;break;
        case 5: cout<<x<<" converts to V"<<endl;break;
        case 6: cout<<x<<" converts to VI"<<endl;break;
        case 7: cout<<x<<" converts to VII"<<endl;break;
        case 8: cout<<x<<" converts to VIII"<<endl;break;
        case 9: cout<<x<<" converts to IX"<<endl;break;
        case 10: cout<<x<<" converts to X"<<endl;break;
        
    }
    
    //Display Output

    //Exit Program
    return 0;
}