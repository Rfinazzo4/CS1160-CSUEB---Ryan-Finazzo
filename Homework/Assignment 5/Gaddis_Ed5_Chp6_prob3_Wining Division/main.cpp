/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on June 20, 2016, 12:27 PM
 * First Program
 */
//System Libraries 
//Input output stream library
#include <iostream> 
using namespace std; //iostream uses standard namespace

// User libraries

// Global constants

// Function prototypes
float getSale();
float findHi(float, float, float, float);
// Execution begins here!
int main(int argc, char** argv) {
    //Declare variables,doubles
    float NEsale, NWsale, SEsale, SWsale;
    // input data
    cout<<"This program calculates which division of a company had the\n";
    cout<<"highest sale for the quarter"<<endl;
    //Process the data
    //Northeast
    cout<<"Northeast Division"<<endl;
    NEsale= getSale();
    
    //Northwest
    cout<<endl<<"Nortwest Division"<<endl;
    NWsale= getSale();
    
    //Southeast
    cout<<endl<<"Southeast Division"<<endl;
    SEsale= getSale();
    
    //Southwest
    cout<<endl<<"Southwest Division"<<endl;
    SWsale= getSale();
    // output data
    findHi (NEsale, NWsale, SWsale, SEsale);
    // Exit stage Right
    
    return 0;
}

float getSale(){
    float sale;
    cout<<"Enter the amount of sales for the quarter."<<endl;
    cin>>sale;
    return sale;
}

float findHi(float NEastS, float NWestS, float SEastS, float SWestS ){
    if (NEastS>NWestS && NEastS>SEastS && NEastS>SWestS){
        cout<<"Northeast is the winning division with $"<<NEastS<<" in revenue!"<<endl;
    }
    else if(NWestS>NEastS && NWestS>SEastS && NWestS>SWestS){
        cout<<"Northwest is the winning division with $"<<NWestS<<" in revenue!"<<endl;
    }
    else if(SEastS>NEastS && SEastS>NWestS && SEastS>SWestS){
        cout<<"Southeast is the winning division with $"<<SEastS<<" in revenue!"<<endl;
    }
    else {
        cout<<"Southeast is the winning division with $"<<SWestS<<" in revenue!"<<endl;
    }
}