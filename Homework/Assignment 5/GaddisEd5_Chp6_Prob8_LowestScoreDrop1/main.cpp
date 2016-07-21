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
void calcA(int, int, int, int, int);
int lowest(int, int, int, int, int);
// Execution begins here!
int main(int argc, char** argv) {
    //Introduce the program
    cout<<"This program calculates the average of a group of test scores."<<endl;
    cout<<"Then drops the lowest score!!!"<<endl;
    //Declare variables,doubles
    int score1, score2, score3, score4, score5;
    
    // input data
    cout<<"Enter the score for the first test."<<endl;
    score(score1);
    
    cout<<"Enter the score for the second test."<<endl;
    score(score2);
      
    cout<<"Enter the score for the third test."<<endl;
    score(score3);
    
    cout<<"Enter the score for the fourth test."<<endl;
    score(score4);
   
    cout<<"Enter the score for the fifth test."<<endl;
    score(score5);
    
    // Process the data/ Output the data
    calcA(score1, score2, score3, score4, score5);
    
    // output data
    
    // Exit stage Right!
    
    return 0;
}

void score(int &scor){
    cin>>scor;
    while (scor<0){
        cout<<"Scores must be higher than zero"<<endl;
        cout<<"Enter again."<<endl;
        cin>>scor;
    }
}
void calcA(int scor1, int scor2,int scor3,int scor4,int scor5){
    int low;
    float avg;
    low = lowest(scor1, scor2, scor3, scor4, scor5);
    if (low==scor1){
        avg=(scor2+scor3+scor4+scor5)/4;
        cout<<"The first test had the lowest score!"<<endl;
        cout<<"The average of the other 4 tests = "<<avg<<endl;
    }
    else if (low==scor2){
        avg=(scor1+scor3+scor4+scor5)/4;
        cout<<"The Second test had the lowest score!"<<endl;
        cout<<"The average of the other 4 tests = "<<avg<<endl;
    }
    else if (low==scor3){
        avg=(scor1+scor2+scor4+scor5)/4;
        cout<<"The Third test had the lowest score!"<<endl;
        cout<<"The average of the other 4 tests = "<<avg<<endl;
    }
    else if (low==scor4){
        avg=(scor1+scor3+scor2+scor5)/4;
        cout<<"The Fourth test had the lowest score!"<<endl;
        cout<<"The average of the other 4 tests = "<<avg<<endl;
    }
    else {
        avg=(scor1+scor3+scor4+scor2)/4;
        cout<<"The Fifth test had the lowest score!"<<endl;
        cout<<"The average of the other 4 tests = "<<avg<<endl;
    }
    
}
int lowest(int scor1, int scor2,int scor3,int scor4,int scor5){
    if (scor1<scor2 && scor1<scor3 && scor1<scor4 && scor1<scor5)
        return scor1;
    else if (scor2<scor1 && scor2<scor3 && scor2<scor4 && scor2<scor5)
        return scor2;
    else if (scor3<scor1 && scor3<scor2 && scor3<scor4 && scor3<scor5)
        return scor3;
    else if (scor4<scor1 && scor4<scor2 && scor4<scor3 && scor4<scor5)
        return scor4;
    else if (scor5<scor1 && scor5<scor2 && scor5<scor3 && scor5<scor4)
        return scor5;
    }