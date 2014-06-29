/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on June 28, 2014, 12:39 PM
 * calculates how many widgets on pallet
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    
    double tot_widget, tot_pounds, pallet, plus;
    cout << "Press enter after every number you type.\n";
    cout << "How much does pallet weigh by itself in pounds?\n";
    cin >> pallet;
    
    cout << "How much does pallet weigh with widgets stacked on it in pounds?\n";
    cin >> plus;
    
    tot_pounds = plus - pallet; //weight of all widgets
    tot_widget = tot_pounds / 9.2; //9.2 is how much one widget weighs  
    
    cout.setf(ios::fixed);
    cout.precision(0);
    
    cout <<"If your total weight of pallet and widgets is "<<plus<<" pounds\n";
    cout <<"then, you have "<<tot_widget<<" widgets.\n";
            
            

    return 0;
}