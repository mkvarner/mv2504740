/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on June 28, 2014, 12:39 PM
 * Min amount of insurance to buy for your property 
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    
    double insurance, value, per_gallon;
    cout << "Press enter after every number you type.\n";
    cout << "How much is replacement cost of building in dollars?\n";
    cin >> value;
    
    insurance = value * 0.8;
    // this is 80% of the amount it would cost to replace structure 
    
    cout <<"\n";
    cout.setf(ios::fixed);
    cout.precision(2);
    cout <<"If it would cost $" <<value<<" to replace the building\n";
    cout <<"then, the minimum amount of insurance you should buy\n";
    cout <<"is $"<<insurance<<".\n";
            
            

    return 0;
}