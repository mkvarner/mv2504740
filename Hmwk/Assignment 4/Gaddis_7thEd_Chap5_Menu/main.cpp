/* 
 * File:   main.cpp
 * Author: Megan Varner 
 * Created on July 9th, 2014, 8:47 PM
 * Assignment 4
 */

//System Libraries
#include <iostream>
#include<iomanip>
#include<cmath>
#include "stdio.h"
#include "math.h"

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    int choice;
    
    //Loop until choice is not in the menu selection
    do{
        //Output the menu and input the choice
        cout<<"Type 1 for Problem 1 from Gaddis"<<endl;
        cout<<"Type 2 for Problem 3 from Gaddis"<<endl;
        cout<<"Type 3 for Problem 4 from Gaddis"<<endl;
        cout<<"Type 4 for Problem 5 from Gaddis"<<endl;
        cout<<"Type 5 for Problem 6 from Gaddis"<<endl;
        cout<<"Type 6 for Problem 7 from Gaddis"<<endl;
        cout<<"Type 7 for Problem 8 from Gaddis"<<endl;
        cout<<"Type 8 for Problem 10 from Gaddis"<<endl;
        cout<<"Type 9 for Problem 11 from  Gaddis"<<endl;
        cout<<"Type 10 for Problem 13 from Gaddis"<<endl;
        cin>>choice;
        
        //Place problem solutions in the switch statement
        cout<<endl;
        switch(choice){
            case  1:{
                cout<<"Problem 1"<<endl<<endl;
                int sum=0, number;
        do{
         cout <<"Enter a positive integer:  ";
            cin >>number;
            }while(number<=0);
            while(number>0)
            {
    sum+=number;
    number--;  
    cout << "Sum of numbers is " <<sum<<endl;  
        }
                break;
                
                //Problem3
            }case 2:{
                cout<<"Problem 3"<<endl<<endl;
                int year=1;
float rate=1.5; 

while(year<=25){ 
cout<<"In year "<<year<<" the ocean will rise " <<rate<<" mm"<<endl; 
rate=rate+1.5; 
year=year+1; 
} 
                break;
                
                //problem 4
            }case 3:{
   cout <<"Minutes        Burned Calories  \n";
 cout<<"--------------------------------\n";

for (int i = 0; i <= 30; i+=5) {
 float calorie = i * 3.9;
 cout << i <<"              "<< calorie <<endl;
}

                break; 
                
                //problem 5
            }case 4:{
                cout<<"Problem 5"<<endl<<endl;
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
                break;
                
                //problem 6
                            }case 5:{
                cout<<"Problem 6 here!"<<endl<<endl;
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
                break;
                
                //problem 7
                            }case 6:{
                cout<<"Problem 7 here!"<<endl<<endl;
                    	int days;
	float pennies = 0.01;	//worth of a penny

        //Will not except anything less than 1
        do{
            cout <<"For how many days will the pay double?\n";
            cin >>days;
            
         }while(days<=1);

	cout << endl << "Day             Total Pay \n";
	cout << "-------------------------------- \n";
	for ( int count = 1; count <=days; count++)
	{
     cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
	cout << count << "                     $" << ((pow(2,days)-1)/100) << endl;
        
	}
	//Displays the total 
	cout << "-------------------------------- \n";
         printf("You will be paid $%.2lf",(pow(2,days)-1)/100);
                break;
                
                //problem 8
                            }case 7:{
                cout<<"Problem 8 here!"<<endl<<endl;
                int room=0;
int floor=0;
int occupied = 0; 
int total_rooms = room; 
int total_occupied = 0; 
int total_unoccupied = 0;
int num_floors= 0; 
float occup_rate; //store hotel occupancy rate 

do{
cout<<"How many floors does hotel have?\n";
cin>>floor;
}while (floor <=1);

for (int floor = floor; floor <= num_floors; floor++) //initiate loop 
{ 
if (floor==13) 
{ 
floor=14; 
} 
do{
cout << "Enter the number of rooms on " << floor << " floor.\n";
cin>>room;
}while (room<10);

cout << "Enter the number of rooms occupied on " << floor << " floor.\n";
cin >> occupied; 

while(occupied>room)
{ 
} 
total_occupied += occupied; 
//number of rooms in each floor added to total rooms 
total_unoccupied = total_rooms - total_occupied;
//total of unoccupied rooms in whole hotel
} 
occup_rate=(total_occupied*100)/total_rooms; //store occupancy rate 

cout << "\n\nThe hotel has " << total_rooms << " rooms.\n"; 
cout << total_occupied << " rooms are occupied.\n"; 
cout << total_unoccupied << " rooms are unoccupied.\n"; 
cout << occup_rate << "% of the rooms are occupied."<<endl;
                break;
                
                //problem 10
                            }case 8:{
                cout<<"Problem 10 here!"<<endl<<endl;
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
                
                break;
                
                //problem 11
                            }case 9:{
                cout<<"Problem 11 here!"<<endl<<endl;
                
        int organisms = 0.0;
        int days_multiply = 0;
        float increase = 0.0;     
       
        cout << "Enter the starting number of organisms: ";
        cin >> organisms;
        while(organisms < 2)
        {
         cout << "Enter the starting number of organisms: ";
         cin >> organisms;
        }
       
        cout << "Enter the average daily population increase (as a percentage): ";
        cin >> increase;
       
        while(increase < 0)
        {
         cout << "Enter the average daily population increase (as a percentage): ";
         cin >> increase;
        }
       
        cout << "Enter the number of days they will multiply: ";
        cin >> days_multiply;
        while(days_multiply < 1)
        {
         cout << "Enter the number of days they will multiply: ";
         cin >> days_multiply;
        }
       
        for (int count = 0; count != days_multiply; count++)
        {
       organisms = organisms + (organisms * increase);
       cout << "On day " << count + 1 << " the population size was ";
       cout << organisms << "." << endl;
       
        }
                break;
                
                //problem 13
                            }case 10:{
                cout<<"Problem 13 here!"<<endl<<endl;
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

                break;
         
            }default:{
                cout<<"Exit Menu"<<endl<<endl;
            }
        };
    }while(choice>=1&&choice<=10);

    //Exit stage right!
    return 0;
}