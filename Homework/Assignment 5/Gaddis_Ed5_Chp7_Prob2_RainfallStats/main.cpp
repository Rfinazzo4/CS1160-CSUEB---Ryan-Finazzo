/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on July 21, 2016, 12:51 PM
 * Rainfall Statistics
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
    cout<<"This program calculates statistics for 12 months of rain."<<endl;
    // Declare variables,doubles
    const int SIZE=12;
    float month[12];
    float total; //Total Rainfall
    float avg;
    float lowest, highest;
    
    // Input data
    cout<<"Enter the amount of rainfall for 12 months."<<endl;
    cout<<"January"<<endl;
    cin>>month[0];
    cout<<"February"<<endl;
    cin>>month[1];
    cout<<"March"<<endl;
    cin>>month[2];
    cout<<"April"<<endl;
    cin>>month[3];
    cout<<"May"<<endl;
    cin>>month[4];
    cout<<"June"<<endl;
    cin>>month[5];
    cout<<"July"<<endl;
    cin>>month[6];
    cout<<"August"<<endl;
    cin>>month[7];
    cout<<"September"<<endl;
    cin>>month[8];
    cout<<"October"<<endl;
    cin>>month[9];
    cout<<"November"<<endl;
    cin>>month[10];
    cout<<"December"<<endl;
    cin>>month[11];
    // Process data
    total=month[0];
    for (int i=1;i<SIZE;i++){
        total+=month[i];}
    
    avg=total/12;
    
    highest=month[0];
    lowest=month[0];
    for (int i=1;i<SIZE;i++){
        if (month[i]<lowest){
            lowest=month[i];
        }    
        if (month[i]>highest){
            highest=month[i];
        }    
    }
    // Output data
    cout<<"\n\nThe total amount of rainfall = "<<total<<endl;
    cout<<"The average amount of rainfall = "<<avg<<endl;
    cout<<"The lowest amount of rainfall for a month of the year was "<<lowest<<endl;
    cout<<"The highest amount of rainfall for a month of the year was "<<highest<<endl;
    // Exit stage Right!

    return 0;
}

