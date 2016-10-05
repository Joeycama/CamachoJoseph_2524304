/* 
   File:   main
   Author: Joseph Camacho
   Created on October 4, 2016, 1:28 PM
   Purpose:  change for a dollar
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    unsigned short penny, nickel, dime, quarter;
    float dollar;
    //Input values
    cout<<"Change for a dollar game"<<endl;
    cout<<"enter the exact amount of coins to equal a dollar to win"<<endl;
    cout<<"pennies: "<<endl;
    cin>>penny;
    cout<<"nickels: "<<endl;
    cin>>nickel;
    cout<<"dimes: "<<endl;
    cin>>dime;
    cout<<"quarters: "<<endl;
    cin>>quarter;
    //Input validation
    
    //Process values -> Map inputs to Outputs
    dollar=(penny*.01)+(nickel*.05)+(dime*.10)+(quarter*.25);
    cout<<"$"<<dollar<<endl;
    if(dollar<1||dollar>1){
        cout<<"wrong"<<endl;
    }
    if(dollar==1){
        cout<<"correct"<<endl;
    }
    //Display Output

    //Exit Program
    return 0;
}
