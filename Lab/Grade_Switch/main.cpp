/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on June 28, 2016, 1:19 PM
 * Switch
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
    unsigned int score; //Input 0-100
    char grade; // A,B,C,D,F
    
    // input data
    cout<<"Input the score [0-100]; Output will be the grade."<<endl;
    cin>>score;
    // Process data
    switch (score/10){
    case 10:
    case 9:  grade = 'A';break;  
    case 8: grade = 'B';break;
    case 7: grade= 'C';break;
    case 6: grade = 'D';break;
    default: grade = 'F';
    }
    // output data
    cout<< "Your grade is a(n) "<<grade<<endl;
    
    // Exit stage Right!
    
    return 0;
}

