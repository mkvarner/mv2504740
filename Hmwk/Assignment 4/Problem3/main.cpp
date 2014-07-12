/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 9, 2014, 7:51 PM
 * Calculates ocean depth for next 25 years
 */

#include <iostream> 

using namespace std; 

int main(int argc, char** argv) { 
    

int year=1;
float rate=1.5; 

while(year<=25){ 
cout<<"In year "<<year<<" the ocean will rise " <<rate<<" mm"<<endl; 
rate=rate+1.5; 
year=year+1; 
} 
return 0; 
} 


