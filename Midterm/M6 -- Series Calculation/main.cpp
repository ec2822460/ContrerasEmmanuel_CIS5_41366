/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on January 31, 2021 9:08 PM
 * Purpose:  Infinite Series
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float x,fx,term;
    int nterms;
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    
    //Calculate Sequence sum here

    term=x;     //term will be my exponential power term 
    fx=x;       // fx is the summation of all terms starting with the first term X
     
    
    
    for(int i=1;i<nterms;i++)
    {   int sign=1;     //this two lines create the 
        sign*=-1;       //alternating +1-1 series
        
        term=(sign*term*(x*x))          //this takes the alternator and multiplies the old exponential term and old factorial 
                                        //by the new exponential term and new factorial, which links them together
                
                /(2.0*i*(2.0*i+1));     //this bottom portion is the factorial portion and adds new factorials to the term 
        
        
        fx=fx+term;                     //This is the total SUM created by taking the newly formed 
                                        //alternating exponential term/factorials and adding
                                        //it to the previous summation.
                                        
                                        // this is the recommended technique instead of using pow(x,n) and fctrl(n).
    }
    
    
    
    
    //Output the result here
    cout<<fixed<<setprecision(6);
    cout<<fx<<endl;
    
    //Exit
    return 0;
}




/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on January 29, 2021 5:49 PM
 * Purpose:  Infinite Series
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
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


    
    
//  Alternating + -
//  The following code will alternate in the for loop with an output = 1,-1,1,-1,1,-1, ..........
int sign=-1;

for(int i=1;i<=n;i++)
{
sign*=-1;
cout<<sign<<endl;
}   
 


    switch(leadx){
        case 1:term=x;break;
        case 3:term=x*x*x;break;
        case 5:term=x*x*x*x*x;break;
        case 7:term=x*x*x*x*x*x*x;break;
        case 9:term=x*x*x*x*x*x*x*x*x;break;
        case 11:term=x*x*x*x*x*x*x*x*x*x*x;break;
        case 13:term=x*x*x*x*x*x*x*x*x*x*x*x*x;break;
    }
    
    switch(nterms){
        case 1: fx=x;break;
        case 2: fx=x-((x*x*x)/fctrl(3));break;
        case 3: fx=x-((x*x*x)/fctrl(3))+((x*x*x*x*x)/fctrl(5));break;
        case 4: fx=x-((x*x*x)/fctrl(3))+((x*x*x*x*x)/fctrl(5))-((x*x*x*x*x*x*x)/fctrl(7));break;
        case 5: fx=x-((x*x*x)/fctrl(3))+((x*x*x*x*x)/fctrl(5))-((x*x*x*x*x*x*x)/fctrl(7))+((x*x*x*x*x*x*x*x*x)/fctrl(9));break;
        case 6: fx=x-((x*x*x)/fctrl(3))+((x*x*x*x*x)/fctrl(5))-((x*x*x*x*x*x*x)/fctrl(7))+((x*x*x*x*x*x*x*x*x)/fctrl(9))-((x*x*x*x*x*x*x*x*x*x*x)/fctrl(11));break;
        case 7: fx=x-((x*x*x)/fctrl(3))+((x*x*x*x*x)/fctrl(5))-((x*x*x*x*x*x*x)/fctrl(7))+((x*x*x*x*x*x*x*x*x)/fctrl(9))-((x*x*x*x*x*x*x*x*x*x*x)/fctrl(11))+((x*x*x*x*x*x*x*x*x*x*x*x*x)/fctrl(13));break;
                                            
    }
            

  
    //Output the result here
    cout<<fixed;
    cout<<fx<<endl;
    
    //Exit
    return 0;
}