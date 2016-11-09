/* 
   File:   main
   Author: Joseph Camacho
   Created on November 8th, 2016, 12:00 PM
   Purpose:  Markup
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
float calculateRetail();
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float RetalPrice;
    //Display Output
cout<<"This program will calculate the retail price of an item"<<endl;
    RetalPrice = calculateRetail();
    cout<<" "<<endl;
    cout<<"the retail price of the item is $"<<RetalPrice<<endl;
    //Exit Program
    return 0;
}

float calculateRetail(){
    float Cost, Markup;
    do{
        cout<<"What is the item's wholesale cost? ";
        cin>>Cost;
        if (Cost < 0){
            cout<<"cannot calculate wholesale cost"<<endl;
        }
    } while (!(Cost > 0));
    do{
        cout<<"What is the item's markup percentage? ";
        cin>>Markup;
        if (Markup < 0){
            cout<<"cannot calculate Markup percentage"<<endl;
        }
} while (!(Markup > 0));

    Markup /= 100;
    return Cost * (1 + Markup);
}