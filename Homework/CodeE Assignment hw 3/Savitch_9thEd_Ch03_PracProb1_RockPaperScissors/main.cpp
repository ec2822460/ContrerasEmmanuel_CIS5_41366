/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 17, 2021, 10:01 AM
 * Purpose:  Program to reward buyer with points per book
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    char    inp1,      //Player 1 input
            inp2;      //Player 2 input
    
    int      chce1,     //convert input to simple integers
            chce2;
            
  
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>inp1>>inp2;
      
    
    //Map Inputs to Outputs -> Process
    if (inp1=='R'||inp1=='r')
        chce1=1;
    else if (inp1=='P'||inp1=='p')
            chce1=2;
    else if (inp1=='S'||inp1=='s')
            chce1=3;
    else cout<<inp1<<" is an invalid choice."<<endl;
    
    
    if (inp2=='R'||inp2=='r')
            chce2=1;
    else if (inp2=='P'||inp2=='p')
            chce2=2;
    else if (inp2=='S'||inp2=='s')
            chce2=3;
    
    else cout<<inp2<<" is an invalid choice."<<endl;
    
    
    //Display Inputs/Outputs
    if (chce1==chce2)
        cout<<"Nobody wins.";

    if (chce1==1 && chce2==2)
        cout<<"Paper covers rock.";
    if (chce1==1 && chce2==3)
        cout<<"Rock breaks scissors.";
    if (chce1==3 && chce2==1)
        cout<<"Rock breaks scissors.";
    if (chce1==3 && chce2==2)
        cout<<"Scissors cuts paper.";
    if (chce1==2 && chce2==1)
        cout<<"Paper covers rock.";
    if (chce1==2 && chce2==3)
        cout<<"Scissors cuts paper.";
    
   
    
    //Exit the Program - Cleanup
    return 0;
}