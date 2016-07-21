/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on June 23, 2016, 12:55 PM
 * Killer Soda Calculation 
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
    float msmass=35; //35 grams is the mass of the mouse
    float mskill=5; //5 grams of sweetener kills the mouse
    float hmmass=45400; //grams of the human
    float mssoda=350; //350 grams is the mass of the can content
    float conc=1e-3; //1/10 of 1% concentration in soda of sweetener
    int ncans; // Number of cans to kill the human
    // input data
    
    
    ncans=hmmass*mskill/(msmass*mssoda*conc);
    
    // output data
    cout<<"The number of that a dieter with mass = "<<hmmass<<"g"<<endl;
    cout<<" may consume is = "<<ncans;
    
    // Exit stage Right!

    
    return 0;
}

