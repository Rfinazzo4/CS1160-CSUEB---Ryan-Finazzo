/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on July 11, 2016, 12:27 PM
 * Sum of Numbers
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
    int Pint;
    int number;
    int sum;
    int display=1;
    // Input data
    cout<<"Enter a Positive Integer Value"<<endl;
    cin>>number;
    if (number%2==0){
        while (display<=number){
            cout<<display<<"+";
            sum=sum+display;
            display++;
        }}
    else   {
            cout<<"Enter a Even Number";
    }    
            
    // Process data
    
    // Output data
    cout<<endl<<"The sum of numbers is = "<<sum<<endl;
    
    
    // Exit stage Right!

    return 0;
}