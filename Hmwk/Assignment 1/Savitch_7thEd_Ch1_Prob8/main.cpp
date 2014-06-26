/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on June 25, 2014, 7:34 PM
 * Purpose: Assignment 1
 */

#include <iostream>
#include <iomanip> 
using namespace std;
int main() 
{
    int quarter, dime, nickel, tot_quarter, tot_dime, tot_nickel, tot_amount;
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of quarters:\n";
    cin >> quarter;
    cout << "Enter the number of dimes:\n" ;
    cin >> dime;
    cout << "Enter the number of nickels:\n";
    cin >> nickel;
    cout <<setprecision(3)<<endl;
    tot_quarter = quarter * .25;
    tot_dime = dime * .10;
    tot_nickel = nickel * .05;
    tot_amount = tot_quarter + tot_dime + tot_nickel;
    cout << "you have " ;
    cout << "$ "<<tot_amount<<endl;
    return 0;
}
