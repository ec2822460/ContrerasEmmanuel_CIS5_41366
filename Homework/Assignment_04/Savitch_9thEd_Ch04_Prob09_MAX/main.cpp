/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 23, 2021, 10:58 PM
 * Purpose:  MAX of two and Three inputs
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
float maximum,
      maximum3;

float SORT2(float,float);
float SORT3(float,float,float);

float SORT2(float number1, float number2)
    { if(number1<number2)
        maximum=number2;
    else maximum=number1;
    return maximum;
}
float SORT3(float number1, float number2, float number3)
    { if(number1>number2&&number1>number3)
        maximum3=number1;
       if(number2>number1&&number2>number3) 
            maximum3=number2;
        if(number3>number1&&number3>number2)
            maximum3=number3;
    return maximum3;
}

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   numb1,  //first number 
            numb2,  //second number
            numb3,  //third number
            max2,    //max number of two inputs
            max3;   //max number of three inputs
    
    //Initialize Variables
    cout<<"Enter first number:"<<endl;
    cin>>numb1;
    cout<<endl;
    cout<<"Enter Second number:"<<endl;
    cout<<endl;
    cin>>numb2;
    cout<<"Enter third number:"<<endl;
    cout<<endl;
    cin>>numb3;

    //Map Inputs to Outputs -> Process
    max2=SORT2(numb1,numb2);
    max3=SORT3(numb1,numb2,numb3);
    
    //Display Inputs/Outputs
    cout<<fixed<<showpoint<<setprecision(1);//learned from Thursday Video from Student
    
cout<<"Largest number from two parameter function:"<<endl;
cout<<max2<<endl;
cout<<endl;
cout<<"Largest number from three parameter function:"<<endl;
cout<<max3<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}