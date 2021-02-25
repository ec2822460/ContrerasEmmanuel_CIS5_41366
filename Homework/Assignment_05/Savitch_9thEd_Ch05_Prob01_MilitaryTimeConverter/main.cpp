/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on February 21, 2021, 9:45 AM
 * Purpose: COnverting from Military time to standard time
 */
//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
void input(int& hours, int& minutes, char& colon);
void output(int& hours, int& minutes, char& AMorPM);
int convertHR(int& hours, char& AMorPM);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int hours,minutes;
    char AMorPM,choice,colon;
    
    
    //Initialize Variables
    cout << "Military Time Converter to Standard Time" << endl;
    cout << "Input Military Time hh:mm" << endl;
    
    //Map Inputs to Outputs -> Process
    //Display Inputs/Outputs
   do                                                                   //This is the main portion of the program that controls all functions
  {
    input(hours, minutes, colon);
    if (hours>=24||minutes>59)
        cout<<hours<<":"<<minutes<<" is not a valid time"<<endl;
    
        else if (hours==0)
            cout<<"00:"<<minutes<<" = 12:"<<minutes<<" AM"<<endl;
    
        else{
    
            hours=convertHR(hours, AMorPM);
    
            output(hours, minutes, AMorPM);
            }
    
    cout<<"Would you like to convert another time (y/n)" <<endl;    //this is the loop that repeats the program based on person's choice
    cin>> choice;
  
  }
  while((choice=='y') || (choice=='Y'));
  
    
    //Exit the Program - Cleanup
    return 0;
}


void input(int& hours, int& minutes, char& colon) {       //this is the function for inputting military time
  
  cin>>hours>>colon>>minutes;
   
    if (hours>=24||minutes>59)
        {
            hours=hours;
        minutes=minutes;
        
            
        }
    else if (hours==0)
             hours=0;
    
        else{
    
            cout<<hours<<colon<<minutes << " = ";
            }   
}

void output(int& hours, int& minutes, char& AMorPM) {      //this is the function that spits out the standard time
  cout<<hours<<":"<<minutes;
  if(AMorPM == 'A')
     cout<<" AM"<<endl;
     else cout<<" PM"<<endl;

}

int convertHR(int& hours, char& AMorPM)            //this is the hour convertor from military to standard
{
  
  if (hours<12)
      AMorPM ='A';
   if (hours>=12)
      AMorPM ='P';
  
  if (hours == 0) 
        hours=12;
  
  if (hours < 13)
         hours=hours;
    
if (hours>12)
        hours=hours -12;
  
  return hours;
}