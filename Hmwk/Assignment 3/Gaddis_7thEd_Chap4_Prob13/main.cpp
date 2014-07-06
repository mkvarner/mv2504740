/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 2, 2014, 9:39 PM
 * Shipping Charges
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) 
{
    
    float num1, num2, charge;
    cout << "Press enter after every number you type.\n";
    cout << "Enter weight of package in Kg:\n";
    cin >> num1;
    
    cout << "Enter distance package needs to be shipped in miles:\n";
    cin >> num2;
    
    
    cout<<"\n";
    
    if (num1 <= 2)
        charge = 1.10 *(num2/500); 
        cout <<"You owe"<<charge<<endl;
    
    else if (num1 >=6)
        charge = 2.20 *(num2/500); 
        cout <<"You owe"<<charge<<endl;
    
    else
        cout <<"Rectangle 1 has a greater area.";
    
      cout<<"\n";
            

    return 0;
}