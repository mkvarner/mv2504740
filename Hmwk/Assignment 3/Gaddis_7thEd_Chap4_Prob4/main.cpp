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
    
    float num1, num2, num3, num4, greater, lesser, area1, area2;
    cout << "Press enter after every number you type.\n";
    cout << "Enter length of rectangle 1 in ft:\n";
    cin >> num1;
    
    cout << "Enter length of rectangle 2 in ft:\n";
    cin >> num2;
    
    cout << "Enter width of rectangle 1 in ft:\n";
    cin >> num3;
    
    cout << "Enter width of rectangle 2 in ft:\n";
    cin >> num4;
    
    area1 = num1*num3;
    area2 = num2*num4;
    
    cout<<"\n";
    greater = area1 >area2 ? area1 : area2;
    lesser = area1 <area2 ? area1 : area2;
    
    if (area1 < area2)
        cout <<"Rectangle 2 has a greater area.";
    
    else if (area1 == area2)
        cout <<"The areas are the same.";
    
    else
        cout <<"Rectangle 1 has a greater area.";
    
      cout<<"\n";
            

    return 0;
}