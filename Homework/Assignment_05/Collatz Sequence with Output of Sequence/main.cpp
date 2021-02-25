/* 
 * Author: Emmanuel Contreras
 * Created on: January 26, 2021 
 * Purpose:  Collatz Sequence with Output of Sequence
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int collatz(int);//3n+1 sequence
int seq(int);       //prints out the sequence of numbers
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


//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n,ns;
    
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
    
    //Exit stage right!
    return 0;
}