/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on June 25, 2014, 7:34 PM
 * Write program inputs 2 integers and outputs
 * both their sum and their product
 */

#include <iostream>
using namespace std;
int main() 
{
    int number_one, number_two, sum_one_and_two, product_one_and_two;
    cout << "Press return after entering a number.\n";
    cout << "Enter first integer:\n";
    cin >> number_one;
    //first integer 
    
    cout << "Enter second integer:\n" ;
    cin >> number_two;
    //second integer
    
    sum_one_and_two = number_one + number_two;
    product_one_and_two = number_one * number_two;
    cout << "If you have ";
    cout << number_one;
    cout << " and " ;
    cout << number_two;
    cout << " the sum and product respectively are\n" ;
    cout << sum_one_and_two<<endl;
    //sum of both integers
    
    cout <<"and" <<endl;
    cout << product_one_and_two<<endl;
    //product of both integers
    
    cout << "Thank you for playing!\n" ;
    return 0;
}

