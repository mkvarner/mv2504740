/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Loan Calc
 */

#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;

int main(int argc, char** argv) 
{
    
    float payment1, payment2, loan, rate, months, rate_mon, num, den, cost;
    cout << "Press enter after every number you type.\n";
    cout << "Loan Amount:\n";
    cin >> loan;
    
    cout << "Number of months:\n";
    cin >> months;
    
    cout << "Interest rate per year in decimal form:\n";
    cin >> rate;
    
    //Rate per month
    rate_mon = rate / 12.0;

    //Payment Calc
    num = rate_mon * pow((1+rate_mon), months); //numerator
    den = (pow((1+ rate_mon), months))-1; //denominator     
    payment1 = num / den;
    payment2 = payment1 * loan; //Total payment
    cost = (payment2 * months) - loan; //Interest on your loan
    
    cout <<"\n";
    
    cout.setf(ios::fixed);
    cout.precision(2);

    cout <<"Your payment is $"<<payment2<<" per month.\n";
    cout <<"The cost of your loan is $"<<cost<<endl;
            
            

    return 0;
}