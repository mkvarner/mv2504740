/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 2, 2014, 9:39 PM
 * Calculate software sales
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) 
{
    
    float num1, cost, total1, total2, total3, total4;
    cout << "Press enter after every number you type.\n";
    cout << "Enter number of units sold:\n";
    cin >> num1;
    
    cost = num1 * 99; //Amount due before discount
    
    total1 = cost - (cost * 0.20); //10-19 units sold
    
    total2 = cost - (cost * 0.30); //20-49 units sold 

    total3 = cost - (cost * 0.40); //50-99 units sold

    total4 = cost - (cost * 0.50); //100 or more units sold
     
    cout.setf(ios::fixed);
    cout.precision(2);
    
    if (num1 >= 10 && num1 <= 19) 
        cout <<"Total cost is $"<<total1;
  
    else if (num1 >=20&&num1<=49) 
        cout<<"Total cost is $"<<total2;
  
    else if (num1 >=50&&num1<=99)
        cout<<"Total cost is $"<<total3;

    else if (num1 >=100)
        cout<<"Total cost is $"<<total4;
  
    else if (num1 <= 0)
        cout<<"Number of units needs to be greater than 0";
  
    else
        cout <<"No discount";
            
    return 0;
    }