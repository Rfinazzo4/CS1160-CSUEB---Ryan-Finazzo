/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on June 30, 2016, 12:27 PM
 * Convert a number to Roman Numerals
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
    unsigned short x; //Number to convert
    unsigned char n1000s, n100s, n10s, n1s; //Strip of the digits
    
    // input data
    cout<<"Input a number from 1000-3000 to convert to Roman Numerals"<<endl;
    cin>>x;
    
    //Process data
    if(x<1000 || x>3000)cout<<"Number is too high or too small!!!";
    
    
    
    // output data
    //Thousands
    
    n1000s=(x-x%1000)/1000;
    switch(n1000s){
        case 3:cout<<"M";
        case 2:cout<<"M";
        case 1:cout<<"M";
    }
    
    
    //Hundreds
    x-=n1000s*1000;
    n100s=(x-x%100)/100;
    switch(n100s){
        case 9:cout<<"CM";break;
        case 8:cout<<"DCCC";break;
        case 7:cout<<"DCC";break;
        case 6:cout<<"DC";break;
        case 5:cout<<"D";break;      
        case 4:cout<<"CD";break;
        case 3:cout<<"C";
        case 2:cout<<"C";
        case 1:cout<<"C";
    }
    
    //tens position
    x-=n100s*100;
    n10s=(x-x%10)/10;
    switch(n10s){
        case 9:cout<<"XC";break;
        case 8:cout<<"LXXX";break;
        case 7:cout<<"LXX";break;
        case 6:cout<<"LX";break;
        case 5:cout<<"L";break;      
        case 4:cout<<"XL";break;
        case 3:cout<<"X";
        case 2:cout<<"X";
        case 1:cout<<"X";
    }
    //ONes
    x-=n10s*10;
    n1s=(x-x%1)/1;
    switch(n1s){
        case 9:cout<<"IX";break;
        case 8:cout<<"VIII";break;
        case 7:cout<<"VII";break;
        case 6:cout<<"VI";break;
        case 5:cout<<"V";break;      
        case 4:cout<<"IV";break;
        case 3:cout<<"I";
        case 2:cout<<"I";
        case 1:cout<<"I";
    }
    
    
    // Exit stageRight!

    
    
    
    
    
    
    
    return 0;
}

