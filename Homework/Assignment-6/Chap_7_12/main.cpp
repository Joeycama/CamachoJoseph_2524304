/* 
   File:   main
   Author: Joseph Camacho
   Created on September 29th, 2016, 12:00 PM
   Purpose:  
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    const int Student = 5;   
    int score[Student];
    string name[Student] = {"Student 1", "Student 2", "Student 3", "Student 4", "Student 5"};
    char grade[Student];
    // Input values
    cout<<"enter student grades"<<endl;
    for(int Num = 0;Num<Student; Num++){
        cout<<name[Num]<<": ";
        cin>>score[Num];
    }
    //Process Value
    for(int Num=0;Num<Student; Num++){
        if(score[Num]>=90)grade[Num]='A';
    else if(score[Num]>=80)grade[Num]='B';
    else if(score[Num]>=70)grade[Num]='C';
    else if(score[Num]>=60)grade[Num]='D';
    else grade[Num]='F';
    }
    //Display
    cout<<name[0]<<": "<<grade[0]<<endl;
    cout<<name[1]<<": "<<grade[1]<<endl;
    cout<<name[2]<<": "<<grade[2]<<endl;
    cout<<name[3]<<": "<<grade[3]<<endl;
    cout<<name[4]<<": "<<grade[4]<<endl;
    return 0;
}