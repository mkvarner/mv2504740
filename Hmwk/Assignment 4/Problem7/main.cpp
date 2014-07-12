/* 
 * File:   main.cpp
 * Author: Megan Varner
 *
 * Created on July 11, 2014, 12:50 PM
 */

#include <iostream>
#include <cmath>
#include <iomanip>
#include "stdio.h"
#include "math.h"

using namespace std;

int main(int argc, char** argv) {
    
    	int days;
	float pennies = 0.01;	//pennies = $0.01
	float total;
	
        //Will not except anything less than 1
        do{
            cout <<"For how many days will the pay double?\n";
            cin >>days;
            
         }while(days<=1);

	cout << endl << "Day             Total Pay \n";
	cout << "-------------------------------- \n";
	for ( int count = 1; count <=days; count++)
	{
            
        //Sets decimal place
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
    		
    
	
	cout << count << "\t\t$\t" << ((pow(2,days)-1)/100) << endl;
        
        
       
	
	}
      
	//Displays the total 
	cout << "-------------------------------- \n";
         printf("You will be paid $%.2lf",(pow(2,days)-1)/100);
                

    return 0;
}

