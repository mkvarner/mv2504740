/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 21, 2014, 12:42 PM
 */

//System Libraries
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

//Global constants

//Function Prototypes

float calculateRetail(const int [4],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare the array and its maximum size
    const int MAXSZ=4;
    float cost, mark, total;
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Prompt for inputs
    cout<<"Item's wholesale cost: "<<endl;
    cin>>cost;
    cout<<"markup percent: "<<endl;
    cin>>mark;
    
    //Calculate the number of columns
   
mark = mark * .01;

//This is the function call
total = calculateRetail(cost, mark);
    
    
    //Output some interesting information
    cout<<"Retail value is & "<<calculateRetail(cost,mark)<<endl;
   
    
    //Exit stage right!
    return 0;
}