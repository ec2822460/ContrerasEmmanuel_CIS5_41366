/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on January 29, 2021
 * Purpose:  Histogram
 */

//System Libraries Here
#include <iostream>
using namespace std;


//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short int   n1000s,
                        n100s,
                        n10s,
                        n1s,
            
                        count,
                        inpt;
    
    
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>inpt;
    
    
     
    n1000s=inpt/1000;
    inpt=inpt-(n1000s*1000);
    n100s=inpt/100;
    inpt=inpt-(n100s*100);
    n10s=inpt/10;
    inpt=inpt-(n10s*10);
    n1s=inpt/1;
    
   
    //Histogram Here
    count=1;
    
    cout<<n1s<<" ";
     while(count<=n1s)
     { cout<<"*";
        count++;
     }
    cout<<endl;
    
    count=1;
    cout<<n10s<<" ";
     while(count<=n10s)
     {  cout<<"*";
         count++;
     }
    cout<<endl;
    
    count=1;
    cout<<n100s<<" "; 
    while(count<=n100s)
    {  cout<<"*";
        count++;
    }
    cout<<endl;
    
    count=1;
    cout<<n1000s<<" ";
     while(count<=n1000s)
     {    cout<<"*";
         count++;
     }
    cout<<endl;
    
    
    //Exit
    return 0;
}