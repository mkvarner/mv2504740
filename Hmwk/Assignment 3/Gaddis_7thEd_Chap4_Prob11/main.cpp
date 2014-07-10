/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 2, 2014, 9:39 PM
 * Purchased books equals number of points awarded
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    
    int num1, points;
    cout << "Press enter after every number you type.\n";
    cout << "Enter number of books purchased this month:\n";
    cin >> num1;
   
    //Calculates your points based on books bought
    if (num1 == 0)
        cout <<"0 points."; //0 books bought
    
    else if (num1 == 1)
        cout <<"5 points.";     //1 book bought
    
    else if (num1 == 2)
        cout <<"15 points.";    //2 books bought
    
    else if (num1 == 3)
        cout <<"30 points.";    //3 books bought
    
    else if(num1 >= 4)
        cout <<"60 points.";    //4 or more books bought
    
    else
        cout <<"Invalid entry.";        
    
            

    return 0;
}