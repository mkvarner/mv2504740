/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on June 28, 2014, 6:36 PM
 * Calculate average test scores
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    double A, B, C, D, E, average_all, all, tot_average;
    cout <<"Press enter after every entry.\n";
    cout <<"Enter first test score out of 100:\n";
    cin >> A;
    cout <<"Enter second test score out of 100:\n";
    cin >> B;
    cout <<"Enter third test score out of 100:\n";
    cin >> C;
    cout <<"Enter fourth test score out of 100:\n";
    cin >> D;
    cout <<"Enter fifth test score out of 100:\n";
    cin >> E;
    cout <<"\n";
    
    all = A+B+C+D+E; //sum of all scores
    cout.precision(2);
    average_all = all / 500; //sum points got divided by total points possible
    cout.precision(2);
    tot_average = average_all * 100;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout <<"If you received a "<<A<<" on test 1, a "<<B<<" on test 2,\n";
    cout <<"a "<<C<<" on test 3, a "<<D<<" on test 4, and a \n";
    cout <<E<<" on test 5. Then, your average test score is\n";
    cout<<average_all<<"."<<" Which amounts to a %"<<tot_average<<".\n";
    
    
    return 0;
}

