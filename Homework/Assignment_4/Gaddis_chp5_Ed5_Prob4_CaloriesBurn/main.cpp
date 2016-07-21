/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on July 11, 2016, 12:27 PM
 * Calories Burned
 */

//System Libraries 

//Input output stream library

#include <iostream>
#include <iomanip>
using namespace std; //iostream uses standard namespace

// User libraries

// Global constants

// Function prototypes

// Execution begins here!

int main(int argc, char** argv) {
    
    // Declare variables,doubles
    float time,calB,tcalB; //time in minutes, calories burned,total calories burned
    // Input data
    time=10;
    calB=3.9f; //amount of calories burned in a min of running
    // Process data
    tcalB=(time*calB);
    
    
    while (time <=30){
        cout<<"For "<<time<<" minutes on a treamill you burn "<<tcalB<<" calories!"<<endl;
       time+=5;
        tcalB=(time*calB);
        
    }
    
    // Output data
    
    
    // Exit stage Right!

    return 0;
}