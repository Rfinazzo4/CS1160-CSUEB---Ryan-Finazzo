/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on June 20, 2016, 12:27 PM
 * First Program
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
    float daysWrk;//Days worked
    float dayc; //current day being used
    float Fsalary;//Final salary
    float Tsalary;//temporary salary
    // Input data
    cout<<"You will earn 1 penny a day, and everyday it will double"<<endl;
    cout<<"How many days did you work this year?"<<endl;
    cin>>daysWrk;
    while(daysWrk<2)
    {
        cout<<"Not a valid answer, must be higher than 1"<<endl;
        daysWrk++;
    }
    
    // Process data
    Tsalary=0.01;
    dayc=1;
    cout<<"Day --------- Income"<<endl;
    while (dayc<=daysWrk){
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<dayc<<"           $"<<Tsalary<<endl;
        dayc++;
        Tsalary=Tsalary+Tsalary;
    }
    
    // Output data
    
    // Exit stage Right!

    return 0;
}