/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on July 20, 2016, 1:17 PM
 * Kenetic Energy
 */
//System Libraries 
//Input output stream library
#include <iostream> 
using namespace std; //iostream uses standard namespace

// User libraries

// Global constants

// Function prototypes
float KinEn();
// Execution begins here!
int main(int argc, char** argv) {
    //Introduce the program
    cout<<"This Program calculates the Kinetic Energy of an object."<<endl;
    //Declare variables,doubles
    float Kenergy; // The Kinetic Energy
    // input data/Process the data
    Kenergy=KinEn();
    // output data
    cout<<"The Kinetic Energy of the object = "<<Kenergy<<endl;
    // Exit stage Right!

    return 0;
}

float KinEn(){
    float KE, m, v;
    cout<<"To calculate Kinetic Energy we need the mass and velocity of the object."<<endl;
    cout<<"Please enter the mass of the object (Kg)."<<endl;
    cin>>m;
    cout<<"Please enter the velocity of the object (m/s)."<<endl;
    cin>>v;
    KE=0.5f*(m*(v*v));
    return KE;
}