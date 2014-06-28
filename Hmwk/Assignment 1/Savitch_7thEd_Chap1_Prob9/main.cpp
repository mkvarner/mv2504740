/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on June 25, 2014, 7:34 PM
 * Purpose: Assignment 1
 */

#include <iostream>
using namespace std;
int main() 
{
    char time_sec, distance_feet;
    cout << "Press return after entering a number.\n";
    cout << "Enter the time in seconds:\n";
    cin >> time_sec;
    cin >> distance_feet = 32 * time_sec * time_sec /2
    cout << "If object is dropped and in freefall for"<<time_sec<< " then,";
    cout <<"it would fall" <<distance_feet<<endl;
    return 0;
}