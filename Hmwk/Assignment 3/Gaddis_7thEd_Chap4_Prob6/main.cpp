/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 2, 2014, 9:39 PM
 *Mass and weight is object too heavy or too light
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) 
{
    
    float num1, greater, lesser, weight;
    cout << "Press enter after every number you type.\n";
    cout << "Enter object's mass in kg:\n";
    cin >> num1;
    
    
    weight = num1*9.8;
    
    cout<<"\n";
    
    cout<<"The object's weight is "<<weight<<" Newtons.\n";
    if (weight < 10)
        cout <<"Object is too light.";
    
    else if (weight > 1000)
        cout <<"Object is too heavy.";
    
    else
        cout <<"\n";
            

    return 0;
}