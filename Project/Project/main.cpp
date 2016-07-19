/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on July 17, 2016, 10:27 AM
 * Project (R, P, s, L, S)
 */

//System Libraries 
//Input output stream library
#include <iostream>  //Input output library
#include <iomanip> //Formatting Library
#include <cstdlib> // 
#include <ctime> // Needed for randomization
using namespace std; //iostream uses standard namespace

// User libraries

// Global constants

// Function prototypes

void Gover(int win1, int tie1, int loss1); //Game over function 

// Execution begins here!
int main(int argc, char** argv) {
    //Declare variables,doubles
    char choice; //Users choice
    int Rcomp; //Randomized computer number 
    int tie=0, win=0, loss=0; //Score keeping
    char play; //Continuing the game (Off and on)
    
    // Introducing the game
    cout<<"You are playing Rock, Paper, Scissors, Lizard, Spock"<<endl;
    cout<<"The game if very similar to Rock, Paper, Scissors.  Just with some added rules."<<endl;
    cout<<"Rock beats Scissors and Lizard"<<endl;
    cout<<"Paper beats Rock and Spock"<<endl;
    cout<<"Scissors beats Paper and Lizard"<<endl;
    cout<<"Lizard beats Paper and Spock"<<endl;
    cout<<"Spock beats Scissors and Rock"<<endl;
    cout<<"Rock=R - Paper=P - Scissors=s - Lizard=L - Spock=S"<<endl;
    play='Y';
    
    // input data
    while (play=='Y'){
    cout<<"Make your move! (R, P, s, L, S)"<<endl;
    cin>>choice;
    
        if (choice != 'R' && choice != 'P' && choice != 's' && choice != 'L' && choice != 'S'){
            cout<<"You have not chosen a valid move!"<<endl;
            cout<<"Try again (R, P, s, L, S)"<<endl; 
        }
    
        //Process the data 
        else {
            srand( time(0));
            Rcomp=(rand()%5)+1; //Randomizing a number [1,5]R

            switch (choice){
                case 'R': 
                    if (Rcomp==1){
                        cout<<"You chose Rock | The computer chose Rock"<<endl;
                        cout<<"You have tied!"<<endl;
                        tie++;
                    }
                    else if (Rcomp==2 || Rcomp==5){
                        while (Rcomp==2){
                            cout<<"You chose Rock | The computer chose Paper"<<endl;
                            cout<<"Paper covers rock!"<<endl;
                            cout<<"You have lost :("<<endl;
                            loss++;
                            Rcomp+=20;//To exit the loop
                        }
                        while (Rcomp==5){
                            cout<<"You chose Rock | The computer chose Spock"<<endl;
                            cout<<"Spock vaporizes rock!"<<endl;
                            cout<<"You have lost :("<<endl;
                            loss++;
                            Rcomp+=20;//To exit the loop
                        }
                    }
                    else {
                        while (Rcomp==3){
                            cout<<"You chose Rock | The computer chose Scissors"<<endl;
                            cout<<"Rock crushed scissors!"<<endl;
                            cout<<"You have Won :)"<<endl;
                            win++;
                            Rcomp+=20;//To exit the loop
                        }
                        while (Rcomp==4){
                            cout<<"You chose Rock | The computer chose Lizard"<<endl;
                            cout<<"Rock crushes lizard!"<<endl;
                            cout<<"You have Won :)"<<endl;
                            win++;
                            Rcomp+=20;//To exit the loop
                        }           
                    } break;

                case 'P':  
                    if (Rcomp==2){
                        cout<<"You chose Paper | The computer chose Paper"<<endl;
                        cout<<"You have tied!"<<endl;
                        tie++;
                    }
                    else if (Rcomp==1 || Rcomp==5){
                        while (Rcomp==1){
                            cout<<"You chose Paper | The computer chose Rock"<<endl;
                            cout<<"Paper covers Rock!"<<endl;
                            cout<<"You have Won :)"<<endl;
                            win++;
                            Rcomp+=20;//To exit the loop
                        }
                        while (Rcomp==5){
                            cout<<"You chose Rock | The computer chose Spock"<<endl;
                            cout<<"Paper disproves spock!"<<endl;
                            cout<<"You have Won :)"<<endl;
                            win++;
                            Rcomp+=20;//To exit the loop
                        }
                    }
                    else {
                        while (Rcomp==3){
                            cout<<"You chose Rock | The computer chose Scissors"<<endl;
                            cout<<"Scissors cuts paper!"<<endl;
                            cout<<"You have lost :("<<endl;
                            loss++;
                            Rcomp+=20;//To exit the loop
                        }
                        while (Rcomp==4){
                            cout<<"You chose Rock | The computer chose Lizard"<<endl;
                            cout<<"Lizard east paper!"<<endl;
                            cout<<"You have lost :("<<endl;
                            loss++;
                            Rcomp+=20;//To exit the loop
                        }
                    }break;

                case 's': 
                    if (Rcomp==3){
                        cout<<"You chose Scissors | The computer chose Scissors"<<endl;
                        cout<<"You have tied!"<<endl;
                        tie++;
                    }
                    else if (Rcomp==2 || Rcomp==4){
                        while (Rcomp==2){
                            cout<<"You chose Scissors | The computer chose Paper"<<endl;
                            cout<<"Scissors cuts paper!"<<endl;
                            cout<<"You have Won :)"<<endl;
                            win++;
                            Rcomp+=20; //To exit the loop
                        }
                        while (Rcomp==4){
                            cout<<"You chose Scissors | The computer chose Lizard"<<endl;
                            cout<<"Scissors decapitates lizard!"<<endl;
                            cout<<"You have Won :)"<<endl;
                            win++;
                            Rcomp+=20;//To exit the loop
                        }
                    }
                    else {
                        while (Rcomp==1){
                            cout<<"You chose Scissors | The computer chose Rock"<<endl;
                            cout<<"Rock crushes scissors!"<<endl;
                            cout<<"You have lost :("<<endl;
                            loss++;
                            Rcomp+=20;//To exit the loop
                        }
                        while (Rcomp==4){
                            cout<<"You chose Scissors | The computer chose Spock"<<endl;
                            cout<<"Spock smashes scissors!"<<endl;
                            cout<<"You have lost :("<<endl;
                            loss++;
                            Rcomp+=20;//To exit the loop
                        }
                    }break;

                case 'L':
                    if (Rcomp==4){
                        cout<<"You chose Lizard | The computer chose Lizard"<<endl;
                        cout<<"You have tied!"<<endl;
                        tie++;
                    }
                    else if (Rcomp==2 || Rcomp==5){
                        while (Rcomp==2){
                            cout<<"You chose Lizard | The computer chose Paper"<<endl;
                            cout<<"Lizard eats paper!"<<endl;
                            cout<<"You have Won :)"<<endl;
                            win++;
                            Rcomp+=20; //To exit the loop
                        }
                        while (Rcomp==5){
                            cout<<"You chose Lizard | The computer chose Spock"<<endl;
                            cout<<"Lizard poisons spock!"<<endl;
                            cout<<"You have Won :)"<<endl;
                            win++;
                            Rcomp+=20;//To exit the loop
                        }
                    }
                    else {
                        while (Rcomp==1){
                            cout<<"You chose Lizard | The computer chose Rock"<<endl;
                            cout<<"Rock crushes lizard!"<<endl;
                            cout<<"You have lost :("<<endl;
                            loss++;
                            Rcomp+=20;//To exit the loop
                        }
                        while (Rcomp==3){
                            cout<<"You chose Lizard | The computer chose Scissors"<<endl;
                            cout<<"Scissors decapitates lizard!"<<endl;
                            cout<<"You have lost :("<<endl;
                            loss++;
                            Rcomp+=20;//To exit the loop
                        }
                    }break;
                case 'S': 
                    if (Rcomp==5){
                        cout<<"You chose Lizard | The computer chose Lizard"<<endl;
                        cout<<"You have tied!"<<endl;
                        tie++;
                    }
                    else if (Rcomp==3 || Rcomp==1){
                        while (Rcomp==3){
                            cout<<"You chose Spock | The computer chose Scissors"<<endl;
                            cout<<"Spock smashed scissors"<<endl;
                            cout<<"You have Won :)"<<endl;
                            win++;
                            Rcomp+=20; //To exit the loop
                        }
                        while (Rcomp==1){
                            cout<<"You chose Spock | The computer chose Rock"<<endl;
                            cout<<"Spock vaporizes rock!"<<endl;
                            cout<<"You have Won :)"<<endl;
                            win++;
                            Rcomp+=20;//To exit the loop
                        }
                    }
                    else {
                        while (Rcomp==2){
                            cout<<"You chose Spock | The computer chose Paper"<<endl;
                            cout<<"Paper dissporves spock"<<endl;
                            cout<<"You have lost :("<<endl;
                            loss++;
                            Rcomp+=20;//To exit the loop
                        }
                        while (Rcomp==4){
                            cout<<"You chose Spock | The computer chose Lizard"<<endl;
                            cout<<"Lizard poisons spock!"<<endl;
                            cout<<"You have lost :("<<endl;
                            loss++;
                            Rcomp+=20;//To exit the loop
                        }
                    }break;
            }
        }
        cout<<"\nDo you want to comtinue playing? (Y or N)"<<endl;
        cin>>play;
        while (play != 'Y' && play != 'N'){
            cout<<"Please try again! \nDo you want to play again? (Y or N)"<<endl;
            cin>>play;
        }
        if (play=='N'){
            Gover(tie, win, loss);
        }       
    }
    
    // Exit stage Right!
    return 0;
}

//Output the data
void Gover(int tie1, int win1, int loss1){
    cout<<"\nThanks for Playing!!"<<endl;
    cout<<"Your Win Total = "<<setw(3)<<win1<<endl;
    cout<<"Your Loss Total = "<<setw(2)<<loss1<<endl;
    cout<<"Your Tie Total = "<<setw(3)<<tie1<<endl;
    return;
}