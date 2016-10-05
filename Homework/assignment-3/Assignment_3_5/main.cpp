/* 
   File:   main
   Author: Joseph Camacho
   Created on October 4, 2016, 1:28 PM
   Purpose:  BMI
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
    unsigned short height, weight, BMI;
    //Input values
    cout<<"BMI calculator"<<endl;
    cout<<"enter height(inches) and weight(pounds)"<<endl;
    cin>>height>>weight;
    //Input validation
    
    //Process values -> Map inputs to Outputs
    BMI=weight*703/height^2;
    cout<<"BMI = "<<BMI<<endl;
    if(BMI<18.5){
        cout<<"underweight"<<endl;
    }
    if(BMI>25){
        cout<<"overweight"<<endl;
    }
    if(BMI>=18.5&&BMI<=25){
        cout<<"optimal"<<endl;
    }
    //Display Output

    //Exit Program
    return 0;
}
