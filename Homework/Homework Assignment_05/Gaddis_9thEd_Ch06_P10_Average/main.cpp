/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on February 21, 2021, 11:30 AM
 * Purpose:  Taking 5 scores and averaging top 4
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries


//Function Prototypes
 void getScre(int&, int&, int&, int&, int&);    // the functions as provided by professor 
 float calcAvg(int, int, int, int, int);
  int fndLwst(int, int, int, int, int);
  
  
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float tAvg;          //total average of top 4 scores 
           
    
    int score1,score2,score3,score4,score5;    //the FIVE inputted scores to be used by the functions
    
    
    //Initialize Variables
    cout<<"Find the Average of Test Scores"<<endl;
    cout<<"by removing the lowest value."<<endl;
    cout<<"Input the 5 test scores."<<endl;
    getScre(score1,score2,score3,score4,score5);    // the functions as provided by professor 
 
    
    
    //Map Inputs to Outputs -> Process
    
    tAvg=calcAvg(score1,score2,score3,score4,score5);
    
    //Display Inputs/Outputs
    
    
    cout<<fixed<<setprecision(1);
    cout<<"The average test score = "<<tAvg;
    
    
    
    //Exit the Program - Cleanup
    return 0;
}

void getScre(int& score1, int& score2, int& score3, int& score4, int& score5){   // the function that grabs the score inputs. 
 cin>>score1;
 cin>>score2;
 cin>>score3;
 cin>>score4;
 cin>>score5;
  
 if (score1<1||score1>100)
    cout<<"score1 is invalid. Input a value 1-100.";   //this section checks is score values are valid.
 if (score2<1||score2>100)
    cout<<"score1 is invalid. Input a value 1-100.";
if (score3<1||score3>100)
    cout<<"score1 is invalid. Input a value 1-100.";
if (score4<1||score4>100)
    cout<<"score1 is invalid. Input a value 1-100.";
if (score5<1||score5>100)
    cout<<"score1 is invalid. Input a value 1-100."; 
  
}
 
 
float calcAvg(int score1,int score2,int score3,int score4,int score5){
    float avg= score1 + score2 + score3 + score4 + score5 - fndLwst(score1, score2, score3, score4, score5); //calculates sum before averaging.
     avg= avg/4.0f;
 
    return avg;    
}

int fndLwst(int score1, int score2, int score3,int score4, int score5){  //the long way of sorting numbers.
    if (score1<score2&&score1<score3&&score1<score4&&score1<score5)
        return score1;
    if (score2<score1&&score2<score3&&score2<score4&&score2<score5)
        return score2;
    if (score3<score1&&score3<score2&&score3<score4&&score3<score5)
        return score3;
    if (score4<score1&&score4<score2&&score4<score3&&score4<score5)
        return score4;
    if (score5<score1&&score5<score2&&score5<score3&&score5<score4)
        return score5;
        
}
