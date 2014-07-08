/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 2nd, 2014, 9:24 PM
 * Is the month magic
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    int month, magic, day, year;
    
    //Acquire the Month
    cout<<"Type in a month in numeric form:\n";
    cin>>month;
    cout<<"Type in a day in numeric form:\n";
    cin>>day;
    cout<<"Type in a two-digit year;\n";
    cin>>year;
    
    magic = month * day;

    if (magic == year)     
         cout<<"The date is magic.";

    else
        cout<<"The date is not magic.";
}