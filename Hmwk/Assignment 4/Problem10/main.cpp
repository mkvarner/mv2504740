/* 
 * File:   main.cpp
 * Author: cdarway
 *
 * Created on July 11, 2014, 8:24 PM
 */

#include <iostream> 
using namespace std; 

int main() 
{ 
int months = 12; 
int years; 
float monthRain, totalRain, average; 

do{
    cout <<"Enter number of years:  ";
    cin >>years;
}while(years<1);

cout << "Enter the rainfall for each month must be greater than 0inches.\n"; 

for ( int year = 1; year <= years; year++ ) 
{ 
for ( int month = 1; month <= months; month++ )
{ 
    do{
cout << "Year " << year << " month " << month << ": "; 
cin >> monthRain; 
    }while(monthRain<0);

totalRain += monthRain; 
} 
} 

months = years*12;
average = totalRain / (years * months); 

cout << "Months: " << months << endl; 
cout << "Total Inches: " << totalRain << endl; 
cout << "Average: " << average << endl; 
} 