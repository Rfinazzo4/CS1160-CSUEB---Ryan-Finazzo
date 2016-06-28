/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on June 28, 2016, 12:27 PM
 * Grade menu, with 4 different techniques to determine grade
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
    char choice;
    
    
    // input data
    cout<<"Menu program"<<endl;
    cout<<"Choose how to determine your grade"<<endl;
    cout<<"Type 1 for switch"<<endl;
    cout<<"Type 2 for ternary Operator"<<endl;
    cout<<"Type 3 for Independent if's"<<endl;
    cout<<"Type 4 for Dependent if's"<<endl;
    cin>> choice;
    
    switch (choice){
    case '1': {
        unsigned int score; //Input 0-100
        char grade; // A,B,C,D,F


        cout<<"Input the score [0-100]; Output will be the grade."<<endl;
        cin>>score;
       //Process data 
        switch (score/10){
        case 10:
        case 9:  grade = 'A';break;  
        case 8: grade = 'B';break;
        case 7: grade= 'C';break;
        case 6: grade = 'D';break;
        default: grade = 'F';
        }

        cout<< "Your grade is a(n) "<<grade<<endl;
        break;}
     case '2':
     {      unsigned int score; //Input 0-100
            char grade; // A,B,C,D,F

            // input data
            cout<<"Input the score [0-100]; Output will be the grade."<<endl;
            cin>>score;
            // Process data
            if (score>=90)grade = 'A';
            else if (score>= 80) grade ='B';
            else if (score>= 70) grade ='C';
            else if (score>= 60) grade ='D';
            else  grade ='F';
            // output data
            cout<< "Your grade is a(n) "<<grade<<endl;
            break;
    }
    
    case '3': 
    {           unsigned int score; //Input 0-100
                char grade; // A,B,C,D,F

                // input data
                cout<<"Input the score [0-100]; Output will be the grade."<<endl;
                cin>>score;
                // Process data
                grade='F'; //Default Value
                if (score<=120&&score>=90)grade='A';
                if (score<=90&&score>=80)grade='B';
                if (score<=80&&score>=70)grade='C';
                if (score<=70&&score>=60)grade='D';
                // output data
                cout<< "Your grade is a(n) "<<grade<<endl;
                break;
    }
    
        
    case '4': 
    {               unsigned int score; //Input 0-100
                    char grade; // A,B,C,D,F

                    // input data
                    cout<<"Input the score [0-100]; Output will be the grade."<<endl;
                    cin>>score;
                    // Process data
                    if(score>=90) grade = 'A';
                    else if (score >=80) grade = 'B';
                    else if (score >=70) grade = 'C';
                    else if (score >=60) grade = 'D';
                    else  grade = 'F';
                    // Ouput data
                    cout<< "Your grade is a(n) "<<grade<<endl;
                    break;
                    }
    
    default:cout<<"Not option in menu"<<endl;
           
    } 
    return 0;
}

