/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on July 21, 2016, 12:27 PM
 * Monkey Business
 */
//System Libraries 
#include <iostream> //Input output stream library
using namespace std; //iostream uses standard namespace

// User libraries

// Global constants

// Function prototypes

// Execution begins here!
int main(int argc, char** argv) {
    // Introduce the program
    cout<<"This program keeps track of how much food 3 monkeys eat"<<endl;
    // Declare variables,doubles
    const int dayw=7;
    const int monkey=3;
    int food[monkey][dayw];
    int total, avg;
    
    // Input data
    cout<<"Input the amount of pounds of food eaten by Monkey 1"<<endl;
    cout<<"-------Day 1-------"<<endl;
    cin>>food[0][0];
    while (food[0][0]<0){
        cout<<"This value can not be negative"<<endl;
        cout<<"try again"<<endl;
        cin>>food[0][0];
    }
    cout<<"-------Day 2-------"<<endl;
    cin>>food[0][1];
    while (food[0][1]<0){
        cout<<"This value can not be negative"<<endl;
        cout<<"try again"<<endl;
        cin>>food[0][1];
    }
    cout<<"-------Day 3-------"<<endl;
    cin>>food[0][2];
    while (food[0][2]<0){
        cout<<"This value can not be negative"<<endl;
        cout<<"try again"<<endl;
        cin>>food[0][2];
    }
    cout<<"-------Day 4-------"<<endl;
    cin>>food[0][3];
    while (food[0][3]<0){
        cout<<"This value can not be negative"<<endl;
        cout<<"try again"<<endl;
        cin>>food[0][3];
    }
    cout<<"-------Day 5-------"<<endl;
    cin>>food[0][4];
    while (food[0][4]<0){
        cout<<"This value can not be negative"<<endl;
        cout<<"try again"<<endl;
        cin>>food[0][4];
    }
    cout<<"-------Day 6-------"<<endl;
    cin>>food[0][5];
    while (food[0][5]<0){
        cout<<"This value can not be negative"<<endl;
        cout<<"try again"<<endl;
        cin>>food[0][5];
    }
    cout<<"-------Day 7-------"<<endl;
    cin>>food[0][6];
    while (food[0][6]<0){
        cout<<"This value can not be negative"<<endl;
        cout<<"try again"<<endl;
        cin>>food[0][6];
    }
    
    cout<<endl<<"Input the amount of food eaten by Monkey 2"<<endl;
    cout<<"-------Day 1-------"<<endl;
    cin>>food[1][0];
    cout<<"-------Day 2-------"<<endl;
    cin>>food[1][1];
    cout<<"-------Day 3-------"<<endl;
    cin>>food[1][2];
    cout<<"-------Day 4-------"<<endl;
    cin>>food[1][3];
    cout<<"-------Day 5-------"<<endl;
    cin>>food[1][4];
    cout<<"-------Day 6-------"<<endl;
    cin>>food[1][5];
    cout<<"-------Day 7-------"<<endl;
    cin>>food[1][6];
    
    cout<<endl<<"Input the amount of food eaten by Monkey 3"<<endl;
    cout<<"-------Day 1-------"<<endl;
    cin>>food[2][0];
    cout<<"-------Day 2-------"<<endl;
    cin>>food[2][1];
    cout<<"-------Day 3-------"<<endl;
    cin>>food[2][2];
    cout<<"-------Day 4-------"<<endl;
    cin>>food[2][3];
    cout<<"-------Day 5-------"<<endl;
    cin>>food[2][4];
    cout<<"-------Day 6-------"<<endl;
    cin>>food[2][5];
    cout<<"-------Day 7-------"<<endl;
    cin>>food[2][6];
    // Process data
    
    // Output data
    
    // Exit stage Right!

    return 0;
}

