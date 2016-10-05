/* 
   File:   main
   Author: Joseph Camacho
   Created on October 4, 2016, 1:28 PM
   Purpose:  software sale
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    unsigned short x;
    float y;
    
    //Input values
    cout<<"a company is selling a package with quantity discount"<<endl;
    cout<<"the package is $99, how much do you buy"<<endl;
    cin>>x;
    //Input validation
    if(x<=0){
        cout<<"you didn't buy anything, therefore coming to see this sale pointless"<<endl;
    }
    //Process values -> Map inputs to Outputs
    if(x>0&&x<10){
        y=x*99;
        cout<<"you bought "<<x<<" packages for $"<<y<<". no discount"<<endl;
    }
    if(x>=10&&x<19){
        y=x*(99/.20);
        cout<<"you bought "<<x<<" packages for $"<<y<<". a 20% discount"<<endl;
    }
    if(x>=20&&x<49){
        y=x*(99/.30);
        cout<<"you bought "<<x<<" packages for $"<<y<<". a 30% discount"<<endl;
    }
    if(x>=50&&x<99){
        y=x*(99/.40);
        cout<<"you bought "<<x<<" packages for $"<<y<<". a 40% discount"<<endl;
    }
    if(x>=100){
        y=x*(99/.50);
        cout<<"you bought "<<x<<" packages for $"<<y<<". a 50% discount, wow! that's still a lot"<<endl;
    }
    //Display Output

    //Exit Program
    return 0;
}
