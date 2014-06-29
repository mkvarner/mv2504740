/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on June 25, 2014, 7:34 PM
 * Enter amount of quarters,dimes, and 
 * nickels and output the monetary value
 */

#include <iostream>
#include <iomanip> 
using namespace std;
int main() 
{
    double quarter, dime, nickel, tot_quarter, tot_dime, tot_nickel, tot_amount;
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of quarters:\n";
    cin >> quarter;
    cout << "Enter the number of dimes:\n" ;
    cin >> dime;
    cout << "Enter the number of nickels:\n";
    cin >> nickel;
    cout<<setprecision(3),fixed;
    tot_quarter = quarter * 0.25;
    tot_dime = dime * 0.10;
    tot_nickel = nickel * 0.05;
    tot_amount = tot_quarter + tot_dime + tot_nickel;
    cout << "you have " ;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << "$ "<<tot_amount<<endl;
    return 0;
}
