/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on June 29, 2014, 3:39 PM
 * Calculate net box office profit for a night
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    char movie[30];
    int adult, child, gross, net, distributor, pay_adult, pay_child;
    
    cout <<"Movie name:\n";
    cin.getline(movie,30);
    
    cout <<"Number of adult tickets sold:\n";
    cin >> adult;
    
    cout <<"Number of child tickets sold:\n";
    cin >> child;
        
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //prices for tickets
    pay_adult = adult * 6;
    pay_child = child * 3;
    
    gross = pay_adult + pay_child;
    net = gross * .2;
    distributor = gross - net;
    
    cout <<"\n";
    cout <<"Movie name:                               "<<movie<<"\n";
    cout <<"Adult tickets sold:                       "<<adult<<"\n";
    cout <<"Child tickets sold:                       "<<child<<"\n";
    cout <<"Gross box office profit:                  "<<gross<<"\n";
    cout <<"Net box office profit:                    "<<net<<"\n";
    cout <<"Amount paid to distributor:               "<<distributor<<"\n";
    

    return 0;
}

