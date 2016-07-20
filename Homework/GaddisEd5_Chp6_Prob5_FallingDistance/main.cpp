/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on June 20, 2016, 12:27 PM
 * 
 */
//System Libraries 
//Input output stream library
#include <iostream> 
using namespace std; //iostream uses standard namespace

// User libraries

// Global constants

// Function prototypes
float fallD(int tm);
// Execution begins here!
int main(int argc, char** argv) {
    //Introduce the program
    cout<<"This program calculates the Falling distance of an object."<<endl;
    //Declare variables,doubles

    float dstance; 
    // input data
    
    for (int time=1; time<=10;time++){
        cout<<"For time = "<<time<<endl;
        dstance=fallD(time);
        cout<<"Distance = "<<dstance<<"m"<<endl;
    }
        
    // output data
    
    // Exit stage Right!
  
    return 0;
}

float fallD(int tm){
    float d;
    d = 0.5f*(9.8*(tm*tm));
    return d;
}
    