/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on June 30, 2016, 12:27 PM
 * Black Jack Hand Value
 */
//System Libraries 
//Input output stream library
#include <iostream> 
using namespace std; //iostream uses standard namespace

// User libraries

// Global constants

// Function prototypes

// Execution begins here!
int main(int argc, char** argv) {
    //Declare variables,doubles
    char card;
    int value=0,excess=0;
    // input data
    cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
    cin>>card;
    
    // output data
    switch (card){
        case 'K':
        case 'Q':
        case 'J':
        case 'T':value + 10; break;
        case '9':
        case '8':  
        case '7':
        case '6':
        case '5':
        case '4':
        case '3':
        case '2':value+=(card-48);break;
        case 'A':value+=11;
    }
    //Output the value
    cout<<"The value of the hand at this point = "<<value<<endl;
    
    
    cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
    cin>>card;
    
    // output data
    switch (card){
        case 'K':
        case 'Q':
        case 'J':
        case 'T':value + 10; break;
        case '9':
        case '8':  
        case '7':
        case '6':
        case '5':
        case '4':
        case '3':
        case '2':value+=(card-48);break;
        case 'A':value+=11;
    }
    if(value>21)value-=excess;
    
    
      cout<<"The value of the hand at this point = "<<value<<endl;
    
    // Exit stage Right!

    
    return 0;
}


