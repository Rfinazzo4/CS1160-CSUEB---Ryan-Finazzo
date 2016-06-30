/* 
 * File:   main.cpp
 * Author: rcc
 * Pizza Pi
 * Created on June 30, 2016, 12:21 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
    
    float dPizza;
    float nSlices;
    float aPizza;
    float pi =3.14;
    cout<<"This program calculates the number of slices for any size pizza!"<<endl;
    cout<<"Enter the Diameter of a pizza in inches."<<endl;
    cin>>dPizza;
    
    aPizza=pi*dPizza;
    
    nSlices=aPizza/14.125f;
    
    cout<< fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"The pizza will have "<<nSlices<<" Slices"<<endl;
    
    return 0;
}

