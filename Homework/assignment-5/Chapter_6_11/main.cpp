/* 
   File:   main
   Author: Joseph Camacho
   Created on November 8th, 2016, 12:00 PM
   Purpose:  Lowest Drop Scores
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);
//Execution Begins Here!
int main(int argc, char** argv) {
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
    //Exit Program
    return 0;
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

	Lowest = findLowest(S1, S2, S3, S4, S5);

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

int findLowest(int S1, int S2, int S3, int S4, int S5)
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