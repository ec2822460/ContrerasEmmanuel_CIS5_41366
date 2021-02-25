/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on January 31, 2021 1:07 PM
 * Purpose:  Menu to be used in the Midterm, future homework and the Final
 *           Add System Libraries and Functions as needed.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

float packageA(int);
float packageA(int hours)
{int addHrs; float pkA;
    if (hours>20)
        { addHrs=hours-20;
            pkA=addHrs*0.85f+(0.95*10)+16.99;
        }
        else if (hours<=20&&hours>10)
        { addHrs=hours-10;
            pkA=addHrs*0.95f+16.99;
        }
        else pkA=16.99;
 return pkA;   
}

float packageB(int hours)
{int addHrs; float pkB;
   if (hours>30)
        {addHrs=hours-30;
            pkB=addHrs*0.64f+(0.74*10)+26.99; 
        }
        else if (hours<=30&&hours>20)
        {addHrs=hours-20;
            pkB=addHrs*0.74f+26.99;
        }  
        else pkB=26.99; 
  return pkB;  
}

int fctrl(int);
int fctrl(int n)
{   int fact=1;
     for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            default:   def(inN);
	}
    }while(inN<7);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){ 
    
    unsigned short x;
    char shape;       //f-> forward b->backward x->cross
    int i,
        j,
        num,
        count;
    
    
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    
    //since output is delivered row and individual columns 
    //we have to complete first row and it's columns before we go on to next row
    
     //these type of problems require loops within loops
    
    //Draw the shape
    
    
    if(shape=='x'&&x%2==1)      //tests if shape is X-CROSS and x is ODD
        
    
        for (int i = 1; i <= x; i++) {          // loop for rows one by one             
          num=x;  
         
        for (int j = 1; j <= x; j++)            // loop for characters of current row
        { 
          
  
            if (j == i || j == (x + 1 - i)) 
                {cout<< num;                    //outputs the current number
                   
                }
            else
                cout << " ";                    // the space bewtween numbers
                num=num-1;                      // if a space is created, 
                                                // we have to decrease the original number by 1 every time 
        } 
   
        cout << endl; 
    } 
    
     
    if(shape=='x'&&x%2==0)      //tests if shape is X-CROSS and x is EVEN
        
    
        for (int i = 1; i <= x; i++) {          // loop for rows one by one             
         
          num=1;                                //number must start at 1 since EVEN Crosses 
                                                //are differente and start at 1
         
        for (int j = 1; j <= x; j++)            // loop for characters of current row
        { 
          
  
            if (j == i || j == (x + 1 - i)) 
                {cout<< num;                    //outputs the current number
                   
                }
            else
                cout << " ";                    // the space bewtween numbers
                num=num+1;                      // if a space is created, 
                                                // we have to increase the number by 1 every time 
        } 
   
        cout << endl; 
    } 
        
    
    
    if(shape=='b'&&x%2==1)                      //tests if shape is backward slash and x is ODD
        
    
        for (int i = 1; i <= x; i++) {          // loop for rows one by one             
          num=x;  
         
        for (int j = 1; j <= x; j++)            // loop for characters of current row
        { 
          
  
            if (j == i || j == x +1) 
                {cout<< num;                    //outputs the current number
                   
                }
            else
                cout << " ";                    // the space bewtween numbers
                num=num-1;                      // if a space is created, 
                                                // we have to decrease the original number by 1 every time 
        } 
   
        cout << endl; 
    } 
    
    
    if(shape=='b'&&x%2==0)                      //tests if shape is backward slash and x is EVEN
        
    
        for (int i = 1; i <= x; i++) {          // loop for rows one by one             
          num=1;  
         
        for (int j = 1; j <= x; j++)            // loop for characters of current row
        { 
          
  
            if ( j ==i || j == x + 1) 
                {cout<< num;                    //outputs the current number
                   
                }
            else
                cout << " ";                    // the space bewtween numbers
                num=num+1;                      // if a space is created, 
                                                // we have to increase the original number by 1 every time 
        } 
   
        cout << endl; 
    } 
    
        
    
    if(shape=='f'&&x%2==1)                      //tests if shape is forward slash and x is ODD
        
    
        for (int i = 1; i <= x; i++) {          // loop for rows one by one             
          num=x;  
         
        for (int j = 1; j <= x; j++)            // loop for characters of current row
        { 
          
  
            if ( j == (x + 1 - i)) 
                {cout<< num;                    //outputs the current number
                   
                }
            else
                cout << " ";                    // the space bewtween numbers
                num=num-1;                      // if a space is created, 
                                                // we have to decrease the original number by 1 every time 
        } 
   
        cout << endl; 
    } 
    
        if(shape=='f'&&x%2==0)                  //tests if shape is foward slash and x is EVEN
        
    
        for (int i = 1; i <= x; i++) {          // loop for rows one by one             
          num=1;  
         
        for (int j = 1; j <= x; j++)            // loop for characters of current row
        { 
          
  
            if ( j == (x + 1 - i)) 
                {cout<< num;                    //outputs the current number
                   
                }
            else
                cout << " ";                    // the space bewtween numbers
                num=num+1;                      // if a space is created, 
                                                // we have to increase number by 1 every time 
        } 
   
        cout << endl; 
    } 
    
}

void problem2(){
       //Declare all Variables Here
    
    char    char1,      //these are the variables for the characters being types in 
            char2,      //we must use "char" because the input might include letters
            char3,      //instead of numbers
            char4;
    
    int     num1,       //I will use these "int" variables to convert char values
            num2,       //to their ASCII values and then turn into int 0-9 or turn into
            num3,       // and integer equal to it's ASCII value
            num4;
    
    //Input or initialize values Here
    
    num1=num2=num3=num4=0;      //always initialize just in case
    
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>char1;
    cin>>char2;
    cin>>char3;
    cin>>char4;
    
    
    //the following code converts my char values into integers 0-9
    //or leaves them as the origical "non-number" character
    
    if (char4>=48&&char4<=57)
            num4=char4-48;
    else    num4=char4;


     if (char3>=48&&char3<=57)
            num3=char3-48;
    else    num3=char3;
    
     if (char2>=48&&char2<=57)
            num2=char2-48;
    else    num2=char2;

    if (char1>=48&&char1<=57)
            num1=char1-48;
    else    num1=char1;


   
    //Histogram Here
    
   //now i check if the values are between 0-9
   //if so, run a "while" loop to add "*"
   //if value greater than 9, then just add "?"
   //I originally tried creating a function called STARPOWER()
   //that ran the "while" loops for me, but for some unknown reason
   //it would crash or time our CODE-E. So i did it the long way.
   
   //Sorry.
   
    cout<<char4;
    if(num4>9)
        cout<<" ?"<<endl;
    else 
    {int count=1;
        cout<<" ";
        while(count<=num4)
        { cout<<"*";
            count++;
        }
        cout<<endl;
        
    }
    
    
    cout<<char3;
    if(num3>9)
        cout<<" ?"<<endl;
    else 
    {int count=1;
        cout<<" ";
        while(count<=num3)
        { cout<<"*";
            count++;
        }
        cout<<endl;
    }
    
    
    cout<<char2;
    if(num2>9)
        cout<<" ?"<<endl;
    else 
    {int count=1;
        cout<<" ";
        while(count<=num2)
        { cout<<"*";
            count++;
        }
        cout<<endl;
    }
    
    cout<<char1;
    if(num1>9)
        cout<<" ?"<<endl;
    else 
    {int count=1;
        cout<<" ";
        while(count<=num1)
        { cout<<"*";
            count++;
        }
        cout<<endl;
    }
 
 
    
}
    
    
void problem3(){
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
    
    
}

void problem4(){
    //Declare all Variables Here
    char package;           //customer package selection
    unsigned short hours,   //hours customer used
            addHrs;         //additional hours over limit
    
    float totChrg,          //Total charge for package chosen
            packA,          //total charge for usage with package A
            packB,          //total charge for usage with package B
            packC;          //total charge for usage with package C
            
            
    
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
  

    
    //Basic Charges
    
    if(package=='a'||package=='A')
        if (hours>20)
        { addHrs=hours-20;
            packA=addHrs*0.85f+(0.95*10)+16.99;
        }
        else if (hours<=20&&hours>10)
        { addHrs=hours-10;
            packA=addHrs*0.95f+16.99;
        }
        else packA=16.99;
    
    if(package=='b'||package=='B')
        if (hours>30)
        {addHrs=hours-30;
            packB=addHrs*0.64f+(0.74*10)+26.99; 
        }
        else if (hours<=30&&hours>20)
        {addHrs=hours-20;
            packB=addHrs*0.74f+26.99;
        }  
        else packB=26.99;
                
    if(package=='c'||package=='C')
        packC=36.99;
    
    if(package=='a'||package=='A')
        totChrg=packA;
    if(package=='b'||package=='B')
        totChrg=packB;
    if(package=='c'||package=='C')
        totChrg=packC;
    
   
        
    //Output the Charge
    cout<<fixed<<setprecision(2);
    
    cout<<"$"<<totChrg;
    cout<<" ";
    
   
   
   
   if(totChrg>37.00)
        cout<<"C $"<<totChrg-36.99<<endl;
    
    else if (totChrg>=36.99&&packageB(hours)>36.66)    
        cout<<"C $0.00"<<endl;
    
    else if(totChrg>26.99)
        cout<<"B $"<<totChrg-packageB(hours)<<endl;
    
    else if(totChrg>16.99)
        cout<<"A $"<<totChrg-packageA(hours)<<endl;
    
    else cout<<"A $0.00"<<endl;

  
    
}

void problem5(){
    
     //Declare all Variables Here
    float payRate;
    unsigned short hrsWrkd;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
 
  
    //Calculate Paycheck
    cout<<fixed<<setprecision(2);
    
    if (hrsWrkd>40)
        cout<<"$"<<(hrsWrkd-40)*(payRate*2)+(20*(payRate*1.5))+(20*payRate)<<endl;
    
    if (hrsWrkd<=40&&hrsWrkd>20)
        cout<<"$"<<((hrsWrkd-20)*(payRate*1.5))+(20*payRate)<<endl;
    
    if (hrsWrkd<=20)
        cout<<"$"<<payRate*hrsWrkd<<endl;
    
   
        
    
}

void problem6(){
    
    //Declare all Variables Here
    float x,fx,term;
    
    int     nterms,
            
            fact;
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    
  
    
    
    //Calculate Sequence sum here
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
    
    
}