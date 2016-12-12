/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on September 29th, 2016, 12:00 PM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char player; //class 
    int LP, AP, EP; //life points, Attack points, Energy points
    //Input values
    
    cout<<"-T.B.C. simulator--"<<endl;
    cout<<"-Turn Based Combat-"<<endl;
    cout<<"-------------------"<<endl;
    cout<<"select class"<<endl;
    cout<<"f=fighter"<<endl;
    cout<<"t=thief"<<endl;
    cout<<"w=wizard"<<endl;
    cin>>player;
    switch(player){
        case 'f':
        case 'F':player='f';break;
        case 't':
        case 'T':player='t';break;
        case 'w':
        case 'W':player='w';break;
        default: player='f';break;
    }
    if(player=='f'){
        cout<<"you're the fighter"<<endl;
        cout<<"10 life points"<<endl;
        LP=10;
        cout<<"5 attack points"<<endl;
        AP=5;
        cout<<"3 energy points"<<endl;
        EP=3;
    }
    else if(player=='t'){
        cout<<"you're the thief"<<endl;
        cout<<"5 life points"<<endl;
        LP=5;
        cout<<"3 attack points"<<endl;
        AP=3;
        cout<<"10 energy points"<<endl;
        EP=10;
    }
    else if(player=='w'){
        cout<<"you're the wizard"<<endl;
        cout<<"3 life points"<<endl;
        LP=3;
        cout<<"10 attack points"<<endl;
        AP=10;
        cout<<"5 energy points"<<endl;
        EP=5;
    }
    //Process values -> Map inputs to Outputs
    
    //Display Output

    //Exit Program
    return 0;
}
