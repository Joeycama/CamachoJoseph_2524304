/* 
   File:   main
   Author: Joseph Camacho
   Created on September 29th, 2016, 12:00 PM
   Purpose: The Greatest and Least of These 
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
    int number,large,small;
    //Input values
    cout<<"enter a series of numbers to be sorted"<<endl;
    cout<<"enter a number"<<endl;
    cin>>number;
    //Process values -> Map inputs to Outputs
    large=small=number;
    while(number!=-99){
        cout<<"enter a number or enter -99 to end series"<<endl;
        cin>>number;
        if(number>large)
            large=number;
        if(number<small)
            small=number;
    }
    //Display Output
    cout<<"the largest number is "<<large<<endl;
    cout<<"the smallest number is "<<small<<endl;
    //Exit Program
    return 0;
}