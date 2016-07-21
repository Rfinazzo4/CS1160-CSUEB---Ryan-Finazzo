/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on June 10, 2016, 12:27 PM
 * Average Rainfall
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
    float Yrain,Min;
    float Mrain;
    float month, year;
    // Input data
            cout<<"How many years of rainfall?"<<endl;
    cin>>Yrain;
    Mrain=0;
    for (year=1; year<=Yrain; year++)
    { 
        for (month=1; month<=12; ){
            cout<<"Enter the amount of rainfall in inches for all months (12)"<<endl;
            cin>>Min;
               Mrain=Mrain+Min;
               month++;
        }
    }
    // Output data
    
    
    // Exit stage Right!

    return 0;
}