/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on February 07, 2021, 12:23 PM
 * Purpose: Project #1 -- Black Jack 21
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int     dcrd1,     //these are the dealers cards
            dcrd2,
            dcrd3,
            dcrd4,
            dcrd5;
    
    int     plycrd1,    //these are the players cards
            plycrd2,
            plycrd3,
            plycrd4,
            plycrd5;
    
    int     dtot,       //this is the total value of the dealer's cards
            plytot;     //this is the total value of the player's cards
    
    int     dWct,       //counter that keeps track of dealer Wins
            plyWct;     //counter that keeps track of player Wins
    
    char    choice;     //input for yes or no
    
    
    //Initialize Variables
    cout<<"Welcome to Blackjack (aka 21)"<<endl;
    cout<<"Would you like to play?"<<endl;
    cout<<"Type in Y or N"<<endl;
    cin>>choice;
    
    if (choice == 'N' || choice== 'n')
    {cout<<"Okay Bye!";
        return 0;
    }
        else{
    
    dtot=plytot=dWct=plyWct=0;
    
    dcrd1=rand()%10+1;
    dcrd2=rand()%10+1;
    dcrd3=rand()%10+1;
    dcrd4=rand()%10+1;
    dcrd5=rand()%10+1;
    
    plycrd1=rand()%10+1;
    plycrd2=rand()%10+1;
    plycrd3=rand()%10+1;
    plycrd4=rand()%10+1;
    plycrd5=rand()%10+1;
    
    //Map Inputs to Outputs -> Process
    
    dtot=dtot+dcrd1+dcrd2;
    plytot=plycrd1+plycrd2;
    
    //Display Inputs/Outputs
    cout<<"Your first card is: "<<plycrd1<<endl;
    cout<<"Dealer's first card is: "<<dcrd1<<endl;
    cout<<"Your second card is: "<<plycrd2<<endl;
    cout<<"Dealer's second card is: "<<dcrd2<<endl;
    
    cout<<"Dealer's total card value is: "<<dtot<<endl;
    cout<<"Your total card value is: "<<plytot<<endl;
    
    cout<<"Would you like to Hit or Stay?"<<endl;
    cout<<"Type H or S"<<endl;
    cin>>choice;
    
    
    if (choice=='H'||choice=='h')
    {   cout<<"Your next card is: "<<plycrd3<<endl;
        plytot=plytot+plycrd3;
        cout<<"Your total card value is:"<<plytot<<endl;
        if (plytot>21)
            cout<<"You lose!";
        else {
            cout<<"Would you like to Hit or Stay?"<<endl;
        cout<<"Type H or S"<<endl;
        cin>>choice;
         if (choice=='H'||choice=='h')
        cout<<"Your next card is: "<<plycrd4<<endl;
        plytot=plytot+plycrd4;
        cout<<"Your total card value is:"<<plytot<<endl;
        if (plytot>21)
            cout<<"You lose!";
        else {
            cout<<"Would you like to Hit or Stay?"<<endl;
        cout<<"Type H or S"<<endl;
        cin>>choice;
         if (choice=='H'||choice=='h')
        cout<<"Your next card is: "<<plycrd5<<endl;
        plytot=plytot+plycrd5;
        cout<<"Your total card value is:"<<plytot<<endl;
        if (plytot>21)
            cout<<"You lose!";
        }
        }
    }
    
    else if (choice=='S'||choice=='s')
        if (plytot<=dtot)
            cout<<"You lose!"<<endl;
        else 
        {cout<<"Dealer's next card is: "<<dcrd3<<endl;
        dtot=dtot+dcrd3;    
        cout<<"Dealer's total card value is: "<<dtot<<endl;
         if (dtot>21)
             cout<<"Dealer Busts! You Win!"<<endl;
         else if (dtot>=plytot)
             cout<<"Dealer Wins! You Lose!"<<endl;
         else if(dtot<plytot)
             cout<<"Dealer's next card is: "<<dcrd4<<endl;
        dtot=dtot+dcrd4;    
        cout<<"Dealer's total card value is: "<<dtot<<endl;
         if (dtot>21)
             cout<<"Dealer Busts! You Win!"<<endl;
            
        }
    }
    //Exit the Program - Cleanup
    return 0;
}