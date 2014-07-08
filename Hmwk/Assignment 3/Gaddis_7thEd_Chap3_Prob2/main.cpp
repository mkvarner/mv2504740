/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 2, 2014, 9:39 PM
 * Switch number to roman numeral
 */

#include <iostream>

using namespace std;
int main(int argc, char** argv)
{
 int numberIn;

cout << "Press enter after every entry.\n";
cout << "Enter number 1-10 and Roman numeral conversion will appear:\n";
cin >> numberIn;

// Display roman numeral
switch(numberIn)
{

case 1: 
    cout << "I\n";
break;


case 2:
    cout << "II\n";
break;


case 3:
    cout << "III\n";
break;


case 4: 
    cout << "IV\n";
break;


case 5:
    cout << "V\n";
break;


case 6: 
    cout << "VI\n";
break;


case 7:
    cout << "VII\n";
break;


case 8:
    cout << "VIII\n";
break;


case 9:
    cout << "IX\n";
break;

case 10:
    cout << "X\n";
break;

default:
    cout << "That is an invalid choice.\n";

}
return 0;
}