/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 2, 2014, 9:39 PM
 * Which number is smaller and which is greater 
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) 
{
    
    float num1, num2, greater, lesser;
    cout << "Press enter after every number you type.\n";
    cout << "Enter first number:\n";
    cin >> num1;
    
    cout << "Enter second number:\n";
    cin >> num2;
    
    //Finds if 1st or 2nd number is greater
    greater = num1 >num2 ? num1 : num2;
    lesser = num1 <num2 ? num1 : num2;
    
    cout <<greater<<" is greater than "<<lesser<<endl;
            
            

    return 0;
}