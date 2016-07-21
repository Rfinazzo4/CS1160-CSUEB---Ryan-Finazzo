/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on July 21, 2016, 12:20 PM
 * Largest/Smallest Array
 */
//System Libraries 
#include <iostream> //Input output stream library
using namespace std; //iostream uses standard namespace

// User libraries

// Global constants

// Function prototypes

// Execution begins here!
int main(int argc, char** argv) {
    // Introduce the program
    cout<<"This program finds the largest and smallest values of a set of number"<<endl;
    // Declare variables,doubles
    const int SIZE=10;
    int array[SIZE];
    int small, large;
    // Input data
    cout<<"Enter 10 numbers."<<endl;
    cin>>array[0];
    cin>>array[1];
    cin>>array[2];
    cin>>array[3];
    cin>>array[4];
    cin>>array[5];
    cin>>array[6];
    cin>>array[7];
    cin>>array[8];
    cin>>array[9];     
    
    // Process data
    small=array[0];
    large=array[0];
    for (int i=1;i<SIZE;i++){
        
        if (array[i]<small){
            small = array[i];
        }
        if (array[i]>large){
            large=array[i];
        }
    }
    // Output data
    cout<<"The largest number = "<<large<<endl;
    cout<<"The smallest number = "<<small<<endl;
    // Exit stage Right!

    return 0;
}

