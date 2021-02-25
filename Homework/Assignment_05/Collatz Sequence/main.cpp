/* 
 * Author: Emmanuel Contreras
 * Created on: January 26, 2021 6:56 PM
 * Purpose:  Collatz Sequence
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int collatz(int);//3n+1 sequence

int collatz(int n)

{int count=1;
    
   do {
       if(n%2==0)
       {n= n/2;
       }
       else
       { n= (n*3) + 1;
   
       }
       
       count++;
   
   }

    while (n>1); 
    
    return count;
}

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            collatz(n)<<" steps";
    
    //Output data
    
    //Exit stage right!
    return 0;
}