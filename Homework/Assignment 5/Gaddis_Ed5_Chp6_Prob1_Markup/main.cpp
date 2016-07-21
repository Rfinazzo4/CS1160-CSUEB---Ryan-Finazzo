/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on July 19, 2016, 1:00 PM
 * Price Markup
 */
//System Libraries 
//Input output stream library
#include <iostream> 
using namespace std; //iostream uses standard namespace

// User libraries

// Global constants

// Function prototypes
float calcR(float, float, float); //Calculating retail 
// Execution begins here!
int main(int argc, char** argv) {
    //Declare variables,doubles
    float wholeS; //Whole sale cost
    float mrkup; //Mark up Percentage
    float retailP; //Retail Price
    // input data
    cout<<"This program calculates an items retail price!"<<endl;
    cout<<"Enter an items wholesale price."<<endl;
    cin>>wholeS;
    while (wholeS<0){
      cout<<"The Whole sale price can not be lower than zero"<<endl;
      cout<<"Enter the items Whole sale price."<<endl;
    cin>>wholeS;
    }
    cout<<"Enter the items mark up percentage."<<endl;
    cin>>mrkup;
    while (mrkup<0){
      cout<<"The Mark up percentage can not be lower than zero"<<endl;
      cout<<"Enter the items mark up percentage."<<endl;
    cin>>mrkup;
    }
    // output data
    calcR(wholeS, mrkup, retailP);
    // Exit stage Right!

    return 0;
}

float calcR(float whS, float mrkP, float rtailP){
    rtailP=whS+(whS*(mrkP/100));
    cout<<"The retail price is = $"<<rtailP<<endl;
}