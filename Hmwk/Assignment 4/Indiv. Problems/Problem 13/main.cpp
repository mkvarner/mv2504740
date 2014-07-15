/* 
 * File:   main.cpp
 * Author: Megan Varner
 *
 * Created on July 11, 2014, 10:35 PM
 * Find Min and Max
 */

#include <iostream>

using namespace std;

int main() {
	const int SENTINEL = -99;
	int num;
	int min = SENTINEL, max = SENTINEL; //for Min and Max

	do {
		cout << "Enter a number (-99 to quit): ";
		cin >> num;
		if(num!=-99) {
			if( min == SENTINEL || num < min )
				min = num;
			if( max == SENTINEL || num > max )
				max = num;
		}
	} while( num != SENTINEL );
	
	//display min, max, and average
	cout << "Minimum: " << min << endl;
	cout << "Maximum: " << max << endl;
	
	return 0;
}
