/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 9, 2014, 7:51 PM
 * Calculates calories burned on treadmill
 */

#include <iostream>
#include<iomanip>

using namespace std;

int main(int argc, char** argv) {
    
float number, prod=1.5;

do{
    
    cout<<"Enter number of minutes run either 10, 15, 20, 25, or 30:\n";
    cin>>number;
}while(number>=30);

while  (number>=30){
    
    prod=3.9*number;
        
    cout <<"Minutes        Calories Burned  \n";
    cout<<"-------------------\n";
    cout<<prod<<endl;
}   

    return 0;
}

