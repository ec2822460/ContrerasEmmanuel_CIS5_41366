/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 10, 2021, 6:57 PM
 * Purpose:  Land Calculation Assignment Problem #12
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>  //learned from Thursday Video from Student
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float acre,
            ttlsqft,
            ttlacres;
    
    //Initialize Variables
    acre= 43560;    //amount of square feet in Acre
    ttlsqft= 391876;    //amount of square feet starting out with 
    
    //Map Inputs to Outputs -> Process
            ttlacres= ttlsqft / acre;
    
    //Display Inputs/Outputs
    cout<<fixed<<showpoint<<setprecision(2);//learned from Thursday Video from Student
    cout<<ttlsqft<<" square feet is the same as "<<ttlacres<<" acres."<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}