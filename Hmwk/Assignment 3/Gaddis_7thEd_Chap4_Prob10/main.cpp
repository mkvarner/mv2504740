/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 2, 2014, 9:39 PM
 * Area of rectangles
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) 
{
    
    float num1, cost1, cost2, cost3, cost4, total1, total2, total3, total4, units;
    cout << "Press enter after every number you type.\n";
    cout << "Enter number of units sold:\n";
    cin >> num1;
    cin>>units;
    
    if (units <= 10 && num1 >= 19) 
    {
        (cost1 = num1 * .2);
        total1 = (99*num1) - cost1; //10-19 units sold
        cout <<"Total cost is $"<<total1;
    } 
    if (units <=20&&num1>=49)
    {
    cost2 = num1 * .3;
    total1 = (99*num1) - cost2; //20-49 units sold    
    cout<<"Total cost is $"<<total2;
    }
    if (units <=50&&num1>=99)
    {
    cost3 = num1 * .4;
    total1 = (99*num1) - cost3; //50-99 units sold
    cout<<"Total cost is $"<<total3;
    }
    if (units <=100)
    {
    cout<<"Total cost is $"<<total4;
    }
    if (units <= 0)
    {
    cost4 = num1 * .5;
    total1 = (99*num1) - cost4; //100 or more units sold
    cout<<"Number of units needs to be greater than 0";
    }
    else
    {
        cout <<"No discount";
    
      cout<<"\n";
            
    }
    return 0;
    }