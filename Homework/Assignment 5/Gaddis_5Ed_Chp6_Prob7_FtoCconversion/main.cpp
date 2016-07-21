/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on July 12, 2016, 12:27 PM
 * Fahrenheit to Celsius Converter 
 */
//System Libraries 
//Input output stream library
#include <iostream> 
using namespace std; //iostream uses standard namespace

// User libraries

// Global constants

// Function prototypes
float convert(int);
// Execution begins here!
int main(int argc, char** argv) {
    cout<<"This program converts Fahrenheit to Celsius"<<endl;
    //Declare variables,doubles
    int fahren;
    // input data

    //Process/Output the data 
    for(fahren=1; fahren<=20;fahren++){
        cout<<fahren<<" Fahrenheit = ";
        convert(fahren);
                
    }
    // Exit stage Right!

    return 0;
}

float convert (int far){
    float cel;
    cel=(0.55f)*(far-32);
    cout<<cel<<" Celsius"<<endl;
}


