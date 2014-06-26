/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on June 25, 2014, 7:34 PM
 * Purpose: Assignment 1
 */

#include <iostream>
using namespace std;
int main() 
{
    int number_one, number_two, sum_one_and_two, product_one_and_two;
    cout << "Press return after entering a number.\n";
    cout << "Enter first integer:\n";
    cin >> number_one;
    cout << "Enter second integer:\n" ;
    cin >> number_two;
    sum_one_and_two = number_one + number_two;
    product_one_and_two = number_one * number_two;
    cout << "If you have ";
    cout << number_one;
    cout << " and " ;
    cout << number_two;
    cout << " the sum and product respectively are\n" ;
    cout << sum_one_and_two<<endl;
    cout << product_one_and_two<<endl;
    cout << "Thank you for playing!\n" ;
    return 0;
}

