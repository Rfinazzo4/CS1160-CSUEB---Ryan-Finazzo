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
int NmAcc();
int lowest(int n, int s, int e, int w, int c);

// Execution begins here!
int main(int argc, char** argv) {
    //Declare variables,doubles
    int north, south, east, west, central;
    
    // input data
    cout<<"This Program determines which region had the fewest reported accidents."<<endl;
    cout<<"Enter the number of accidents per region."<<endl;
    
    cout<<"-------North-------"<<endl;
    north=NmAcc();
    
    cout<<"-------South-------"<<endl;
    south=NmAcc();
    
    cout<<"-------East-------"<<endl;
    east=NmAcc();
    
    cout<<"-------West-------"<<endl;
    west=NmAcc();
    
    cout<<"-------Central-------"<<endl;
    central=NmAcc();
    // output data
    lowest(north,south,east,west,central);
    // Exit stage Right!

    return 0;
}

int NmAcc(){
    int Nacc;
    cin>>Nacc;
    while (Nacc<0){
        cout<<"The number can not be negative."<<endl;
        cout<<"Try again."<<endl;
        cin>>Nacc;
    }
    return Nacc;
}
int lowest(int n, int s, int e, int w, int c){
    if (n<s && n<e && n<w && n<c){
        cout<<"The safest place to drive is the Northern region with only "<<n<<" accidents!"<<endl;
    }
    else if (s<n && s<e && s<w && s<c){
        cout<<"The safest place to drive is the Southern region with only "<<s<<" accidents!"<<endl;
    }
    else if (e<s && e<n && e<w && e<c){
        cout<<"The safest place to drive is the Eastern region with only "<<e<<" accidents!"<<endl;
    }
    else if (w<s && w<e && w<n && w<c){
        cout<<"The safest place to drive is the Western region with only "<<w<<" accidents!"<<endl;
    }
    else {
        cout<<"The safest place to drive is the Central region with only "<<c<<" accidents!"<<endl;
    }
}
