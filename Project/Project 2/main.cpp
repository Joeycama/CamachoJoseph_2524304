/* 
   File:   main
   Author: Joseph Camacho
   Created on December 12, 2016
   Purpose:  Project 2
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>    //Random
#include <ctime>      //Time
#include <string>     //String
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void start(char, int, int, int);
void movepool(char, int, int, int, int, int, int, int);
void enemy(string, int, int);
void bars(string, int, int, int);
void fight(string, int, int, int, int, int, int, int, int);
void fight2(string, int, int, int, int);
char cond(int , int , int , char, char);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char player; //class 
    int LP, AP, EP, nmy; //life points, Attack points, Energy points, enemy health
    int Move1, Move2, Move3, DAM; //move1, move2, move3, enemy damage
    int attack, att; //activation
    int efc; //effect
    string name;
    char y, z;
    //Input values
    cout<<"-T.B.C. simulator--"<<endl;
    cout<<"-Turn Based Combat-"<<endl;
    cout<<"-------------------"<<endl;
    cout<<"select class"<<endl;
    cout<<"f=fighter"<<endl;
    cout<<"t=thief"<<endl;
    cout<<"w=wizard"<<endl;
    start(player, LP, AP, EP);
    cout<<"-------------------"<<endl;
    enemy(name, nmy, DAM);
    cout<<"-------------------"<<endl;
    bars(name, LP, EP, nmy);
    cout<<"-------------------"<<endl;
    while (1){
        movepool(player, LP, AP, EP, efc, Move1, Move2, Move3);
        cout<<"-------------------"<<endl;
        fight(name, attack, LP, AP, EP, nmy, Move1, Move2, Move3);
        cout<<"-------------------"<<endl;
        fight2(name, att, DAM, LP, nmy);
        cout<<"-------------------"<<endl;
        bars(name, LP, EP, nmy);
        cout<<"-------------------"<<endl;
        cond(nmy, LP, EP, y, z);
        if(cond(nmy, LP, EP, y, z)=='y'){
                cout<<"You win"<<endl;
                break;
            }
            else if (cond(nmy, LP, EP, y, z)=='z'){
                cout<<"You lose"<<endl;
                break;
            }
    }
    
    //Exit Program
    return 0;
}

char cond(int nmy, int LP, int EP, char y, char z){
    if (nmy<=0)
        return 'y';
    
    else if (LP<=0)
        return 'z';
    
    else if (EP<=0)
        return 'z';
    return '/';
}

void bars(string name, int LP, int EP, int nmy){
    cout<<"you    "<<name<<endl;
    cout<<"LP: "<<LP<<"  LP: "<<nmy<<endl;
    cout<<"EP: "<<EP<<endl;
    cout<<endl;
}

void fight2(string name, int att, int DAM, int LP, int nmy){
    cout<<"The "<<name<<" attacks"<<endl;
    int x;
    srand(static_cast<unsigned int>(time(0)));
    x=(rand()%5)+1;
    if (x==1){
        att=DAM;
        if(att>=LP){
            LP=att-LP;    
        }
        else {
            LP=LP-att;
        }
        cout<<"The "<<name<<" attacked"<<endl;
        cout<<att<<" damage dealt"<<endl;
    }
    else if (x==2){
        att=DAM*2;
        if(att>=LP){
            LP=att-LP;    
        }
        else {
            LP=LP-att;
        }
        cout<<"The "<<name<<" used Maul"<<endl;
        cout<<att<<" damage dealt"<<endl;
    }
    else if (x==3){
        att=DAM*0;
        cout<<"The "<<name<<" missed"<<endl;
    }
    else if (x==4){
        att=(DAM*.5)+DAM;
        nmy=att+nmy;
        cout<<"The "<<name<<" healed itself"<<endl;
        cout<<att<<" damage dealt"<<endl;
    }
    else if (x==5){
        att=DAM*.5;
        if(att>=LP){
            LP=att-LP;    
        }
        else {
            LP=LP-att;
        }
        cout<<"The "<<name<<"'s attack grazed"<<endl;
        cout<<att<<" damage dealt"<<endl;
    }
}

void fight(string name, int attack, int LP, int AP, int EP, int nmy, int Move1, int Move2, int Move3){
    cout<<"your move"<<endl;    
    cin>>attack;
        if (attack==1){
            EP=EP-2;
            Move1;
            cout<<"you attack for "<<Move1<<" points of damage"<<endl;
            if(nmy>=Move1){
                nmy=nmy-Move1;
                cout<<"The "<<name<<" takes "<<nmy-Move1<<" points of damage"<<endl;
            }
            else {
                nmy=Move1-nmy;
                cout<<"The "<<name<<" takes "<<Move1-nmy<<" points of damage"<<endl;
            }
        }
        else if (attack==2){
            EP=EP-3;
            Move2;
            cout<<"you attack for "<<Move2<<" points of damage"<<endl;
            if(nmy>=Move2){
                nmy=nmy-Move2;
                cout<<"The "<<name<<" takes "<<nmy-Move2<<" points of damage"<<endl;
            }
            else {
                nmy=Move2-nmy;
                cout<<"The "<<name<<" takes "<<Move2-nmy<<" points of damage"<<endl;
            }
        }
        else if (attack==3){
            EP=EP+2;
            LP=Move3+LP;
            cout<<"you heal "<<Move3<<" points of health for "<<Move3+LP<<endl;
        }
        else if (attack>=4){
            cout<<"you attack for "<<AP<<" points of damage"<<endl;
            if(nmy>=AP){
                nmy=nmy-AP;
                cout<<"The "<<name<<" takes "<<nmy-AP<<" points of damage"<<endl;
            }
            else{
                nmy=AP-nmy;
                cout<<"The "<<name<<" takes "<<AP-nmy<<" points of damage"<<endl;
            }
        }
}

void enemy(string name, int nmy, int DAM){
    
    int b; //calculate enemy health
    int c; //calc enemy damage
    int d; //name
    
    srand(static_cast<unsigned int>(time(0)));
    b=(rand()%5)+1;
    nmy=b*10;
    string Mig1 ="young";
    string Mig2 ="small";
    string Mig3 ="common";
    string Mig4 ="giant";
    string Mig5 ="ancient";
    string Might;
    if (b==1){
        Might=Mig1;
    }
    else if (b==2){
        Might=Mig2;
    }
    else if (b==3){
        Might=Mig3;
    }
    else if (b==4){
        Might=Mig4;
    }
    else if (b==5){
        Might=Mig5;
    }
    srand(static_cast<unsigned int>(time(0)));
    c=(rand()%3)+1;
    DAM=c;
    string Pow1 ="lesser";
    string Pow2 ="Terrible";
    string Pow3 ="dangerous";
    string Pow4 ="malevolent";
    string Pow5 ="Demonic";
    string Power;
    if (c=1){
        Power=Pow1;
    }
    else if (c==2){
        Power=Pow2;
    }
    else if (c==3){
        Power=Pow3;
    }
    else if (c==4){
        Power=Pow4;
    }
    else if (c==5){
        Power=Pow5;
    }
    srand(static_cast<unsigned int>(time(0)));
    d=(rand()%5)+1;
    string Mon1 ="Slime";
    string Mon2 ="Goblin";
    string Mon3 ="Monster";
    string Mon4 ="Dragon";
    string Mon5 ="Evil";
    if (d==1){
        name=Mon1;
    }
    else if (d==2){
        name=Mon2;
    }
    else if (d==3){
        name=Mon3;
    }
    else if (d==4){
        name=Mon4;
    }
    else if (d==5){
        name=Mon5;
    }
    cout<<"prepare to fight a "<<Power<<" "<<Might<<" "<<name<<endl;
    cout<<"LP: "<<nmy<<endl;
    cout<<"AP: "<<DAM<<endl;
}

void movepool(char player, int LP, int AP, int EP, int efc, int Move1, int Move2, int Move3){
    int a;

    srand(static_cast<unsigned int>(time(0)));
    a=(rand()%3)+1;
    
    if(player=='f'){
       cout<<"1: Power attack"<<endl;
       Move1=AP*1.5;
       cout<<"2: Heavy Bash"<<endl;
       Move2=AP*LP;
       cout<<"3: 2nd Wind"<<endl;
       Move3=EP;
    }
    else if(player=='t'){
       cout<<"1: critical strike"<<endl;
       if (a=1){
           efc=1;
       }
       else if (a=2){
           efc=.5;
       }
       else if (a=3){
           efc=1.5;
       }
       Move1=AP*efc;
       cout<<"2: gamble"<<endl;
       if (a>1){
           Move2=AP*2;
       }
       else Move2=AP*0;
       
       cout<<"3: Steal"<<endl;
       
       if (a=1){
           Move3=4;
       }
       else if (a=2){
           Move3=-3;
       }
       else if (a=3){
           Move3=0;
       }
    }
    else if(player=='w'){
       cout<<"1: Fireball"<<endl;
       Move1=(AP*1.5);
       cout<<"2: Shock"<<endl;
       Move2=(AP*EP);
       cout<<"3: Heal"<<endl;
       Move3=3;
    }
    cout<<"4: Basic attack"<<endl;
}

void start(char player, int LP, int AP, int EP){
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
    //base stats = 20
    if(player=='f'){
        cout<<"you're the fighter"<<endl;
        LP=10;
        AP=5;
        EP=5;
    }
    else if(player=='t'){
        cout<<"you're the thief"<<endl;
        LP=7;
        AP=7;
        EP=6;
    }
    else if(player=='w'){
        cout<<"you're the wizard"<<endl;
        LP=5;
        AP=9;
        EP=6;
    }
    
}

