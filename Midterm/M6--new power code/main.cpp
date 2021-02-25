/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on January 29, 2021 5:49 PM
 * Purpose:  Infinite Series
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int fctrl(int);
int fctrl(int n)
{   int fact=1;
     for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float x,fx,term;
    
    int     nterms,
            leadx;
          
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    
    //Calculate Sequence sum here
    
  
    
    switch(nterms){
        case 1: fx=x;break;
        case 2: fx=x-(pow(3,x)/fctrl(3));break;
        case 3: fx=x-(pow(3,x)/fctrl(3))+(pow(5,x)/fctrl(5));break;
        case 4: fx=x-(pow(3,x)/fctrl(3))+(pow(5,x)/fctrl(5))-(pow(7,x)/fctrl(7));break;
        case 5: fx=x-(pow(3,x)/fctrl(3))+(pow(5,x)/fctrl(5))-(pow(7,x)/fctrl(7))+(pow(9,x)/fctrl(9));break;
        case 6: fx=x-(pow(3,x)/fctrl(3))+(pow(5,x)/fctrl(5))-(pow(7,x)/fctrl(7))+(pow(9,x)/fctrl(9))-(pow(11,x)/fctrl(11));break;
        case 7: fx=x-(pow(3,x)/fctrl(3))+(pow(5,x)/fctrl(5))-(pow(7,x)/fctrl(7))+(pow(9,x)/fctrl(9))-(pow(11,x)/fctrl(11))+(pow(13,x)/fctrl(13));break;
                                            
    }
            

  
    //Output the result here
    cout<<fixed;
    cout<<fx<<endl;
    
    //Exit
    return 0;
}