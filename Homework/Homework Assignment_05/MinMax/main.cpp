/* 
 * Author: Emmanuel Contreras
 * Created on: January 26, 2021 
 * Purpose:  Creating a Function to find MIN and MAX
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int,int,int,int &,int &);//Function to find the min and max

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

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    
    
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
    
    //Exit stage right!
    return 0;
}

