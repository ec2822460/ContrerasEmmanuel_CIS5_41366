/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 17, 2021, 2:32 PM
 * Purpose:  Program to determine compatability with horoscopes 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string      zdk1,
                zdk2;
    
    int         horo1,  //horoscope entry 1
                horo2;  //horoscope entry 2
             
   
             
    
    //Initialize Variables
    
     
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    
    cin>>zdk1;
    if(zdk1=="Aries"){horo1=1;}
    if(zdk1=="Leo"){horo1=1;}
    if(zdk1=="Sagittarius"){horo1=1;}
    if(zdk1=="Taurus"){horo1=2;}
    if(zdk1=="Virgo"){horo1=2;}
    if(zdk1=="Capricorn"){horo1=2;}
    if(zdk1=="Gemini"){horo1=3;}
    if(zdk1=="Libra"){horo1=3;}
    if(zdk1=="Aquarius"){horo1=3;}
    if(zdk1=="Cancer"){horo1=4;}   
    if(zdk1=="Scorpio"){horo1=4;}    
    if(zdk1=="Pisces"){horo1=4;}
    
    cin>>zdk2;
    if(zdk2=="Aries"){horo2=5;}
    if(zdk2=="Leo"){horo2=5;}
    if(zdk2=="Sagittarius"){horo2=5;}
    if(zdk2=="Taurus"){horo2=6;}
    if(zdk2=="Virgo"){horo2=6;}
    if(zdk2=="Capricorn"){horo2=6;}
    if(zdk2=="Gemini"){horo2=7;}
    if(zdk2=="Libra"){horo2=7;}
    if(zdk2=="Aquarius"){horo2=7;}
    if(zdk2=="Cancer"){horo2=8;}   
    if(zdk2=="Scorpio"){horo2=8;}    
    if(zdk2=="Pisces"){horo2=8;}
     
    switch (horo1){
        case 1:
            if (horo2==5){
            cout<<zdk1<<" and "<<zdk2<<" are compatible Fire signs.";
            }else {
            cout<<zdk1<<" and "<<zdk2<<" are not compatible signs.";
            }break;
        case 2:if (horo2==6){
            cout<<zdk1<<" and "<<zdk2<<" are compatible Earth signs.";
            }else {
            cout<<zdk1<<" and "<<zdk2<<" are not compatible signs.";
            }break;
        case 3:if (horo2==7){
            cout<<zdk1<<" and "<<zdk2<<" are compatible Air signs.";
            }else {
            cout<<zdk1<<" and "<<zdk2<<" are not compatible signs.";
            }break;
        case 4:if (horo2==8){
            cout<<zdk1<<" and "<<zdk2<<" are compatible Water signs.";
            }else {
            cout<<zdk1<<" and "<<zdk2<<" are not compatible signs.";
            }break;
    }
      
    
    //Exit the Program - Cleanup
    return 0;
}