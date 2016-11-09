/* 
   File:   main
   Author: Joseph Camacho
   Created on November 8th, 2016, 12:00 PM
   Purpose:  Present Value
 */

//System Libraries
#include <iostream>

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
bool isPrime(int);
//Execution Begins Here!
int main(int argc, char** argv) {
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
    //Exit Program
    return 0;
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