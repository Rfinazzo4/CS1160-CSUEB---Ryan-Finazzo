/* 
 * File:   main.cpp
 * Author: Ryanfinazzo
 * Ocean Levels
 * Created on June 24, 2016, 3:55 PM
 */

#include <iostream>

using namespace std;

 
int main(int argc, char** argv) {

    float rslvl = 1.5; // # in millimeters the ocean rises in 1 year
    float oclvl5 = 5; // Ocean level in 5 years 
    float oclvl7 = 7; // Ocean level in 7 years
    float oclvl10 = 10; // Ocean level in 10 years
    
    oclvl5 = (oclvl5 * rslvl); 
    oclvl7 = (oclvl7 * rslvl);
    oclvl10 = (oclvl10 * rslvl);
    
    cout << "The Ocean level is rising at a rate of 1.5mm per year"<<endl;
    cout << "In 5 years the ocean level will be = "<<oclvl5<<"mm higher"<<endl;
    cout << "In 7 years the ocean level will be = "<<oclvl7<<"mm higher"<<endl;
    cout << "In 10 years the ocean level will be = "<<oclvl10<<"mm higher"<<endl;
    
    
    return 0;
}

