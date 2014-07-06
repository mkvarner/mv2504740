/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on June 25, 2014, 7:34 PM
 * Program that outputs distance and all
 * user needs to input is
 * time in seconds object is in freefall
 */

#include <iostream>
using namespace std;
int main() 
{
    float time_sec, distance_feet;
    cout << "Press return after entering a number.\n";
    cout << "Enter the time in seconds:\n";
    cin >> time_sec;
    
    distance_feet = 32.0 * time_sec * time_sec /2.0;
    //32 is feet per second i.e acceleration in English units
    
     cout.setf(ios::fixed);
    cout.precision(1);
    
    cout <<"\n";
    cout << "If object is dropped and in freefall for "<<time_sec<< " seconds,\n";
    cout <<"then, it would fall " <<distance_feet<<" feet\n";
    return 0;
}