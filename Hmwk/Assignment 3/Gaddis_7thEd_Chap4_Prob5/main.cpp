/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 2, 2014, 9:39 PM
 * BMI Calculator 
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) 
{
    
    float num1, num2, greater, lesser, BMI;
    cout << "Press enter after every number you type.\n";
    cout << "Weight in pounds:\n";
    cin >> num1;
    
    cout << "Height in inches:\n";
    cin >> num2;
    
    BMI = (num1 * 703) / (num2 * num2);
    
   cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    
    if (BMI < 18.5)     
         cout<<"Your BMI is "<<BMI<<" and you're underweight.\n";
    else if (BMI > 25)
        cout<<"Your BMI is "<<BMI<<" and you're overweight.\n";
    else
        cout<<"Your BMI is "<<BMI<<" and you're optimal weight.\n";
            

    return 0;
}
