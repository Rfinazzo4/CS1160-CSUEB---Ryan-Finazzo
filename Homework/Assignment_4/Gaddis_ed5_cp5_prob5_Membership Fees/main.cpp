/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on June 20, 2016, 12:27 PM
 * Membership Fees Increase 
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
    
    // Declare variables,doubles
    float MemFee=2500; // in $
    float rate=.04;//Increase of fees
    float Incrse;
    int year=1; //The year it is
    // Input data
    cout<<" Your Membership Fee Breakdown"<<endl;
    cout<<"-------------------------------"<<endl;        
    while (year<=6){
        cout<<year<<"     "<<MemFee<<endl;
        Incrse=MemFee*rate;
        MemFee+=Incrse;
        year++;
        
    }
    // Process data
    
    // Output data
    
    
    // Exit stage Right!

    return 0;
}