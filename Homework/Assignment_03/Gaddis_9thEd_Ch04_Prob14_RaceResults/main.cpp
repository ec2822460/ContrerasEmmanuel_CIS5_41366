/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 16, 2021, 8:30 PM
 * Purpose:  Race Results (Names and Times)
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <cmath>
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
    int rnTim1,
        rnTim2,
        rnTim3;
    
    string name1,
           name2,
           name3;
    
    //Initialize Variables
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cin>>name1>>rnTim1;
    cin>>name2>>rnTim2;
    cin>>name3>>rnTim3;
    
    
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    
        if (rnTim1<rnTim2 && rnTim2<rnTim3)
    {       cout<<name1<<"\t"<<setw(3)<<rnTim1<<endl;
            cout<<name2<<"\t"<<setw(3)<<rnTim2<<endl;
            cout<<name3<<"\t"<<setw(3)<<rnTim3;
    }
    
        if (rnTim1<rnTim3 && rnTim3<rnTim2)
    {       cout<<name1<<"\t"<<setw(3)<<rnTim1<<endl;
            cout<<name3<<"\t"<<setw(3)<<rnTim3<<endl;
            cout<<name2<<"\t"<<setw(3)<<rnTim2;
     
    }    

        if (rnTim2<rnTim1 && rnTim1<rnTim3)
    {       cout<<name2<<"\t"<<setw(3)<<rnTim2<<endl;
            cout<<name1<<"\t"<<setw(3)<<rnTim1<<endl;
            cout<<name3<<"\t"<<setw(3)<<rnTim3;
        
    }

        if (rnTim2<rnTim3 && rnTim3<rnTim1)
    {       cout<<name2<<"\t"<<setw(3)<<rnTim2<<endl;
            cout<<name3<<"\t"<<setw(3)<<rnTim3<<endl;
            cout<<name1<<"\t"<<setw(3)<<rnTim1;
        
        
    }

        if (rnTim3<rnTim1 && rnTim1<rnTim2)
    {       cout<<name3<<"\t"<<setw(3)<<rnTim3<<endl;
            cout<<name1<<"\t"<<setw(3)<<rnTim1<<endl;
            cout<<name2<<"\t"<<setw(3)<<rnTim2;
   
    }

        if (rnTim3<rnTim2 && rnTim2<rnTim1)
    {       cout<<name3<<"\t"<<setw(3)<<rnTim3<<endl;
            cout<<name2<<"\t"<<setw(3)<<rnTim2<<endl;
            cout<<name1<<"\t"<<setw(3)<<rnTim1;

    }
    
    
    //Exit the Program - Cleanup
    return 0;
}