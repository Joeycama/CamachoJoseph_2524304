/* 
   File:   main
   Author: Joseph Camacho
   Created on October 10th, 9:30 AM
   Purpose:  Assignment 4 menu
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
float cpm=3.6;
float fee=.04;
float charge=2500.0;
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
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
                //Declaration of Variables
                int Ax,ANum;
                short Ay;
                //Input values
                cout<<"This program calculates the sum of a positive integer value"<<endl;
                cout<<"insert a starting number"<<endl;
                cin>>Ax;
                //Process values -> Map inputs to Outputs
                Ay=0;
                if (Ax>0){
                    for(ANum=1;ANum<=Ax;ANum++){
                        Ay+=ANum;
                    }
                    cout<<"the sum of 1 to "<<Ax<<" is "<<Ay<<endl;
                }
                else if (Ax==0){
                    cout<<"zero plus zero still equals zero"<<endl;
                }
                else if (Ax<0){
                    cout<<"did not accept negative starting number"<<endl;
                }
                break;
            }
            case 2:{
                //Declaration of Variables
                int Days,pop,Bx;
                float inc;
                //Input values
                cout<<"Enter starting number of organisms"<<endl;
                cin>>pop;
                cout<<"Enter average percentage increase in population"<<endl;
                cin>>inc;
                cout<<"Enter number of days"<<endl;
                cin>>Days;
                //Input Validation
                while(pop<2||inc<0||Days<1){
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
                    else if(Days<1){
                        cout<<"error"<<endl;
                        cout<<"re-enter number of days"<<endl;
                        cin>>Days;
                    }
                }
                //Process values -> Map inputs to Outputs
                cout<<"Days     population size"<<endl;
                for(Bx=1;Bx<=Days;Bx++){
                    pop*=(1+(inc/100));
                    cout<<Bx<<"        "<<pop<<endl;
                }
                break;
            }
            case 3:{
                //Declaration of Variables
                float c,f;
                //Input values
                cout<<"Celsius    Fahrenheit"<<endl;
                //Process values -> Map inputs to Outputs
                for(c=0;c<=20;c++){
                    f=(9/5*c)+32;
                    cout<<c<<"          "<<f<<endl;
                }
                break;
            }
            case 4:{
                //Declaration of Variables
                int number,large,small;
                //Input values
                cout<<"enter a series of numbers to be sorted"<<endl;
                cout<<"enter a number"<<endl;
                cin>>number;
                //Process values -> Map inputs to Outputs
                large=small=number;
                while(number!=-99){
                    cout<<"enter a number or enter -99 to end series"<<endl;
                    cin>>number;
                    if(number>large)
                        large=number;
                    if(number<small)
                        small=number;
                }
                //Display Output
                cout<<"the largest number is "<<large<<endl;
                cout<<"the smallest number is "<<small<<endl;
                break;
            }
            case 5:{
                //Declaration of Variables
                int Ex,Ey,Ez,ASCII;
                Ey=0;
                //Input values
                for(Ez=0;Ez<6;Ez++){
                    Ex=Ey+16;
                    for(ASCII=Ey;ASCII<Ex;ASCII++){
                        cout<<static_cast<char>(ASCII)<<" ";
                    }
                    Ey=Ex;
                    cout<<endl;
                }
                break;
            }
            case 6:{
                //Declaration of Variables
                int OceanYear;
                float Fx = 0;
                //Input values
                cout<<"Ocean levels"<<endl;
                cout<<"year  Amount Risen"<<endl;
                //Process values -> Map inputs to Outputs

                //Display Output
                for(OceanYear=1;OceanYear<=25;OceanYear++){
                            Fx+= 1.5;
                            cout<<OceanYear<<"     "<<Fx<<endl;
                    }
                break;
            }
            case 7:{
                //Declaration of Variables
                int min;
                float Gx;
                //Input values
                cout<<"Time    Calories burned"<<endl;
                //Process values -> Map inputs to Outputs
                for(min=10;min<=30;min+=5){
                            Gx=min*cpm;
                            cout<<min<<"      "<<Gx<<endl; 
                    }
                break;
            }
            case 8:{
                //Declaration of Variables
                int SaleYear;
                float SaleRate;
                //Input values
                cout<<"year    sales"<<endl;
                //Process values -> Map inputs to Outputs
                for(SaleYear=1;SaleYear<=6;SaleYear++){
                            SaleRate=charge*(1+SaleYear*fee);
                            cout<<SaleYear<<"       $"<<SaleRate<<endl; 
                    }
                break;
            }
            case 9:{
                //Declaration of Variables
                int Spe,Hrs,Dis,Ix;
                //Input values
                cout<<"enter speed of vehicle in mph"<<endl;
                cin>>Spe;
                cout<<"enter amount of hours traveled"<<endl;
                cin>>Hrs;
                //Process values -> Map inputs to Outputs
                Dis=0;
                if(Spe>=0&&Hrs>=1){
                    cout<<"Hour  Distance Traveled"<<endl;
                    cout<<"----------------------"<<endl;
                    for(Ix=1;Ix<=Hrs;Ix++){
                        Dis+=Spe;
                        cout<<Ix<<"     "<<Dis<<endl;
                    }
                }
                break;
            }
            case 10:{
                //Declaration of Variables
                int day,work,pay,total;
                //Input values
                cout<<"enter number of days worked"<<endl;
                cin>>work;
                cout<<"salary per day"<<endl;
                cout<<"Day    Salary"<<endl;
                //Process values -> Map inputs to Outputs
                pay=1;
                total=0;
                for(day=1;day<=work;day++){
                    total+=pay;
                    pay*=2;
                    cout<<day<<"      $"<<pay<<endl;
                }

                //Display Output
                cout<<" "<<endl;
                cout<<"total month's pay: $"<<total<<endl;
                break;
            }//End Case
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}
