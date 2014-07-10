/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 2, 2014, 9:39 PM
 * Seconds, minutes, hours conversion
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) 
{
    
    float num1, minute, hour, day;
    cout << "Press enter after every number you type.\n";
    cout << "Enter number of seconds:\n";
    cin >> num1;
    
    //Converts from input to minutes, hours, or days
    minute = num1/60;
    hour = num1/3600;
    day = num1/86400;
    
    cout<<"\n";
    if (num1 < 60)
        cout <<num1<<" seconds.";
    
    else if (num1 <3600&& num1 >= 60)
        cout <<minute<<" minutes.";
    
    else if (num1 < 86400&& num1 >= 3600)
        cout <<hour<<" hours.";
        
    else if (num1 >= 86400)
        cout <<day<<" days.";
             
    else
        cout <<"Invalid entry";
       
    cout <<"\n";
    
    
    
    return 0;
}