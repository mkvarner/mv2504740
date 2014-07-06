/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on June 29, 2014, 3:00 PM
 * Average rainfall for three months
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    char month_o[10], month_tw[10], month_th[10];
    float sum, tot_avg, mo_rain_o, mo_rain_tw, mo_rain_th;
    
    cout <<"Press enter after every entry. Use form of ###.#\n";
    
    cout <<"Enter name of first month:\n";
    cin.getline(month_o, 10);
    cout <<"Enter the amount of rain that fell in inches in form:\n";
    cin >> mo_rain_o;
    
    cout <<"Enter name of second month:\n";
    cin >> month_tw;
    cout <<"Enter the amount of rain that fell in inches:\n";
    cin >> mo_rain_tw;
    
    cout <<"Enter name of third month:\n";
    cin >> month_th;
    cout <<"Enter amount of rain that fell in inches:\n";
    cin >> mo_rain_th;
    
    //calculate average
    sum = mo_rain_o + mo_rain_tw + mo_rain_th;
    tot_avg = sum / 3;
    
    //End result
    cout.setf(ios::fixed);
    cout.precision(2);
    cout <<"\n";
    cout <<"The average rainfall for "<<month_o<<", "<<month_tw<<", and\n";
    cout <<month_th<<" is "<<tot_avg<<" inches.\n";

    return 0;
}

