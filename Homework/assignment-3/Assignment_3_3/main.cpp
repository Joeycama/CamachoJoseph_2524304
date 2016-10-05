/* 
   File:   main
   Author: Joseph Camacho
   Created on October 4, 2016, 1:28 PM
   Purpose:  Magic Dates
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
    unsigned short day,year,month;
    
    //Input values
    cout<<"a Magic Date is when  the month times the day equals the year"<<endl;
    cout<<"type in a date (day month year)"<<endl;
    cout<<"EX: 6 10 60"<<endl;
    cin>>day>>month>>year;
    
    //Input validation
    if(month<1||month>12){
        cout<<"Bad Month"<<endl;
        return 1;//return failure
    }
    if(day<1||day>31){
        cout<<"Bad Day"<<endl;
        return 1;//return failure
    }
    //Process values -> Map inputs to Outputs
    if(year==day*month){
        cout<<day<<"/"<<month<<"/"<<year<<" is magic"<<endl;
    }
    if(year!=day*month){
        cout<<day<<"/"<<month<<"/"<<year<<" isn't magic"<<endl;
    }
    //Display Output

    //Exit Program
    return 0;
}
