/* 
 * File:   main.cpp
 * Author: Joseph Camacho
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Menu Without Functions
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int menuItm;   //choice from menu
    
    //loop until user exits
    do{
        //prompt for problem for user input
        cout<<"1.  Type 1  for Problem A"<<endl;
        cout<<"2.  Type 2  for Problem B"<<endl;
        cout<<"3.  Type 3  for Problem C"<<endl;
        cout<<"4.  Type 4  for Problem D"<<endl;
        cout<<"5.  Type 5  for Problem E"<<endl;
        cout<<"6.  Type 6  for Problem F"<<endl;
        cout<<"7.  Type 7  for Problem G"<<endl;
        cout<<"8.  Type 8  for Problem H"<<endl;
        cout<<"9.  Type 9  for Problem I"<<endl;
        cout<<"10. Type 10 for Problem J"<<endl;
        cin>>menuItm;
        //Go to the Problem
        switch(menuItm){
            case 1:{
                cout<<"inside Problem A"<<endl;
                //input values
                //process values -> Map inputs to Outputs
                //Display Output
                break;
            }
        }
        switch(menuItm){
            case 2:{
                cout<<"inside Problem B"<<endl;
                //input values
                //process values -> Map inputs to Outputs
                //Display Output
                break;
            }
        }
        switch(menuItm){
            case 3:{
                cout<<"inside Problem C"<<endl;
                //input values
                //process values -> Map inputs to Outputs
                //Display Output
                break;
            }
        }
        switch(menuItm){
            case 4:{
                cout<<"inside Problem D"<<endl;
                //input values
                //process values -> Map inputs to Outputs
                //Display Output
                break;
            }
        }
        switch(menuItm){
            case 5:{
                cout<<"inside Problem E"<<endl;
                //input values
                //process values -> Map inputs to Outputs
                //Display Output
                break;
            }
        }
        switch(menuItm){
            case 6:{
                cout<<"inside Problem F"<<endl;
                //input values
                //process values -> Map inputs to Outputs
                //Display Output
                break;
            }
        }
        switch(menuItm){
            case 7:{
                cout<<"inside Problem G"<<endl;
                //input values
                //process values -> Map inputs to Outputs
                //Display Output
                break;
            }
        }
        switch(menuItm){
            case 8:{
                cout<<"inside Problem H"<<endl;
                //input values
                //process values -> Map inputs to Outputs
                //Display Output
                break;
            }
        }
        switch(menuItm){
            case 9:{
                cout<<"inside Problem I"<<endl;
                //input values
                //process values -> Map inputs to Outputs
                //Display Output
                break;
            }
        }
        switch(menuItm){
            case 10:{
                cout<<"inside Problem J"<<endl;
                //input values
                //process values -> Map inputs to Outputs
                //Display Output
                break;
            }//endcase
        }//end the switch/case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    

    //Exit
    return 0;
}

