/* 
 * Author: Emmanuel Contreras
 * Created on : January 26, 2021 6:29 PM
 * Purpose:  Checking for Prime numbers
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int);//Determine if the input number is prime.

bool isPrime(int inpt)
    
{   int n;
    
    
        for(n=2;n<=inpt/2;n++)
        if (inpt%n==0)
        { return false;
               
        }
        return true;
    }     
    
     
    
        
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int  inpt,   //prime candidate
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
    //Exit stage right!
    return 0;
}

