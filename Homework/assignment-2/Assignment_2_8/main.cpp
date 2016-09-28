/* 
   File:   main
   Author: Joseph Camacho
   Created on August 29, 2016, 9:41 AM
   Purpose:  How Many Widgets?
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
    short Widget;
    unsigned short Pallet;
    unsigned short Total;
    //Input values
    cout<<"Pallet Weight "<<endl;
    cin>>Pallet;
    cout<<"Pallet with Widgets Weight"<<endl;
    cin>>Total;
    //Process values -> Map inputs to Outputs
    Widget=(Total-Pallet)/12.5;
    //Display Output
    cout<<"number of Widgets: "<<Widget<<endl;
    //Exit Program
    return 0;
}
