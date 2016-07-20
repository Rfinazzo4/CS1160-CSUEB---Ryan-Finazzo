/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on July 20, 2016, 1:30 PM
 * Lowest Score Drop
 */
//System Libraries 
//Input output stream library
#include <iostream> 
using namespace std; //iostream uses standard namespace

// User libraries

// Global constants

// Function prototypes
void score(int &);
void calcA();
int lowest();
// Execution begins here!
int main(int argc, char** argv) {
    //Introduce the program
    cout<<"This program calculates the average of a group of test scores."<<endl;
    cout<<"Then drops the lowest score!!!"<<endl;
    //Declare variables,doubles
    int score1, score2, score3, score4, score5;
    int refvar;
    
    // input data
    cout<<"Enter the score for the first test."<<endl;
    score(refvar);
    refvar=score1;
    cout<<score1;
    cout<<"Enter the score for the second test."<<endl;
    score(refvar);
    refvar=score2;
         cout<<score2;   
    cout<<"Enter the score for the third test."<<endl;
    score(refvar);
    refvar=score3;
    
    cout<<"Enter the score for the fourth test."<<endl;
    score(refvar);
    refvar=score4;
    cout<<"Enter the score for the fifth test."<<endl;
    score(refvar);
    refvar=score5;
    
    // output data
    
    // Exit stage Right!
    
    return 0;
}

void score(int &scor){
    cin>>scor;
}
void calcA(){
    
}
int lowest(){
    
}