/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on June 28, 2016, 12:27 PM
 * Independent Ifs
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
    grade='F'; //Default Value
    if (score<=120&&score>=90)grade='A';
    if (score<=90&&score>=80)grade='B';
    if (score<=80&&score>=70)grade='C';
    if (score<=70&&score>=60)grade='D';
    // output data
    cout<< "Your grade is a(n) "<<grade<<endl;
    
    // Exit stage Right!
    
    return 0;
}

