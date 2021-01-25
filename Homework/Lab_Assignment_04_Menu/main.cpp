/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on January 20, 2021
 * Purpose: Lab Assignment #4 -- Creating a Menu for  to contain HW #3
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

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu for Homework #3"<<endl;
    cout<<"Type 1 for Gaddis Sort Names"<<endl;
    cout<<"Type 2 for Gaddis Book Reward Points"<<endl;
    cout<<"Type 3 for Gaddis Bank Charges"<<endl;
    cout<<"Type 4 for Gaddis Race Results"<<endl;
    cout<<"Type 5 for Gaddis ISP Charges"<<endl;
    cout<<"Type 6 for Savitch Rock Paper Scissors"<<endl;
    cout<<"Type 7 for Savitch Roman Conversion"<<endl;
    cout<<"Type 8 for Savitch Compatible Signs"<<endl;
    
    cin>>choice;
    
    switch(choice){
        case '1':
            //Declare Variables
        {    string  name1,
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
        }
            break;
        
        
        case '2':
            
            //Declare Variables
    int bkCnt;  //number of books customer has purchased this month
        
    //Initialize Variables
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>bkCnt;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"Books purchased ="<<setw(3)<<bkCnt<<endl;
    
    if (bkCnt == 0)
        cout<<"Points earned   ="<<setw(3)<<"0";
    if (bkCnt == 1)
        cout<<"Points earned   ="<<setw(3)<<"5";
    if (bkCnt == 2)
        cout<<"Points earned   ="<<setw(3)<<"15";
    if (bkCnt == 3)
        cout<<"Points earned   ="<<setw(3)<<"30";
    if (bkCnt >= 4)
        cout<<"Points earned   ="<<setw(3)<<"60";
    
            
            break;
        
        
        case '3':
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
    
    
            break;
        
        
        case '4':
            
    //Declare Variables
    int rnTim1,
        rnTim2,
        rnTim3;
    
    {   string name1,
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
    }        
            break;
        
            
            
        case '5':
            //Declare Variables
    char pkge;      //this is the ISP package choice
    
    int hrsUsd,     //customer hour usage
        hrsLmt,     //the Limit hours pon a package
        ovrHrs;     //variable for amount of hours over limit
    
    float mthChrg,      //this is the monthly charge for each package
          totChrg;      //this is the TOTAL charge for all fees
    
    //Initialize Variables
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>pkge>>hrsUsd;
    
    //Map Inputs to Outputs -> Process
    switch(pkge)
    {
        case 'A':
        {  mthChrg = 9.95f;
           hrsLmt   = 10;
           ovrHrs   = 2;  
           break;
        }
        
        case 'B':
        {  mthChrg = 14.95f;
           hrsLmt   = 20;
           ovrHrs   = 1;  
           break;
        }
    
        case 'C':
        {  mthChrg = 19.95f;
           hrsLmt   = 0;
           ovrHrs   = 0;  
           break;
        } 
        
        default:cout<<pkge<<" is not a valid choice. Please chose package A, B or C."<<endl;
    }
    
    if (hrsUsd>744)
        cout<<hrsUsd<<" is beyond the allowed bandwidth."<<endl;
    
    if (hrsUsd>hrsLmt)
        totChrg= (hrsUsd - hrsLmt)*ovrHrs + mthChrg;
    else totChrg= mthChrg;    
    //Display Inputs/Outputs
    cout<<fixed<<setprecision(2);
    cout<<"Bill = $ "<<setw(5)<<totChrg;
            
            break;

        case '6':
            
    //Declare Variables
    char    inp1,      //Player 1 input
            inp2;      //Player 2 input
    
    int      chce1,     //convert input to simple integers
            chce2;
            
  
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>inp1>>inp2;
      
    
    //Map Inputs to Outputs -> Process
    if (inp1=='R'||inp1=='r')
        chce1=1;
    else if (inp1=='P'||inp1=='p')
            chce1=2;
    else if (inp1=='S'||inp1=='s')
            chce1=3;
    else cout<<inp1<<" is an invalid choice."<<endl;
    
    
    if (inp2=='R'||inp2=='r')
            chce2=1;
    else if (inp2=='P'||inp2=='p')
            chce2=2;
    else if (inp2=='S'||inp2=='s')
            chce2=3;
    
    else cout<<inp2<<" is an invalid choice."<<endl;
    
    
    //Display Inputs/Outputs
    if (chce1==chce2)
        cout<<"Nobody wins.";

    if (chce1==1 && chce2==2)
        cout<<"Paper covers rock.";
    if (chce1==1 && chce2==3)
        cout<<"Rock breaks scissors.";
    if (chce1==3 && chce2==1)
        cout<<"Rock breaks scissors.";
    if (chce1==3 && chce2==2)
        cout<<"Scissors cuts paper.";
    if (chce1==2 && chce2==1)
        cout<<"Paper covers rock.";
    if (chce1==2 && chce2==3)
        cout<<"Scissors cuts paper.";
    

            
            break;

        case '7':
             //Declare Variables
    unsigned short int arbYr,   //this is the Arabic number to convert
                       n1000,  //variable for 1000s digit
                        n100,   //variable for 100s digit
                        n10,    //variable for 10s digit
                        n1;     //variable for 1s digit
    
    //Initialize Variables
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>arbYr;
    
    n1000=(arbYr/1000)%10;
    n100=(arbYr/100)%10;
    n10=(arbYr/10)%10;
    n1=(arbYr)%10;
    
    
    //Map Inputs to Outputs -> Process
     if (arbYr<1000||arbYr>3000)
                cout<<arbYr<<" is Out of Range!";
            
            else
            {        
                cout<<arbYr<<" is equal to ";
                if(n1000==1)cout<<"M";
                if(n1000==2)cout<<"MM";
                if(n1000==3)cout<<"MMM";
                    
    
                if(n100==0)cout<<"";
                if(n100==1)cout<<"C";
                if(n100==2)cout<<"CC";
                if(n100==3)cout<<"CCC";
                if(n100==4)cout<<"CD";
                if(n100==5)cout<<"D";
                if(n100==6)cout<<"DC";
                if(n100==7)cout<<"DCC";
                if(n100==8)cout<<"DCCC";
                if(n100==9)cout<<"CM";
            
           
                if(n10==0)cout<<"";
                if(n10==1)cout<<"X";
                if(n10==2)cout<<"XX";
                if(n10==3)cout<<"XXX";
                if(n10==4)cout<<"XL";
                if(n10==5)cout<<"L";
                if(n10==6)cout<<"LX";
                if(n10==7)cout<<"LXX";
                if(n10==8)cout<<"LXXX";
                if(n10==9)cout<<"XC";    
                    
                   
                if(n1==0)cout<<"";
                if(n1==1)cout<<"I";
                if(n1==2)cout<<"II";
                if(n1==3)cout<<"III";
                if(n1==4)cout<<"IV";
                if(n1==5)cout<<"V";
                if(n1==6)cout<<"VI";
                if(n1==7)cout<<"VII";
                if(n1==8)cout<<"VIII";
                if(n1==9)cout<<"IX";
            }
            
            break;

        case '8':
            //Declare Variables
        {    string      zdk1,
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
      
    }        
            break;

            
        
        default:
            cout<<"Not an Option"<<endl;
    }//End of Switch Case

    //Clean Up
    
    //Exit stage right!
    return 0;
}