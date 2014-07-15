/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 9, 2014, 7:51 PM
 * Distance traveled 
 */

#include <iostream>
using namespace std;

int main()
{
	float distance, speed, time;
		   
	cout << "Speed of the vehicle in miles per hour:  ";
	cin >> speed;
	
	while(speed <= 0)
	{
	cout << "Speed of the vehicle in miles per hour:  ";
        cin >> speed;
	}
	
	cout << "Hours has it traveled:   ";
	cin >> time;

	while(time < 1)
	{
	cout << "Hours has it traveled:   ";
	cin >> time;
	}

	distance = speed * time;

	cout << "\n";
	cout << " Hour" << "     " << " Distance Traveled (miles)" << endl;
	cout << " -----------------------------------------------" << endl;

	for(int count = 1; count <= time; count++)
	{
		cout << " " << count << "\t\t" << speed*count << endl;
	}

	return 0;
}