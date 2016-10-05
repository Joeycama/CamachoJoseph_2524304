/* 
   File:   main
   Author: Joseph Camacho
   Created on October 4, 2016, 1:28 PM
   Purpose:  Area of rectangles
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
    unsigned short x,y,l,w;
    short one, two;
    //Input values
    cout<<"comparing areas of two Rectangles"<<endl;
    cout<<"enter Length and Width of rectangle 1"<<endl;
    cin>>x>>y;
    cout<<"enter Length and Width of rectangle 2"<<endl;
    cin>>l>>w;
    //Input validation
  
    //Process values -> Map inputs to Outputs
    one=x*y;
    cout<<"rectangle 1 = "<<one<<endl;
    two=l*w;
    cout<<"rectangle 2 = "<<two<<endl;
    if(one>two){
        cout<<"rectangle 1 is larger than 2"<<endl;
    }
    if(one<two){
        cout<<"rectangle 2 is larger than 1"<<endl;
    }
    if(one==two){
        cout<<"rectangle 1 is equal to 2"<<endl;
    }
    //Display Output

    //Exit Program
    return 0;
}
