/* 
 * File:   main.cpp
 * Author: Megan Varner
 *
 * Created on July 11, 2014, 10:26 PM
 * Membership fees
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	float charge = 2500;
	int year = 1;

	cout << "Current cost of membership is: $2,500\n";
	cout << " " << endl;
	cout << "Increase: 4% per year\n";
	cout << "Your new costs for the incoming years will be: \n";
	cout << " " << endl;

	while (year <= 6) 
	{
	charge = (charge * .04) + charge;
                
	 cout.setf(ios::fixed);
         cout.setf(ios::showpoint);
         cout.precision(2);
        
         cout<< "Your cost for year " << year << " is: $" << charge << endl;

	year++;
	}

	return 0;
}
