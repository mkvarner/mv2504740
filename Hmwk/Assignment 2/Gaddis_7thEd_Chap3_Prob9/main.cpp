/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on June 28, 2014, 12:39 PM
 * Total monthly and annual cost of automobile expenses 
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    
    double loan, insurance, gas, oil, tires, maintenance, total, yearly;
    cout << "Press enter after every number you type.\n";
    cout << "Enter the monthly cost for:\n";
    cout << "Loan payment:\n";
    cin >> loan;
    cout << "Insurance:\n";
    cin >> insurance;
    cout << "Gas:\n";
    cin >> gas;
    cout <<"Oil:\n";
    cin >> oil;
    cout <<"Tires:\n";
    cin >> tires;
    cout <<"Maintenance:\n";
    cin >> maintenance;
    
    total = loan + insurance + gas + oil + tires + maintenance;
    // total expenses
    yearly = total * 12;
    //yearly expenses 
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout <<"\n";
    cout <<"Your monthly expenses are $" <<total<<" per month.\n";
    cout <<"Which is $"<<yearly<<" per year.\n";
            
            

    return 0;
}
