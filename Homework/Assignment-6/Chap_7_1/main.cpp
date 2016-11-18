/* 
   File:   main
   Author: Joseph Camacho
   Created on September 29th, 2016, 12:00 PM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void minmax();
//Execution Begins Here!
int main(int argc, char** argv) {
    //Display Output
    minmax();
    //Exit Program
    return 0;
}

void minmax(){
    //Declaration of Variables
    int mn,mx;
    int Numb = 10;
    int a[Numb];
    //Input values
    cout<<"Enter 10 values:"<<endl;
    cout<<" "<<endl;
    for(int i=0;i<10;i++){
    cout<<"Enter value:";
    cin>>a[i];
    }
    //Process values -> Map inputs to Outputs
    mn=a[0];
    mx=a[0];
    for(int i=1;i<10;i++){
        if(mn>a[i]){
                mn=a[i];
        }
        else if(mx<a[i]){
                mx = a[i];
        }
    }
    //Exit Program
    cout<<"Maximum number is: "<< mx << endl;
    cout<<"Minimum number is: "<< mn << endl;
}