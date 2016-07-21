/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on July 21, 2016, 1:11 PM
 * Chip and Salsa
 */
//System Libraries 
#include <iostream> //Input output stream library
#include <string> //String 
using namespace std; //iostream uses standard namespace

// User libraries

// Global constants

// Function prototypes

// Execution begins here!
int main(int argc, char** argv) {
    // Introduce the program
    cout<<"This Program keeps track of the sales of different types of Salsa"<<endl;
    // Declare variables,doubles
    const int SIZE=5;
    string salsa[SIZE]={"Mild","Medium","Sweet","Hot","Zesty"};
    int jars[SIZE];
    int total; //total amount of jars sold
    int high, low; //highest and lowest selling types
    // Input data
    cout<<"Enter the amount of "<<salsa[0]<<" salsa Jars sold in the past month."<<endl;
    cin>>jars[0];
    while (jars[0]<0){
        cout<<"The amount of jars sold can not be negative."<<endl;
        cout<<"Try again."<<endl;
        cin>>jars[0];
    }
    cout<<"Enter the amount of "<<salsa[1]<<" salsa Jars sold in the past month."<<endl;
    cin>>jars[1];
    while (jars[1]<0){
        cout<<"The amount of jars sold can not be negative."<<endl;
        cout<<"Try again."<<endl;
        cin>>jars[1];
    }
    cout<<"Enter the amount of "<<salsa[2]<<" salsa Jars sold in the past month."<<endl;
    cin>>jars[2];
    while (jars[2]<0){
        cout<<"The amount of jars sold can not be negative."<<endl;
        cout<<"Try again."<<endl;
        cin>>jars[2];
    }
    cout<<"Enter the amount of "<<salsa[3]<<" salsa Jars sold in the past month."<<endl;
    cin>>jars[3];
    while (jars[3]<0){
        cout<<"The amount of jars sold can not be negative."<<endl;
        cout<<"Try again."<<endl;
        cin>>jars[3];
    }
    cout<<"Enter the amount of "<<salsa[4]<<" salsa Jars sold in the past month."<<endl;
    cin>>jars[4];
    while (jars[4]<0){
        cout<<"The amount of jars sold can not be negative."<<endl;
        cout<<"Try again."<<endl;
        cin>>jars[4];
    }
    
    // Process data
    total=jars[0];
    for (int i=1; i<SIZE; i++){
        total+=jars[i];
    }
    
    high=jars[0];
    low=jars[0];
    for (int i=1; i<SIZE; i++){
        if (jars[i]<low){
            low=jars[i];
        }
        if (jars[i]>high){
            high=jars[i];
        }
    }
    
    cout<<endl<<endl<<salsa[0]<<" salsa sold "<<jars[0]<<" jars"<<endl;
    cout<<salsa[1]<<" salsa sold "<<jars[1]<<" jars"<<endl;
    cout<<salsa[2]<<" salsa sold "<<jars[2]<<" jars"<<endl;
    cout<<salsa[3]<<" salsa sold "<<jars[3]<<" jars"<<endl;
    cout<<salsa[4]<<" salsa sold "<<jars[4]<<" jars"<<endl;
    cout<<"The total sales = "<<total<<endl;
    
    if (jars[0]==high){
        cout<<"The highest selling type was "<<salsa[0]<<endl;
    }
    else if (jars[1]==high){
        cout<<"The highest selling type was "<<salsa[1]<<endl;
    }
    else if (jars[2]==high){
        cout<<"The highest selling type was "<<salsa[2]<<endl;
    }
    else if (jars[3]==high){
        cout<<"The highest selling type was "<<salsa[3]<<endl;
    }
    else {
        cout<<"The highest selling type was "<<salsa[4]<<endl;
    }
    if (jars[0]==low){
        cout<<"The lowest selling type was "<<salsa[0]<<endl;
    }
    else if (jars[1]==low){
        cout<<"The lowest selling type was "<<salsa[1]<<endl;
    }
    else if (jars[2]==low){
        cout<<"The lowest selling type was "<<salsa[2]<<endl;
    }
    else if (jars[3]==low){
        cout<<"The lowest selling type was "<<salsa[3]<<endl;
    }
    else {
        cout<<"The lowest selling type was "<<salsa[4]<<endl;
    }
    // Output data
    
    // Exit stage Right!

    return 0;
}

