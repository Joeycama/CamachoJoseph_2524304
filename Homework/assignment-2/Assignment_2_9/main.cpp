/* 
   File:   main
   Author: Joseph Camacho
   Created on August 29, 2016, 9:41 AM
   Purpose:  How Many Calories?
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
    signed short Eaten;
    float servings;
    float calories;
    float Total;
    //Input values
    cout<<"How much cookies have you eaten (be honest)?"<<endl;
    cin>>Eaten;
    //Process values -> Map inputs to Outputs
    servings=10;
    calories=300;
    Total=(Eaten/servings)*calories;
    //Display Output
    cout<<"you've eaten "<<Total<<" calories worth of cookies"<<endl;
    //Exit Program
    return 0;
}
