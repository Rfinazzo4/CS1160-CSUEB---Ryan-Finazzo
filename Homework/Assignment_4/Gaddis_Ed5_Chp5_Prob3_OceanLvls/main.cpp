/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on July 11, 2016, 8:27 PM
 * Ocean Levels
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
    float nMil=1.5f; //Number of miliimeters the ocean rises /year
    int year=1;
    // Input data
    cout<<"Year - Mm Higher"<<endl;
    // Process data
    while (year<=25){
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<year<<"   "<<nMil<<endl;
        year++;
        nMil+=1.5f;
    }
    // Output data
    
    // Exit stage Right!

    return 0;
}