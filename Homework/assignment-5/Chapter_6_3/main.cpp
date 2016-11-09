/* 
   File:   main
   Author: Joseph Camacho
   Created on November 8th, 2016, 12:00 PM
   Purpose:  Winning Division
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
#include <string>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
float getSales(string);
void findHighest(float, float, float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float NE, SE, NW, SW;
    //Display Output
    NE = getSales("Northeast");
    SE = getSales("Southeast");
    NW = getSales("Northwest");
    SW = getSales("Southwest");
    findHighest(NE, SE, NW, SW);
        
    //Exit Program
    return 0;
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