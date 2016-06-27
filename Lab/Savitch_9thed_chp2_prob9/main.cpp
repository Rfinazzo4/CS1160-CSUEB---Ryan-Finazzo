/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on June 20, 2016, 12:27 PM
 * Sum of Evens/Odds
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
    //Declare variables,doubles
    int sumall=0, sumeven=0, sumodd=0, sumpos=0, sumneg=0;
    int x; //NUmber of input 10 times
    // input data
    cout<< "Imput an integer"<<endl;
    cin>>x;
    // Process data
            sumall+=x;
    if(x%2==0)sumeven+=x;
            
    else sumodd+=x;
            
    sumpos+=x>0?x:0;
            sumneg+=x<0?x:0;
            // input data
    cout<< "Imput an integer"<<endl;
    cin>>x;
    // Process data
            sumall+=x;
    if(x%2==0)sumeven+=x;
            
    else sumodd+=x;
            
    sumpos+=x>0?x:0;
            sumneg+=x<0?x:0;
            // input data
    cout<< "Imput an integer"<<endl;
    cin>>x;
    // Process data
            sumall+=x;
    if(x%2==0)sumeven+=x;
            
    else sumodd+=x;
            
    sumpos+=x>0?x:0;
            sumneg+=x<0?x:0;
            // input data
    cout<< "Imput an integer"<<endl;
    cin>>x;
    // Process data
            sumall+=x;
    if(x%2==0)sumeven+=x;
            
    else sumodd+=x;
            
    sumpos+=x>0?x:0;
            sumneg+=x<0?x:0;
            // input data
    cout<< "Imput an integer"<<endl;
    cin>>x;
    // Process data
            sumall+=x;
    if(x%2==0)sumeven+=x;
            
    else sumodd+=x;
            
    sumpos+=x>0?x:0;
            sumneg+=x<0?x:0;
            // input data
    cout<< "Imput an integer"<<endl;
    cin>>x;
    // Process data
            sumall+=x;
    if(x%2==0)sumeven+=x;
            
    else sumodd+=x;
            
    sumpos+=x>0?x:0;
            sumneg+=x<0?x:0;
            // input data
    cout<< "Imput an integer"<<endl;
    cin>>x;
    // Process data
            sumall+=x;
    if(x%2==0)sumeven+=x;
            
    else sumodd+=x;
            
    sumpos+=x>0?x:0;
            sumneg+=x<0?x:0;
            // input data
    cout<< "Imput an integer"<<endl;
    cin>>x;
    // Process data
            sumall+=x;
    if(x%2==0)sumeven+=x;
            
    else sumodd+=x;
            
    sumpos+=x>0?x:0;
            sumneg+=x<0?x:0;
            // input data
    cout<< "Imput an integer"<<endl;
    cin>>x;
    // Process data
            sumall+=x;
    if(x%2==0)sumeven+=x;
            
    else sumodd+=x;
            
    sumpos+=x>0?x:0;
            sumneg+=x<0?x:0;
            // input data
    cout<< "Imput an integer"<<endl;
    cin>>x;
    // Process data
            sumall+=x;
    if(x%2==0)sumeven+=x;
            
    else sumodd+=x;
            
    sumpos+=x>0?x:0;
            sumneg+=x<0?x:0;
    // Output data
            cout<<"Sum All      = "<<sumall<<endl;
            cout<<"Sum Even     = "<<sumeven<<endl;
            cout<<"Sum Odd      = "<<sumodd<<endl;
            cout<<"Sum Positive = "<<sumpos<<endl;
            cout<<"Sum Negative = "<<sumneg<<endl;
    // Exit stage Right!  
    return 0;
}

