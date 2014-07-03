/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 2, 2014, 7:02 PM
 * Electromagnetic Spectrum 
 */


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) 
{
    float freq;
    cout <<"Press enter after every entry.\n";
    cout <<"Enter the frequency:\n";
    cin >> freq;
    
    if (freq >= (pow(10, 3)))
        cout <<"Radio";
    
    else if (freq <pow(10,3)&& freq >= (pow(10,-2)))
        cout <<"Microwave";
    
    else if (freq < pow(10,-2)&& freq >= (pow(10,-5)))
        cout <<"Infrared";
        
    else if (freq < pow (10,-5)&& freq >= (pow(0.5,-5)))
        cout <<"Visible";
    
    else if (freq < pow(0.5,-5)&& freq >= (pow(10,-8)))
        cout <<"Ultraviolet";
         
    else if (freq < pow (10,-8) && freq >= (pow(10,-10)))
        cout <<"X-ray";
             
    else
        cout <<"Gamma ray";
       
    cout <<"\n";
    
    
    
    return 0;
}