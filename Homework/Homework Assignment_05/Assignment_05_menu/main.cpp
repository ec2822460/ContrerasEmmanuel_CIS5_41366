/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on February 21, 2021, 10:45 PM
 * Purpose:  Menu program for Homework Assignment #5
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <cmath>

using namespace std;

//User Libraries


//Function Prototypes

void minmax(int,int,int,int &,int &);//Function to find the min and max

int fctrl(int);//Function to write for this problem

bool isPrime(int);//Determine if the input number is prime.

int collatz(int);//3n+1 sequence
int seq(int);       //prints out the sequence of numbers



 void getScre(int&, int&, int&, int&, int&);    // the functions as provided by professor 
 float calcAvg(int, int, int, int, int);
  int fndLwst(int, int, int, int, int);

float psntVal(float futVal, float apr, int years);      //the function per HW instructions

void input(int& hours, int& minutes, char& colon);
void output(int& hours, int& minutes, char& AMorPM);
int convertHR(int& hours, char& AMorPM);

//Execution Begins Here
int main(int argc, char** argv) {
        //Declare Variables
    char option;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose a Program from the list"<<endl;
        cout<<"Type 1 for Min and Max Program"<<endl;
        cout<<"Type 2 for Factorial Program"<<endl;
        cout<<"Type 3 for Is Prime Program"<<endl;
        cout<<"Type 4 for Collatz Sequence Program"<<endl;
        cout<<"Type 5 for Collatz Sequence with Output of Sequence Program"<<endl;
        cout<<"Type 6 for Savitch 9th Edition Chapter 5 Problem 12 -- 12 Hour Notation Program"<<endl;
        cout<<"Type 7 for Savitch 9th Edition Chapter 5 Problem 1 -- Military Time to Standard Time Conversion Program"<<endl;
        cout<<"Type 8 for Gaddis 9th Edition Chapter 6 Problem 9 -- Present Value Program"<<endl;
        cout<<"Type 9 for Gaddis 9th Edition Chapter 6 Problem 10 -- Average of Test Scores Program"<<endl;
        cout<<"Type any other character to exit"<<endl;
        cin>>option;

        //Switch to determine the Problem
        switch(option){
            case '1':{  
                        short   numb1,  //these are my inputs for the function
                                numb2,
                                numb3;
        
                        int     min,
                                max;
    
                        //Initialize Variables
    
                        numb1=numb2=numb3=min=max=0;
    
                        cout<<"Input 3 numbers"<<endl;
                        cin>>numb1>>numb2>>numb3;
                        min=max=numb3;
    
    
                        //Process/Map inputs to outputs
    
                        minmax(numb1, numb2, numb3, min, max);
    
    
                        //Output data
                        cout<<"Min = "<<min<<endl;
                        cout<<"Max = "<<max;
    
                
                break;
            }
            case '2':{  int inpt,   //the input variable
                        facto;   //the factorial
    
    
                        //Initialize Variables
                        cout<<"This program calculates the factorial using a function prototype found in the template for this problem."<<endl;
                        cout<<"Input the number for the function."<<endl;
                        cin>>inpt;
    
                        //Process/Map inputs to outputs
                         facto=fctrl(inpt);
                        //Output data
                        cout<<inpt<<"! = "<<facto;
                
                break;
            }
            case '3':{  int  inpt,   //prime candidate
                            primo;  //answer to prime function
    
                            //Initialize Variables
                            cout<<"Input a number to test if Prime."<<endl;
                            cin>>inpt;
    
                             //Process/Map inputs to outputs
    
                            primo=isPrime(inpt);
                            //Output data
    
                            if(primo)
                            cout<<inpt<<" is prime.";
    
                            else cout<<inpt<<" is not prime.";
                
                break;
            }
            case '4':{  int n;
    
                        //Initialize Variables
                        cout<<"Collatz Conjecture Test"<<endl;
                        cout<<"Input a sequence start"<<endl;
                        cin>>n;
    
                        //Process/Map inputs to outputs
                        cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
                        collatz(n)<<" steps";
    
                
                break;
            }
            case '5':{  int n,ns;
    
                        //Initialize Variables
     
                        cout<<"Collatz Conjecture Test"<<endl;
                        cout<<"Input a sequence start"<<endl;
                        cin>>n;
    
                         //Process/Map inputs to outputs
                        ns=collatz(n);
    
                        //Output data
                        cout<<seq(n)<<endl;
    
                        cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
                         ns<<" steps";
    
                
                break;
            }
            case '6':{  int currentHr,
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
                
                break;
            }
            case '7':{  int hours,minutes;
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
  
    
                
                break;
            }
            case '8':{  float prstVal,      //the present value neeeded to be deposited
            futVal,     //the future value desired
            intRate,    //interest rate in %/year   
            apr;        //the Annual Percentage rate in decimal form
    
            int years;          //number of years receving interest
    
            //Initialize Variables
            cout<<"This is a Present Value Computation"<<endl;
            cout<<"Input the Future Value in Dollars"<<endl;
            cin>>futVal;
            cout<<"Input the Number of Years"<<endl;
            cin>>years;
            cout<<"Input the Interest Rate %/yr"<<endl;
            cin>>intRate;
    
    
            //Map Inputs to Outputs -> Process
            apr=intRate/100;                    //how i convert an integer interest rate to decimal apr
    
             prstVal=psntVal(futVal, apr, years);    //the function  
    
    
            //Display Inputs/Outputs
            cout<<fixed<<setprecision(2);
            cout<<"The Present Value = $"<<prstVal;
    
                
                break;
            }
            case '9':{ float tAvg;          //total average of top 4 scores 
           
    
            int score1,score2,score3,score4,score5;    //the FIVE inputted scores to be used by the functions
    
    
            //Initialize Variables
            cout<<"Find the Average of Test Scores"<<endl;
            cout<<"by removing the lowest value."<<endl;
            cout<<"Input the 5 test scores."<<endl;
            getScre(score1,score2,score3,score4,score5);    // the functions as provided by professor 
 
    
    
            //Map Inputs to Outputs -> Process
    
            tAvg=calcAvg(score1,score2,score3,score4,score5);
    
            //Display Inputs/Outputs
    
    
            cout<<fixed<<setprecision(1);
            cout<<"The average test score = "<<tAvg;
    
    
                
                break;
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(option>='1'&&option<='9');
    
    //Exit stage right!
    return 0;
}


void minmax(int numb1, int numb2, int numb3, int &min, int&max)
    
    { 
      if (numb3<min)
        min=numb3;
      if (numb2<min)
          min=numb2;
      if (numb1<min)
          min=numb1;
    
      if (numb3>max)
          max=numb3;
      if  (numb2>max)
          max=numb2;
      if (numb1>max)
          max=numb1;
        
    }



int fctrl(int inpt)
{   int facto=1;
    for(int n=1; n<=inpt; n++)
    {
        facto=facto*n;
    }
    return facto;
}  


bool isPrime(int inpt)
    
{   int n;
    
    
        for(n=2;n<=inpt/2;n++)
        if (inpt%n==0)
        { return false;
               
        }
        return true;
    }     
    

int collatz(int n)

{int count=1;
    
   do {
       
   if(n%2==0)
       {n= n/2;
       }
       
       
   else { n= (n*3) + 1;     
        }
      
   count++;
   
   }

    while (n>1); 
    
    return count;
}

int seq(int n)
{int  count=1;
    do{ cout<<n<<", ";
        if (n&1)
        n=(n*3) + 1;

        else n=n/2;
      }
while (n!=1);
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


float psntVal(float futVal, float apr, int years){
   float pval;
   pval=futVal/pow((1+apr),years);      //the formula as provided by professor 
    return pval;
}

void getScre(int& score1, int& score2, int& score3, int& score4, int& score5){   // the function that grabs the score inputs. 
 cin>>score1;
 cin>>score2;
 cin>>score3;
 cin>>score4;
 cin>>score5;
  
 if (score1<1||score1>100)
    cout<<"score1 is invalid. Input a value 1-100.";   //this section checks is score values are valid.
 if (score2<1||score2>100)
    cout<<"score1 is invalid. Input a value 1-100.";
if (score3<1||score3>100)
    cout<<"score1 is invalid. Input a value 1-100.";
if (score4<1||score4>100)
    cout<<"score1 is invalid. Input a value 1-100.";
if (score5<1||score5>100)
    cout<<"score1 is invalid. Input a value 1-100."; 
  
}
 
 
float calcAvg(int score1,int score2,int score3,int score4,int score5){
    float avg= score1 + score2 + score3 + score4 + score5 - fndLwst(score1, score2, score3, score4, score5); //calculates sum before averaging.
     avg= avg/4.0f;
 
    return avg;    
}

int fndLwst(int score1, int score2, int score3,int score4, int score5){  //the long way of sorting numbers.
    if (score1<score2&&score1<score3&&score1<score4&&score1<score5)
        return score1;
    if (score2<score1&&score2<score3&&score2<score4&&score2<score5)
        return score2;
    if (score3<score1&&score3<score2&&score3<score4&&score3<score5)
        return score3;
    if (score4<score1&&score4<score2&&score4<score3&&score4<score5)
        return score4;
    if (score5<score1&&score5<score2&&score5<score3&&score5<score4)
        return score5;
        
}
