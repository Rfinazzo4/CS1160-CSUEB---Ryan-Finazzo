/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on July 11, 2016, 12:27 PM
 * Distance Traveled 
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
    float mph,Dtvld; //MPH, Distance Traveled
    float Thrs, hrs; //Toal Hours, Hours
    // Input data
    cout<<"How fast is the car going (Mph)?"<<endl;
    cin>>mph;
    cout<<"For how many hours was the car driving"<<endl;
    cin>>Thrs;
    
    // Process data
    cout<<"Miles    Distance Traveled"<<endl;
    cout<<"----------------------------"<<endl;
    hrs=1;
    Dtvld=mph;
    while (hrs<=Thrs){
        cout<<hrs<<"        "<<Dtvld<<endl;
        hrs=hrs+1;
        Dtvld=hrs*mph;
        
    }
            
    
    // Output data
    
    // Exit stage Right!

    return 0;
}