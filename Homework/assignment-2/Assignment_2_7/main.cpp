/* 
   File:   main
   Author: Joseph Camacho
   Created on August 29, 2016, 9:41 AM
   Purpose:  Box Office
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
    char Movie[50];
    unsigned short ATicket;
    unsigned short CTicket;
    float Gross;
    float Net;
    float MDist;
    //Input values
    cout<<"name of movie (no spaces)"<<endl;
    cin>>Movie;
    cout<<"number of adult tickets sold"<<endl;
    cin>>ATicket;
    cout<<"number of child tickets sold"<<endl;
    cin>>CTicket;
    //Process values -> Map inputs to Outputs
    Gross=(ATicket*10.00)+(CTicket*6.00);
    Net=Gross*.2;
    MDist=Gross-Net;
    //Display Output
    cout<<"Movie name:                  "<<Movie<<endl;
    cout<<"Adult Tickets sold:          "<<ATicket<<endl;
    cout<<"Child Tickets sold:          "<<CTicket<<endl;
    cout<<"Gross Box Office Profit:    $"<<Gross<<endl;
    cout<<"Net Box Office Profit:      $"<<Net<<endl;
    cout<<"Amount Paid to Distributor: $"<<MDist<<endl;
    //Exit Program
    return 0;
}
