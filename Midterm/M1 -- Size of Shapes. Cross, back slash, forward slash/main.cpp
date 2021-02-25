/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on January 28,2021 10:53PM
 * Purpose:  Cross one-side or the other
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
 
        
    
    //Exit
    return 0;
}

   
