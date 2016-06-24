/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on June 21, 2016, 1:07 PM
 * Purpose: Circuit Board Selling Price
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
    float profit= 0.40, //40 percent profit
          cost= 12.67, // cost in $s
          selprce; // Selling price in $s
    
    // input data
    selprce = cost *(1+profit);
    int pennies=selprce*100+0.5; // shift into pennies and a half to round up
    selprce=pennies/100.0f;
            
    // output data
    cout << "The cost of circuit board to the company = $" <<cost<<endl;
    cout << "Profit desired on circuit board = $"<<profit<< endl;
    cout << "The Selling price = $"<<selprce<< endl;
    // Exit stage Right!
    
    return 0;
}

