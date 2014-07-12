/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 9, 2014, 7:51 PM
 * Calculates hotel occupancy
 */


#include<iostream> 
#include<iomanip>
#include<cmath>

using namespace std;

int main(int argc, char** argv) 
{ 
int room,
floor=0,
occupied = 0, 
totalRooms = 0, 
totalOccupied = 0, 
totalUnoccupied = 0, 
numFloors= 0; 
int occupRate; //store hotel occupancy rate 

do{
cout<<"How many floors does hotel have?\n";
cin>>floor;
}while (floor<=1);

//Enter number of floors
do
{ 

cout << "Enter the number of rooms on " << floor << endl;
cin>>room;
cout << "Enter the number of rooms occupied on " << floor << " floor.\n";
cin >> occupied; 

while(room<=10);
{ 
cout<<"Invalid Entry\n"; 
cout << "Enter the number of rooms on " << floor << " floor.\n";
cin >> room; 

} 
totalOccupied += occupied; 
//number of rooms in each floor will be added to total rooms 
totalUnoccupied = totalRooms - totalOccupied;
//store total of unoccupied rooms in hotel 
} 
while (occupRate=(totalOccupied*100)/totalRooms); //store occupancy rate 

cout << "\n\nThe hotel has " << totalRooms << " rooms.\n"; 
cout << totalOccupied << " rooms are occupied.\n"; 
cout << totalUnoccupied << " rooms are unoccupied.\n"; 
cout << occupRate << "% of the rooms are occupied.\n\n";

return 0; 

}