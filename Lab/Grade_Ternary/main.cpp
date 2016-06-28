/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on June 28, 2016, 12:27 PM
 * Ternary Operator
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
    if (score>=90)grade = 'A';
    else if (score>= 80) grade ='B';
    else if (score>= 70) grade ='C';
    else if (score>= 60) grade ='D';
    else  grade ='F';
    // output data
    cout<< "Your grade is a(n) "<<grade<<endl;
    
    // Exit stage Right!
    
    return 0;
}

