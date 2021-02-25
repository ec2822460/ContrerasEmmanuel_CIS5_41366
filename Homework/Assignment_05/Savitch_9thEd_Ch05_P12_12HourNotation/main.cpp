/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on February 21, 2021, 9:42 PM
 * Purpose:  12 Hour Notation after waiting time
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
  int currentHr,
    currentMins,
    waitTime,
    hours,
    minutes,
    newHr,
    newMins;
    
char AMorPM,
    newAMPM,
    choice;
    
    //Initialize Variables
    
    
    do{
    
    cout<<"Enter hour:"<<endl;
    cin>>currentHr;
    cout<<endl;
    cout<<"Enter minutes:"<<endl;
    cin>>currentMins;
    cout<<endl;
    cout<<"Enter A for AM, P for PM:"<<endl;
    cin>>AMorPM;
    cout<<endl;
    cout<<"Enter waiting time:"<<endl;
    cin>>waitTime;
    cout<<endl;
    
   newHr=newMins=0;
        
    if ((waitTime+currentMins)>59)
        {newHr=currentHr + (waitTime/60);
        newMins=(currentMins+(waitTime%60));
        
    if (AMorPM=='A'&&newHr<12)
        newAMPM='A';
    if (AMorPM=='A'&&newHr>=12)
        newAMPM='P';
    if (AMorPM=='P'&&newHr<12)
        newAMPM='P';
    if (AMorPM=='P'&&newHr>=12)
        newAMPM='A';  
    
   if(newHr>12)
            newHr=newHr-12;
            
            if(newMins>59)
            {newHr=newHr+1;
            newMins=newMins-60;
            }
            
        }
        
         
            
            else {newHr=currentHr;
                newMins=currentMins+waitTime;
                }     
        
    
    cout<<"Current time = ";
    cout<<setw(2)<<setfill('0')<<currentHr<<":";
    cout<<setw(2)<<setfill('0')<<currentMins<<" "<<AMorPM<<"M"<<endl;

    cout<<"Time after waiting period = ";
    cout<<setw(2)<<setfill('0')<<newHr<<":";
    cout<<setw(2)<<setfill('0')<<newMins<<" "<<newAMPM<<"M"<<endl;
    cout<<endl;
    cout<<"Again:"<<endl;
    cin>>choice;
    if (choice=='y'||choice=='Y')
    cout<<endl;
    
    }
    
    while (choice=='y'||choice=='Y');
    
  


    //Exit stage right or left!
    return 0;
}