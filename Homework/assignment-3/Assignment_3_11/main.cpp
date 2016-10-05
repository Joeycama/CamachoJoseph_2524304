/* 
   File:   main
   Author: Joseph Camacho
   Created on  September 29th, 2016, 12:00 PM
   Purpose:  Develop a math tutor to emphasize the random number generator
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>    //Random number seed
#include <ctime>      //Seed the random number generator
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declaration of Variables
    unsigned short op1,op2,result,answer;
    
    //Input values
    op1=rand()%900+100;//3 digit random number
    op2=rand()%900+100;//3 digit random number
    
    //Process values -> Map inputs to Outputs
    result=op1+op2;
    
    //Display Output
    cout<<"Solve the following addition problem"<<endl;
    cout<<"   "<<op1<<endl;
    cout<<" + "<<op2<<endl;
    cout<<"------"<<endl;
    
    //Ask user for the answer
    cout<<endl<<"What is the answer?"<<endl;
    cin>>answer;
    cout<<endl;
    
    //Determine if correct or not
    if(result==answer){
        cout<<"correct"<<endl;
    }
    if(result!=answer){
        cout<<"incorrect"<<endl;
        cout<<"the answer is "<<result<<endl;
    }

    //Exit Program
    return 0;
}