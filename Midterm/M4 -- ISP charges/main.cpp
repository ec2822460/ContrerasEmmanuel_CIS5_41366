/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on January 29, 2021 2:14 PM
 * Purpose:  ISP charges
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float packageA(int);
float packageA(int hours)
{int addHrs; float pkA;
    if (hours>20)
        { addHrs=hours-20;
            pkA=addHrs*0.85f+(0.95*10)+16.99;
        }
        else if (hours<=20&&hours>10)
        { addHrs=hours-10;
            pkA=addHrs*0.95f+16.99;
        }
        else pkA=16.99;
 return pkA;   
}

float packageB(int hours)
{int addHrs; float pkB;
   if (hours>30)
        {addHrs=hours-30;
            pkB=addHrs*0.64f+(0.74*10)+26.99; 
        }
        else if (hours<=30&&hours>20)
        {addHrs=hours-20;
            pkB=addHrs*0.74f+26.99;
        }  
        else pkB=26.99; 
  return pkB;  
}



//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char package;           //customer package selection
    unsigned short hours,   //hours customer used
            addHrs;         //additional hours over limit
    
    float totChrg,          //Total charge for package chosen
            packA,          //total charge for usage with package A
            packB,          //total charge for usage with package B
            packC;          //total charge for usage with package C
            
            
    
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
  

    
    //Basic Charges
    
    if(package=='a'||package=='A')
        if (hours>20)
        { addHrs=hours-20;
            packA=addHrs*0.85f+(0.95*10)+16.99;
        }
        else if (hours<=20&&hours>10)
        { addHrs=hours-10;
            packA=addHrs*0.95f+16.99;
        }
        else packA=16.99;
    
    if(package=='b'||package=='B')
        if (hours>30)
        {addHrs=hours-30;
            packB=addHrs*0.64f+(0.74*10)+26.99; 
        }
        else if (hours<=30&&hours>20)
        {addHrs=hours-20;
            packB=addHrs*0.74f+26.99;
        }  
        else packB=26.99;
                
    if(package=='c'||package=='C')
        packC=36.99;
    
    if(package=='a'||package=='A')
        totChrg=packA;
    if(package=='b'||package=='B')
        totChrg=packB;
    if(package=='c'||package=='C')
        totChrg=packC;
    
   
        
    //Output the Charge
    cout<<fixed<<setprecision(2);
    
    cout<<"$"<<totChrg;
    cout<<" ";
    
   
   
   
   if(totChrg>37.00)
        cout<<"C $"<<totChrg-36.99<<endl;
    
    else if (totChrg>=36.99&&packageB(hours)>36.66)    
        cout<<"C $0.00"<<endl;
    
    else if(totChrg>26.99)
        cout<<"B $"<<totChrg-packageB(hours)<<endl;
    
    else if(totChrg>16.99)
        cout<<"A $"<<totChrg-packageA(hours)<<endl;
    
    else cout<<"A $0.00"<<endl;

    //Output the cheapest package and the savings
    
        
    //Exit
    return 0;
}