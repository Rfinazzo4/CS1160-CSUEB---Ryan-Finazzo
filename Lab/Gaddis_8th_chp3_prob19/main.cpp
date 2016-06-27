/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on June 27, 2016, 1:27 PM
 * Payments
 */
//System Libraries 
//Input output stream library
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; //iostream uses standard namespace

// User libraries

// Global constants

// Function prototypes

// Execution begins here!
int main(int argc, char** argv) {
    //Declare variables,doubles
    float loanAmt, intRate, nPymnts;//Inputs to the problem
    float mPymnt, totPaid, intPaid; // Outputs to the problem
    // input data
    cout<<"Loan Calculator for Equal Monthly Payments"<<endl;
    cout<<"Input all 3 at once"<<endl;
    cout<<"Loan Amt $'s, Interest Rate %, Number of Monthly Payments"<<endl;
    cin>>loanAmt>>intRate>>nPymnts;
    // Process data
   
    float temp=exp(nPymnts*log(1+intRate));
    mPymnt = intRate*temp*loanAmt/(temp-1);
    totPaid=mPymnt*nPymnts;
    intPaid=totPaid-loanAmt;
    
    // Output data
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Monthly Payment = $"<<setw(1)<<mPymnt<<endl;
    cout<<"Total Paid = $"<<setw(1)<<totPaid<<endl;
    cout<<"Interest Paid = $"<<setw(1)<<intPaid<<endl;
    
    // Exit stage Right!

  
    return 0;
}

