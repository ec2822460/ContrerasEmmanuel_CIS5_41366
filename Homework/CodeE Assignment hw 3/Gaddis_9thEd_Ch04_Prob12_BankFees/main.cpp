/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 16, 2021, 4:59 PM
 * Purpose:  Program to calculate Bank Fees
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    
    int chks;         //number of checks customer used this month
        
            
    float mthFee,      //this is the standard monthly fee just for having an account
          balnc,       //customer starting balance
          chkFee,      //the variable used to determine check fee charged
          lwBalFee,    //low balance fee variable
          newBal,      //customer new balance after Fees
          LnewBal,      // this is the new balance that includes low balance fee $15
          GnewBal,       //this is the new balance without low balance fee
          noFee,        //no low balance fee 
          lwbal;        //variable if balance right after monthly fee is under $400
    
    //Initialize Variables
    mthFee=10.00,
    lwBalFee=15.00,
    noFee=0.00,
     
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>balnc>>chks;
    
    //Map Inputs to Outputs -> Process
    
                if (chks<0) 
                    cout<<chks<<" is an invalid number of checks!"<<endl;
                    
                if (chks>=0 && chks<20)
                    chkFee= chks*0.10f;
                
                if (chks<=39 && chks>=20)
                    chkFee= chks*0.08f;
                
                if (chks<=59 && chks>=40)
                    chkFee= chks*0.06f;
            
                if (chks>=60)
                    chkFee= chks*0.04f;
                        
                
        lwbal= balnc - mthFee;  
        LnewBal= balnc - mthFee - lwBalFee - chkFee;
        GnewBal= balnc - mthFee - chkFee;
    
    //Display Inputs/Outputs
    cout<<fixed<<showpoint<<setprecision(2);
    
    if (balnc<0)
        cout<<"Your account is severely overdrawn"<<endl; 
        
    if (balnc <400 && balnc >0)
    {   cout<<"Balance     $"<<setw(9)<<balnc<<endl;
        cout<<"Check Fee   $"<<setw(9)<<chkFee<<endl;
        cout<<"Monthly Fee $"<<setw(9)<<mthFee<<endl;
        cout<<"Low Balance $"<<setw(9)<<lwBalFee<<endl;
        cout<<"New Balance $"<<setw(9)<<LnewBal;
    }
     
    if (balnc>=400)
        
    {   
        cout<<"Balance     $"<<setw(9)<<balnc<<endl;
        cout<<"Check Fee   $"<<setw(9)<<chkFee<<endl;
        cout<<"Monthly Fee $"<<setw(9)<<mthFee<<endl;
        cout<<"Low Balance $"<<setw(9)<<noFee<<endl;
        cout<<"New Balance $"<<setw(9)<<GnewBal;
    }  
    
    
  
        
    //Exit the Program - Cleanup
    return 0;
}