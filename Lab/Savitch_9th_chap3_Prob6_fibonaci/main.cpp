/* 
 * File:   main.cpp
 * Author: rcc
 * Fibonacci sequence (Crud)
 * Created on June 30, 2016, 12:18 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    
    float crudWt, curnWt; //lbs
    int fi=1,fip1=1,fip2; //Fibonacci sequence
    int days=0; //Number of Days
    
    
    cout<<"How many pounds of Crud do you have?"<<endl;
    cin>>crudWt;
    
    //day - 0
    curnWt=crudWt*fi;
    cout<< " Fi Days Weight"<<endl;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curnWt<<endl;
    
    //day-5
    curnWt=crudWt*fip1;
    days+=5;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curnWt<<endl;
    
    //day-10
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    curnWt=crudWt*fi;
    days+=5;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curnWt<<endl;
    
    //day-15
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    curnWt=crudWt*fi;
    days+=5;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curnWt<<endl;
    
    //day-20
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    curnWt=crudWt*fi;
    days+=5;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curnWt<<endl;
    
    //day-25
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    curnWt=crudWt*=fi;
    days+=5;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curnWt<<endl;
   
    
    //day-30
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    curnWt=crudWt*fi;
    days+=5;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curnWt<<endl;
    
    
    
    
    
    return 0;
}

