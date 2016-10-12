/* 
   File:   main
   Author: Joseph Camacho
   Created on September 29th, 2016, 12:00 PM
   Purpose: Population 
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
    int day,pop,x;
    float inc;
    //Input values
    cout<<"Enter starting number of organisms"<<endl;
    cin>>pop;
    cout<<"Enter average percentage increase in population"<<endl;
    cin>>inc;
    cout<<"Enter number of days"<<endl;
    cin>>day;
    //Input Validation
    while(pop<2||inc<0||day<1){
        if(pop<2){
            cout<<"error"<<endl;
            cout<<"re-enter starting number of organisms"<<endl;
            cin>>pop;
        }
        else if(inc<0){
            cout<<"error"<<endl;
            cout<<"re-enter percentage increase of population"<<endl;
            cin>>inc;
        }
        else if(day<1){
            cout<<"error"<<endl;
            cout<<"re-enter number of days"<<endl;
            cin>>day;
        }
    }
    //Process values -> Map inputs to Outputs
    cout<<"Days     population size"<<endl;
    for(x=1;x<=day;x++){
        pop*=(1+(inc/100));
        cout<<x<<"        "<<pop<<endl;
    }
    //Display Output
    
    //Exit Program
    return 0;
}