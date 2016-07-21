/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on June 20, 2016, 12:27 PM
 * First Program
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
    int x1=28,x2=32,x3=37,x4=24,x5=33; //values to average
    float avg;
    // input data
   
    //Process that data
    avg=(x1+x2+x3+x4+x5)/5;
    
    // output data
    cout<<"The Average = "<< avg<<endl;

    
    // Exit stage Right!
    
    return 0;
}

