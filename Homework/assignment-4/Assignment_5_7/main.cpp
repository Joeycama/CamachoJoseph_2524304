/* 
   File:   main
   Author: Joseph Camacho
   Created on September 29th, 2016, 12:00 PM
   Purpose: Pennies for Pay 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int day,work,pay,total;
    //Input values
    cout<<"enter number of days worked"<<endl;
    cin>>work;
    cout<<"salary per day"<<endl;
    cout<<"Day    Salary"<<endl;
    //Process values -> Map inputs to Outputs
    pay=1;
    total=0;
    for(day=1;day<=work;day++){
        total+=pay;
        pay*=2;
        cout<<day<<"      $"<<pay<<endl;
    }
    
    //Display Output
    cout<<" "<<endl;
    cout<<"total month's pay: $"<<total<<endl;
    //Exit Program
    return 0;
}