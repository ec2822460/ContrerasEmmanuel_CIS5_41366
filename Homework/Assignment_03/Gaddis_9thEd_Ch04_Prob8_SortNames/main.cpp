/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 16, 2021, 3:59 PM
 * Purpose:  Sorting Names program
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
    string  name1,
            name2,
            name3;
    
    //Initialize Variables
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>name1>>name2>>name3;
    
    //Map Inputs to Outputs -> Process

    
    //Display Inputs/Outputs
        if (name1<name2 && name2<name3)
    {   cout<<name1<<endl;
        cout<<name2<<endl;
        cout<<name3;
    }
    
        if (name1<name3 && name3<name2)
    {   cout<<name1<<endl;
        cout<<name3<<endl;
        cout<<name2;
    }    

        if (name2<name1 && name1<name3)
    {   cout<<name2<<endl;
        cout<<name1<<endl;
        cout<<name3;
    }

        if (name2<name3 && name3<name1)
    {   cout<<name2<<endl;
        cout<<name3<<endl;
        cout<<name1;
    }

        if (name3<name1 && name1<name2)
    {   cout<<name3<<endl;
        cout<<name1<<endl;
        cout<<name2;
    }

        if (name3<name2 && name2<name1)
    {   cout<<name3<<endl;
        cout<<name2<<endl;
        cout<<name1;
    }
    
        else ;
    //Exit the Program - Cleanup
    return 0;
}