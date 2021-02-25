/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on January 29, 2021 1:29 PM
 * Purpose:  Convert a number to English check amount
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
    unsigned short number;
    
    int n1000s,
        n100s,
        n10s,
        n1s;
        
        
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    
    
    
    
    n1000s=number/1000;  //calculates 1000'S
    number=number-(n1000s*1000); //Subtract from the original input
    n100s=number/100;    //calculates 100's
    number=number-(n100s*100); //subtract from next input
    n10s=number/10;    //calculates 10's
    number=number-(n10s*10);    //subtract from next input
    n1s=number;         //singles value
    
    //Output the check value
    
    //1000's statements
     switch(n1000s){
        case 3:cout<<"Three Thousand ";break;
        case 2:cout<<"Two Thousand ";break;
        case 1:cout<<"One Thousand ";break;
    }
    //100's statements 
    switch(n100s){
        case 9:cout<<"Nine Hundred ";break;
        case 8:cout<<"Eight Hundred ";break;
        case 7:cout<<"Seven Hundred ";break;
        case 6:cout<<"Six Hundred ";break;
        case 5:cout<<"Five Hundred ";break;
        case 4:cout<<"Four Hundred ";break;
        case 3:cout<<"Three Hundred ";break;
        case 2:cout<<"Two Hundred ";break;
        case 1:cout<<"One Hundred ";break;
    }
    //10's statements
    switch(n10s){
        case 9:cout<<"Ninety ";break;
        case 8:cout<<"Eighty ";break;
        case 7:cout<<"Seventy ";break;
        case 6:cout<<"Sixty ";break;
        case 5:cout<<"Fifty ";break;
        case 4:cout<<"Forty";break;
        case 3:cout<<"Thirty ";break;
        case 2:cout<<"Twenty ";break;
    }
    
    //statements bewteen 10 thru 19
    
    if (n10s==1)
    {    cout<<(n1s==9?"Nineteen ":
               n100s==8?"Eighteen ":
               n100s==7?"Seventeen":
               n100s==6?"Sixteen":
               n100s==5?"Fifteen ":
               n100s==4?"Fourteen":
               n100s==3?"Thirteen ":
               n100s==2?"Twelve ":
               n100s==1?"Eleven ":
               n1s==0?"Ten ":"");
    }
    
    else {

        //singles values
    switch(n1s){
        case 9:cout<<"Nine ";break;
        case 8:cout<<"Eight ";break;
        case 7:cout<<"Seven ";break;
        case 6:cout<<"Six ";break;
        case 5:cout<<"Five ";break;
        case 4:cout<<"Four ";break;
        case 3:cout<<"Three ";break;
        case 2:cout<<"Two ";break;
        case 1:cout<<"One ";break;
    }
 
    }
    
    cout<<"and no/100's Dollars"<<endl;
    
    //Exit
    return 0;
}