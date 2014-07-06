/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 2, 2014, 9:39 PM
 * Purchased books equals number of points awarded
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) 
{
    
    int num1, points;
    cout << "Press enter after every number you type.\n";
    cout << "Enter number of books purchased this month:\n";
    cin >> num1;
   
    
    if (num1 == 0)
        cout <<"0 points.";
    
    else if (num1 == 1)
        cout <<"5 points.";
    
    else if (num1 == 2)
        cout <<"15 points.";
    
    else if (num1 == 3)
        cout <<"30 points.";
    
    else if(num1 >= 4)
        cout <<"60 points.";
    
    else
        cout <<"Invalid entry.";
    
            

    return 0;
}