/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on June 20, 2016, 12:27 PM
 * Rock Paper Siscores
 */
//System Libraries 
//Input output stream library
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; //iostream uses standard namespace

// User libraries

// Global constants

// Function prototypes

// Execution begins here!
int main(int argc, char** argv) {
    //set random number c
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables,doubles
    char player, compter;
    int win=0, loss=0, tie=0;
    //play untill user wants to stop
    do{
    // input data
        cout<<"RPS Game, What is your move [R P S]"<<endl;
        cin>>player;
        
    //process the play
        do{
            compter=rand()%4+80;
        }while(compter=='Q');
        cout<<"Player = "<<player<<endl;
        cout<<"Computer = "<<compter<<endl;
        switch (player){
            case 'P': {
                if (compter=='P')cout<<"Tie so far = "<<++tie<<endl;
                else if (compter=='R')cout<<"Losses so far = "<<++loss<<endl;
                else cout<<"Wins so far = "<<++win<<endl;break;
            }
            case 'R':{
                if (compter=='P')cout<<"Wins so far = "<<++win<<endl;
                else if (compter=='R')cout<<"Tie so far = "<<++tie<<endl;
                else cout<<"Losses so far = "<<++loss<<endl;;break;
            }
                case 'S':{
                if (compter=='P')cout<<"Losses so far = "<<++loss<<endl;
                else if (compter=='R')cout<<"Wins so far = "<<++win<<endl;
                else cout<<"Tie so far = "<<++tie<<endl;
        }
        }
        
    // output data
}while (player=='P'||player=='R'||player=='S');
cout<<"Total wins = "<<win<<endl;
cout<<"Total losses = "<<loss<<endl;
cout<<"Total ties = "<<tie<<endl;
    // Exit stage Right!

    
    
    
    
    
    
    
    return 0;
}

