/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on July 18, 2016, 12:47 PM
 * Generate a standard normal - Z
 */
//System Libraries 
//Input output stream library
#include <iostream>  //Input/outout Library
#include <cstdlib> //Random Numbers
#include <ctime> //Time
#include <cmath>
#include <vector>

using namespace std; //iostream uses standard namespace

// User libraries

// Global constants
const unsigned int MAXRAND = pow(2,31)-1; //MAx unsigned int value
const unsigned int MXRND = (1<<31)-1;  //Same max unsigned int value
// Function prototypes
float normal();
float fillAry(vector <float> &, int);
void maxmin(vector <float> &, int,float &, float &);
float mean(vector <float> &, int );
float stddev (vector <float> &, int);
// Execution begins here!
int main(int argc, char** argv) {
   //Set the random number seed
     srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables,doubles
   
    const int SIZE=10000;
    vector<float> x (SIZE);
    float min, max, avg, std;
    // input data
    fillAry (x,SIZE);
    //Process the data
    maxmin (x,SIZE,min,max);
    avg=mean(x, SIZE);
    std=stddev(x,SIZE);
    // output data
    cout<<"Integer Maximum Random Number = "<<MAXRAND<<endl;
    cout<<"Integer Maximum Random Number = "<<MXRND<<endl;
    cout<<"The Minimum Random Normal Number = "<<min<<endl;
    cout<<"The Maximum Random Normal Number = "<<max<<endl;
    cout<<"The Average Random Normal Value = "<<avg<<endl;
    cout<<"The Std Dev Random Normal Value = "<<stddev<<endl;
    
    // Exit stage Right!
    
    
    return 0;
}

float stddev (vector <float> &x, int n){
    float sum=0,avg=mean(x,n);
    for(int i=0; i<n;i++){
        sum+=((x[i]-avg)*(x[i]-avg));
    }
    return sqrt(sum/(n-1));
}

float mean(vector <float> &x, int n){
    //Declare and Initialize
    float sum=0;
    for(int i=0; i<n; i++){
        sum+=x[i];
    }
}

void maxmin(vector <float> &x, int n,float &min, float &max){
    min=max=x[0];
    for(int i=1; i<n;i++){
        if(max < x[i]) max=x[i];
        if(min >x [i]) min=x[i];
    }
}

float fillAry(vector <float> &x, int n){
    for(int i=0; i<n; i++){
        x[i=normal()];
    }
}
float normal(){
    //declare and Initialize
    float sum=0;
    //Add 12 uniformly distributed numbers
    for(int i=1; i<=12;i++){
        sum+=static_cast<float>(rand())/MAXRAND; //[0,1]
    }
    //scale a number between[0,12]-6 = [-6,6]
    return sum-6;
}
