/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on June 28, 2014, 12:39 PM
 * calculates car's gas mileage 
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    
    double tot_gal, tot_miles, per_gallon;
    cout << "Press enter after every number you type.\n";
    cout << "How many gallons of gas can your car tank hold?\n";
    cin >> tot_gal; //total amount of gallons car can hold
    
    cout << "How many miles can your car be driven on a full tank of gas?\n";
    cin >> tot_miles;//total amount of miles on full tank
    
    per_gallon = tot_miles / tot_gal;
    // gives miles per gallon
    
    cout <<"If you have " <<tot_gal<<" gallons of gas and you can\n";
    cout <<"drive "<<tot_miles<<" miles on a full tank\n";
    cout <<"then, you get "<<per_gallon<<" miles per gallon of gas.\n";
            
            

    return 0;
}

