                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 /** File:   main.cpp
 * Author: Megan Varner
 * Created on July 9, 2014, 7:51 PM
 * Calculates hotel occupancy
 */


#include<iostream> 
#include<iomanip>

using namespace std;

int main(int argc, char** argv) 
{ 
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

return 0; 

}                                                                                         