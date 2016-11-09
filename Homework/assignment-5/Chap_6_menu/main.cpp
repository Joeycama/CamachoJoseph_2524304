/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on October 17th, 8:30 AM
   Purpose:  Chapter 6 menu
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
float Gravity=9.8;
//Function prototypes
float calculateRetail();
float getSales(string);
void findHighest(float, float, float, float);
int getNumAccidents(string);
void findLowest(int, int, int, int, int);
float Fall(int);
float kinetic(int, int);
float tempCnv(float);
float tempCnv(float,float,float,float,float);
float presentValue(float,float,int);
void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLow(int, int, int, int, int);
int poplshn(int,float,float);
bool isPrime(int);

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
                float RetalPrice;
                //Display Output
                cout<<"This program will calculate the retail price of an item"<<endl;
                RetalPrice = calculateRetail();
                cout<<" "<<endl;
                cout<<"the retail price of the item is $"<<RetalPrice<<endl;
                break;
            }
            case 2:{
                //Declaration of Variables
                float NE, SE, NW, SW;
                //Display Output
                NE = getSales("Northeast");
                SE = getSales("Southeast");
                NW = getSales("Northwest");
                SW = getSales("Southwest");
                findHighest(NE, SE, NW, SW);
                break;
            }
            case 3:{
                //Declaration of Variables
                int North, South, East, West, Central;
                //Display Output
                North=getNumAccidents("North");
                South=getNumAccidents("South");
                East=getNumAccidents("East");
                West=getNumAccidents("West");
                Central=getNumAccidents("Central");
                findLowest(North, South, East, West, Central);
                break;
            }
            case 4:{
                //Display Output
                cout<<"time        Distance"<<endl;
                for(int Time=1;Time<=10;Time++){
                    cout<<Time<<"           "<<Fall(Time)<<endl;
                    }
                break;
            }
            case 5:{
                //Declaration of Variables
                int Mass,Velo;
                //Input values
                cout<<"Enter the mass"<<endl;
                cin>>Mass;
                cout<<"Enter the velocity"<<endl;
                cin>>Velo;
                //Display Output
                cout<<"This object has "<<kinetic(Mass, Velo)<<" joules of kinetic energy"<< endl;
                break;
            }
            case 6:{
                //Declare freezing and boiling pts of water
                //for degree Fahrenheit and Celsius 
                float f1=32.0f,f2=212.0f,c1=0.0f,c2=100.0f;
                int begF=0,endF=250;

                //Process values -> Map inputs to Outputs
                cout<<"Degree F   Degree C   Degree C"<<endl;
                cout<<fixed<<setprecision(2)<<showpoint;
                for(int degF=begF;degF<=endF;degF++){
                    cout<<setw(6)<<degF
                        <<setw(12)<<tempCnv(degF)
                        <<setw(11)<<tempCnv(degF,f1,f2,c1,c2)<<endl;
                }

                break;
            }
            case 7:{
                //Declaration of Variables
                float PValue,value,Rate;
                int year;
                //Input values
                cout<<"enter desired future amount"<<endl;
                cin>>value;
                cout<<"enter interest rate"<<endl;
                cin>>Rate;
                cout<<"enter amount of years"<<endl;
                cin>>year;
                //Process values -> Map inputs to Outputs
                PValue=presentValue(value, Rate, year);
                //Display Output
                cout<<"You need to deposit $"<<PValue<<" to have a balance of $"<<value<<" in "<<year<<" years"<<endl;
                break;
            }
            case 8:{
                //Declaration of Variables
                int S1, S2, S3, S4, S5;
                //Display Output
                cout << "This program calculates the average of five Scores"<<endl;
                getScore(S1);
                getScore(S2);
                getScore(S3);
                getScore(S4);
                getScore(S5);
                calcAverage(S1, S2, S3, S4, S5);
                break;
            }
            case 9:{
                //Declaration of Variables
                int pop,death,birth,years;//per year
                float bRate,dRate;

                //Input values
                cout<<"This program calculates the population as a function of time"<<endl;
                cout<<"Population?"<<endl;
                cin>>pop;
                cout<<"Birth Rate per year?"<<endl;
                cin>>birth;
                cout<<"Death Rate per year?"<<endl;
                cin>>death;
                cout<<"How many years to predict?"<<endl;
                cin>>years;

                //Process values -> Map inputs to Outputs
                bRate=1.0f*birth/pop;
                dRate=1.0f*death/pop;
                for(int year=1;year<=years;year++){
                    pop=poplshn(pop,dRate,bRate);
                    cout<<"Year "<<year<<" = population of "<<pop<<endl;
                }
                break;
            }
            case 10:{
                //Declaration of Variables
                int Num;
                //Input values
                cout<<"This program let you know if the number entered is a "
                                     <<"prime number.\nEnter a number: ";
                cin>>Num;
                //Display Output
                    cout<<"The number "<<Num;
                    if (isPrime(Num)){
                            cout<<" is a Prime number."<<endl;
                    }
                    else
                            cout<<" is not a Prime number."<< endl;
                break;
            }//End Case
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

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

float getSales(string Division){
	float Sales;
	do{
        cout<<"What is the "<<Division<<" division's quarterly sales figure? "<<endl;
    	cin  >> Sales;
    	if (Sales < 0.00)
    	cout <<"error"<<endl;
    } while (!(Sales > 0.00));
    return Sales;
}

void findHighest(float NE, float SE, float NW, float SW){
	float Hightest;
	if (NE > SE && NE > NW && NE > SW){
		Hightest = NE;
		cout << "Northeast ";
	}
	else if (SE > NE && SE > NW && SE > SW){
		Hightest = SE;
		cout << "Southeast ";
	}
	else if (NW > SE && NW > NE && NW > SW){
		Hightest = NW;
		cout << "Northwest ";
	}
	else{
		Hightest = SW;
		cout << "Southwest ";
	}
	cout << "The highest growing division is the division with $" << Hightest << " in sales.\n";
}

int getNumAccidents(string Region){
	int Accidents;
	do{
		cout<<"How many traffic accidents were reported in the "<<Region<< " region during last year? ";
		cin>>Accidents;
		if (Accidents<=0){
			cout<<"error"<<endl;
		}
	} while (!(Accidents > 0));
    cout << endl;
	return Accidents;
}

void findLowest(int North, int South, int East, int West, int Central){
	int Lowest;
	cout<<"last year, the least amount of traffic accidents were in the ";
	if(North<South&&North<East&&North<West&&North<Central){
		Lowest=North;
		cout<<"Northern";
	}
	else if(South<North&&South<East&&South<West&&South<Central){
		Lowest=South;
		cout<<"Southern";
	}
	else if(East<North&&East<South&&East<West&&East<Central){
		Lowest=East;
		cout<<"Eastern";
	}
	else if(West<North&&West<East&&West<South&&West<Central){
		Lowest=West;
		cout<<"Western";
	}
	else{
		Lowest=Central;
		cout<<"Central";
	}
	cout<<" region, which had "<<Lowest<<" reported traffic accidents"<<endl;
}

float Fall(int Time){
	return .5*Gravity*pow(Time,2);
}

float kinetic(int Mass, int Velo){   
	return .5 * Mass * pow(Velo, 2);
}

float tempCnv(float f){
    return (f-32.0f)*5/9;
}

float tempCnv(float f,float f1,float f2,float c1,float c2){
    return c1+(f-f1)*(c2-c1)/(f2-f1);
}

float presentValue(float value, float Rate, int year){
	return value/pow(1 + Rate, year);
}

void getScore(int &Score){
	do{
		cout << "Enter test score"<<endl;
		cin  >> Score;
		if (Score<0||Score>100){
			cout<<"error";
		}
	} while(Score < 0 || Score > 100);

}

void calcAverage(int S1, int S2, int S3, int S4, int S5){
	int Lowest; 	
	double Avg;     

	Lowest = findLow(S1, S2, S3, S4, S5);

	if (Lowest == S1)
		Avg = (S2 + S3 + S4 + S5)/4;
	else if(Lowest == S2)
		Avg = (S1 + S3 + S4 + S5)/4;
	else if(Lowest == S3)
		Avg = (S2 + S1 + S4 + S5)/4;
	else if(Lowest == S4)
		Avg = (S2 + S3 + S1 + S5)/4;
	else
		Avg = (S2 + S3 + S4 + S1)/4;
	
	// Display average
	cout << "The average of the four highest scores is "<< Avg <<endl;
}

int findLow(int S1, int S2, int S3, int S4, int S5)
{	// Determine and return lowest test score
	if (S1<S2&&S1<S3&&S1<S4&&S1<S5)
		return S1;
	else if (S2<S1&&S2<S3&&S2<S4&&S2<S5)
		return S2;
	else if (S3<S2&&S3<S1&&S3<S4&&S3<S5)
		return S3;
	else if (S4<S2&&S4<S3&&S4<S1&&S4<S5)
		return S4;
	else
		return S5;	
}

int poplshn(int pop,float death,float birth){
    return pop*(1+birth-death);
}

bool isPrime(int Num){
    if (Num > 1){
        for (int i = 2; i <= Num; ++i){
            if (Num % i == 0){
            if(Num == i)
            return true;
        else
            return false;
                    }

            }
    }
	return false;
}