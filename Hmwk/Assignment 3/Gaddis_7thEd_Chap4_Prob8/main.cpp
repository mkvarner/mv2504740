/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on June 25, 2014, 7:34 PM
 * Enter amount of quarters,dimes, and 
 * input money amounts output less, equal, or more than a dollar
 */

#include <iostream>
#include<iomanip>

using namespace std;
int main(int argc, char** argv) 
{
    float quart, dim, nickel, p, tot_quart, pt, tot_dim, tot_nickel, tot_amount;
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of quarters:\n";
    cin >> quart;
    cout << "Enter the number of dimes:\n" ;
    cin >> dim;
    cout << "Enter the number of nickels:\n";
    cin >> nickel;
    cout << "Enter the number of pennies:\n";
    cin >> p;
    
    
    tot_quart = quart * 0.25; //quarter worth
    tot_dim = dim * 0.10;     //dimes worth
    tot_nickel = nickel * 0.05; //nickel worth
    pt = p * 0.01;              //pennies worth
    tot_amount = tot_quart + tot_dim + tot_nickel + pt; //Your total
  
    //Determines if you win or not
    if (tot_amount < 1)
        cout <<"Less than one dollar.";
    
    else if (tot_amount == 1)
        cout <<"Congratulations you WIN!";
    
    else if (tot_amount > 1)
        cout<<"More than one dollar.";
    
    else
        cout <<"Invalid entry";
    
      cout<<"\n";
            

    return 0;
}