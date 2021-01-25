/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on January 20, 2021
 * Purpose: Lab Assignment #4 -- Creating a Menu to contain HW #4 projects
 */

//System Level Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions


//Function Prototypes
float MPGCONV(float, float);
    float MPGCONV(float miles, float gallons)
    {
        return miles/gallons;
    }

float INFLRT(float, float);
    float INFLRT(float current, float previous)
    {
        return (current-previous)/previous;
    }

    
float INCR(float, float);
    float INCR(float current, float percent)
    {
        return current * (1+ percent);
    }


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



//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu for Homework #4"<<endl;
    cout<<"Type 0 for Gaddis Sums"<<endl;
    cout<<"Type 1 for Gaddis Pennies"<<endl;
    cout<<"Type 2 for Gaddis Min and Max"<<endl;
    cout<<"Type 3 for Gaddis Rectangle"<<endl;
    cout<<"Type 4 for Gaddis Pattern"<<endl;
    cout<<"Type 5 for Savitch Liters to Gallons and MPG"<<endl;
    cout<<"Type 6 for Savitch MPG Comparison"<<endl;
    cout<<"Type 7 for Savitch Rate of Inflation"<<endl;
    cout<<"Type 8 for Savitch Rate of Inflation and Increases"<<endl;
    cout<<"Type 9 for Savitch Maximum of inputs"<<endl;
    
    cin>>choice;
    
    switch(choice){
        case '0':
            //Declare Variables
        int numInpt,        //variable for the inputted integer
        sum;         //the variable that holds the Summation
            
    
    //Initialize Variables
         cin>>numInpt;  
         sum=0;
            
    
    //Map Inputs to Outputs -> Process
    do 
    {
        sum += numInpt;
        numInpt -= 1;
    
    } while (numInpt>0);
            
    //Display Inputs/Outputs
    
    cout<<"Sum = "<<sum;
    
            break;
        
        
        case '1':
            
          //Declare Variables
         
        {    
            
        int  days,   //input number of days pennies have been doubling
             totPns, //total number of pennies
             pnns,   //amount in pennies
             count;  //counter
    
            
            
            
    //Initialize Variables
        pnns=1;
   
        cin>>days; 
   
            
    //Map Inputs to Outputs -> Process
            
    if (days<=0)
        {cout<<"input "<<days<<" is invalid";
        }
        
    for (count=0;count<days;count++)
    {   totPns= totPns + pnns;
        pnns= pnns*2;
        
    }
                
    //Display Inputs/Outputs
    cout<<"Pay = $"<<totPns/100<<".";
    if ((totPns%100)<10)
        {cout<<"0"<<totPns%100;
        }
    else if ((totPns%100)>=10)
        {cout<<totPns%100;
        }
        
    
        }
            break;
        
        
        case '2':
            //Declare Variables
        {
    int numb,       //the numbers inputted
        smlst,      //smallest number in series
        lrgst;      //largest number in the series
    
    //Initialize Variables
    cin>>numb;
    
    smlst = lrgst = numb;
    
    //Map Inputs to Outputs -> Process
    
    while (numb != -99)
    {
        if (numb < smlst)
            smlst = numb;
        
        if (numb > lrgst)
            lrgst = numb;
        
        cin>>numb;
    }
    
    //Display Inputs/Outputs
    cout<<"Smallest number in the series is "<<smlst<<endl;
    cout<<"Largest  number in the series is "<<lrgst;
        }
            break;
        
        
        case '3':
            
    //Declare Variables
        {
            
     int numb,   //the number entered
        width,  //the counter for width of rectangle before "endl" command
        count;  //the universal counter
        
 
            
    char letter;        
    //Initialize Variables
    cin>>numb;
    cin>>letter;
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    for (width = 2; width<= numb; width++)
    {
        for (count=1; count<=numb; count++)
            cout<<letter;
        cout<<endl;
    }
    
    for (count=1; count<=numb; count++)
            cout<<letter;       
            
        }
    
        break;
        
            
            
        case '4':
            //Declare Variables
        {    int inpt,   //inputted number "10"
                width,  //counter for width of row
                count;  //universal counter
    
    //Initialize Variables
    cin>>inpt;
    //Map Inputs to Outputs -> Process
    for (width=1;width<=inpt;width++)
    {   for(count=1;count<=width;count++)
            {cout<<"+";
            }
    cout<<endl;
    cout<<endl;
    }
    
    for (width=inpt; width>=2; width--)
    {   for(count=1;count<=width;count++)
            {cout<<"+";
            }
    cout<<endl;
    cout<<endl;
    }
    cout<<"+";
    
        }    
            break;

        case '5':
            
    //Declare Variables
            
    {       
            float lits,     //amount of liters used by car
                    gals,     //amount of gallons after conversion
                     mls,      //amount of miles driven
                     miles,
                    gallons;
    
            char choice;
          
    //Initialize Variables
    float LITS2GALS=0.264179f;
    
   
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    do
    {
     cout<<"Enter number of liters of gasoline:"<<endl;
    cin>>lits;
    cout<<endl;
    cout<<"Enter number of miles traveled:"<<endl;
    cin>>mls;
    cout<<endl;
    gals= lits*LITS2GALS;
  

    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"miles per gallon:"<<endl;
    cout<<MPGCONV(mls,gals)<<endl;
    cout<<"Again:"<<endl;
    cin>>choice;
        if (choice=='y'||choice=='Y')
            cout<<endl;
    
    } while (choice=='y'||choice=='Y');   
    
        }        
            break;

            
            
        case '6':
             //Declare Variables
    
        {  
            
            float lits,     //amount of liters used by car
                    gals,     //amount of gallons after conversion
                    mls,      //amount of miles driven
                    miles,
                    gallons,
                    MPG1,   //MPG of car1
                    MPG2;   //MPG of car2
    
             char choice;
          
    //Initialize Variables
    float LITS2GALS=0.264179f;
    
   
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    do
    {
     cout<<"Car 1"<<endl;   
     cout<<"Enter number of liters of gasoline:"<<endl;
    cin>>lits;
    cout<<"Enter number of miles traveled:"<<endl;
    cin>>mls;
    gals= lits*LITS2GALS;
  
    MPG1=MPGCONV(mls,gals);
    
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"miles per gallon: "<<MPG1<<endl;
    cout<<endl;
    
    cout<<"Car 2"<<endl;
    cout<<"Enter number of liters of gasoline:"<<endl;
    cin>>lits;
    cout<<"Enter number of miles traveled:"<<endl;
    cin>>mls;
    gals= lits*LITS2GALS;
  
    MPG2=MPGCONV(mls,gals);
    
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"miles per gallon: "<<MPG2<<endl;
    cout<<endl;
    
    if (MPG1>MPG2)
        cout<<"Car 1 is more fuel efficient"<<endl;
    else cout<<"Car 2 is more fuel efficient"<<endl;
    
    cout<<endl;
    cout<<"Again:"<<endl;
    cin>>choice;
        if (choice=='y'||choice=='Y')
            cout<<endl;
    
    } while (choice=='y'||choice=='Y');   
    
            
        }   
            break;

        case '7':
            //Declare Variables
        {
            float   current,
            previous,
            crtPrc,  //current Price
            prvPrc,  //previous price
            prct;   //Percent Value
    
            char    choice;       
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
      do
    {
     cout<<"Enter current price:"<<endl;
    cin>>crtPrc;
    cout<<"Enter year-ago price:"<<endl;
    cin>>prvPrc;
    
    prct=INFLRT(crtPrc,prvPrc);
            
    cout<<fixed<<showpoint<<setprecision(2);
    
    cout<<"Inflation rate: "<<prct*100<<"%"<<endl;
    cout<<endl;
    cout<<"Again:"<<endl;
    cin>>choice;
        if (choice=='y'||choice=='Y')
            cout<<endl;
    
    } while (choice=='y'||choice=='Y');  
    

         
        }        
            break;
            
        case '8':
            //Declare Variables
        {
            float   current,
            previous,
            crtPrc,     //current Price
            prvPrc,     //previous price
            prct,       //Inflation Percent Value
            fstIncr,    //First increase after inflation
            sndIncr;    //Second increase after Inflation
            
            char    choice;       
     //Initialize Variables
    
    //Map Inputs to Outputs -> Process
      do
    {
     cout<<"Enter current price:"<<endl;
    cin>>crtPrc;
    cout<<"Enter year-ago price:"<<endl;
    cin>>prvPrc;
    
    prct=INFLRT(crtPrc,prvPrc);
    
    cout<<fixed<<showpoint<<setprecision(2);
    
    cout<<"Inflation rate: "<<prct*100<<"%"<<endl;
    cout<<endl;
    
    fstIncr= INCR(crtPrc,prct);
    sndIncr= INCR(fstIncr,prct);
    
    
    cout<<"Price in one year: $"<<fstIncr<<endl;
    cout<<"Price in two year: $"<<sndIncr<<endl;
    cout<<endl;
    cout<<"Again:"<<endl;
    cin>>choice;
        if (choice=='y'||choice=='Y')
            cout<<endl;
    
    } while (choice=='y'||choice=='Y');  
            
        }
        
            break;

            
        case '9':
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
    
            
            
            break;
             
        default:
            cout<<"Not an Option"<<endl;
    }
    
    //End of Switch Case

    //Clean Up
    
    //Exit stage right!
    return 0;
}