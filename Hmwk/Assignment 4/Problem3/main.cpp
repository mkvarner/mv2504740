/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 9, 2014, 7:51 PM
 * Calculates ocean depth
 */

#include <iostream>
#include<iomanip>

using namespace std;

int main(int argc, char** argv) {
    
float number, prod=1.5;

do{
    
    cout<<"Enter number of years and will display with depth in mm:\n";
    cin>>number;
}while(number>=25);

while  (number>=25){
    
    prod=1.5*number;
        
    cout <<"Years        Depth  \n";
    cout<<"-------------------\n";
    cout<<prod<<endl;
}   

    return 0;
}

