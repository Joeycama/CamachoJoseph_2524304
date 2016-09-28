/* 
   File:   main
   Author: Joseph Camacho
   Created on August 29, 2016, 9:41 AM
   Purpose:  Word Game
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
    signed char name[50];
    signed short age;
    signed char city[50];
    signed char college[50];
    signed char job[50];
    signed char animal[50];
    signed char pet[50];
    //Input values
    cout<<"Enter Name(no space)"<<endl;
    cin>>name;
    cout<<"Enter age"<<endl;
    cin>>age;
    cout<<"Enter City(no space)"<<endl;
    cin>>city;
    cout<<"Enter College(no space)"<<endl;
    cin>>college;
    cout<<"Enter Profession(no space)"<<endl;
    cin>>job;
    cout<<"Enter Animal(no space)"<<endl;
    cin>>animal;
    cout<<"Enter Animal's name(no space)"<<endl;
    cin>>pet;
    //Display Output
    cout<<"There once was a person named "<<name<<" who lived in "<<city<<". At the age of "<<age<<", "<<name<<"went to college at "<<college<<". "<<name<<" graduated and went to work as a "<<job<<". Then, "<<name<<" adopted a(n) "<<animal<< " named "<<pet<<". They both lived happily ever after!"<<endl;
    //Exit Program
    return 0;
}
