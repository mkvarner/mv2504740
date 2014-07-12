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
float month_rain, total_rain, average; 

do{
    cout <<"Enter number of years:  ";
    cin >>years;
}while(years<1);
 

for ( int year = 1; year <= years; year++ ) 
{ 
for ( int month = 1; month <= months; month++ )
{ 
    do{
cout << "Year " << year << " month " << month << ": "; 
cin >> month_rain; 
    }while(month_rain<0);

total_rain += month_rain; 
} 
} 

months = years*12;
average = total_rain / (months); 

cout << "Months: " << months << endl; 
cout << "Total Inches: " << total_rain << endl; 
cout << "Average per month: " << average << endl; 
} 