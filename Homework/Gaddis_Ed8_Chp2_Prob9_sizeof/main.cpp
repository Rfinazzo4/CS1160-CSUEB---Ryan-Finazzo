/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on June 22, 2016, 1:45 PM
 * Size of all data types
 */
// System Libraries 
// Input output stream library

#include <iostream> 
using namespace std; // iostream uses standard namespace

// User libraries

// Global constants

// Function prototypes

// Execution begins here!

int main(int argc, char** argv) {
    
    // Declare variables,floats
    char a;
    unsigned char b;
    short c;
    unsigned short d;
    int e;
    unsigned int f;
    bool g;
    float h;
    double i;
    long double j;
    long k;
    unsigned long l;
    
    // Input data
    
    // Process the data
    
    // Output data
    cout << "Character has a size of     "    <<sizeof(a)<<" bytes"<< endl;
    cout << "Unsigned Character has a size of "<<sizeof(b)<<" bytes"<< endl;
    cout << "Short has a size of "             <<sizeof(c)<<" bytes"<< endl;
    cout << "Unsigned Short has a size of "<<sizeof(d)<<" bytes"<< endl;
    cout << "Int has a size of "<<sizeof(e)<<" bytes"<< endl;
    cout << "Unsigned Int has a size of "<<sizeof(f)<<" bytes"<< endl;
    cout << "Bool has a size of "<<sizeof(g)<<" bytes"<< endl;
    cout << "Float has a size of "<<sizeof(h)<<" bytes"<< endl;
    cout << "Double has a size of "<<sizeof(i)<<" bytes"<< endl;
    cout << "Long Double has a size of "<<sizeof(j)<<" bytes"<< endl;
    cout << "Long has a size of "<<sizeof(k)<<" bytes"<< endl;
    cout << "Unsigned Long has a size of "<<sizeof(l)<<" bytes"<< endl;
    // Exit stage Right!
    
    return 0;
}

