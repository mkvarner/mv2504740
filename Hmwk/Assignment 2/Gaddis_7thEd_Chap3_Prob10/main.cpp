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
    
    double temp_C, temp_F, convert;
    cout << "Press enter after every number you type.\n";
    cout << "What is the temperature in Celsius?\n";
    cin >> temp_C;
    
    convert = (9/5)*temp_C + 32;
    // gives miles per gallon
    
    setprecsion(2);
    cout <<"\n";
    cout <<"If it's " <<temp_C<<" degrees Celsius.\n";
    cout <<"Then, it's "<<temp_F<<" degrees Fahrenheit.\n";
            
            

    return 0;
}