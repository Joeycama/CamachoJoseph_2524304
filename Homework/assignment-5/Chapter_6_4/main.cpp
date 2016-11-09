/* 
   File:   main
   Author: Joseph Camacho
   Created on November 8th, 2016, 12:00 PM
   Purpose:  Safe Driving Area
 */

//System Libraries
#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int getNumAccidents(string);
void findLowest(int, int, int, int, int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int North, South, East, West, Central;
    //Display Output
    North=getNumAccidents("North");
    South=getNumAccidents("South");
    East=getNumAccidents("East");
    West=getNumAccidents("West");
    Central=getNumAccidents("Central");
    findLowest(North, South, East, West, Central);
    //Exit Program
    return 0;
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