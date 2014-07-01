/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on June 28, 2014, 12:39 PM
 * Converts Celsius to Fahrenheit
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    
    float temp_C, temp_F;
    cout << "Press enter after every number you type.\n";
    cout << "What is the temperature in Celsius?\n";
    cin >> temp_C;
    
    temp_F = (9.0/5.0)* temp_C + 32.0;
    // gives miles per gallon
    
    cout <<"\n";
    
    cout.setf(ios::fixed);
    cout.precision(1);
    
    cout <<"If it's " <<temp_C<<" degrees Celsius.\n";
    cout <<"Then, it's "<<temp_F<<" degrees Fahrenheit.\n";
            
            

    return 0;
}