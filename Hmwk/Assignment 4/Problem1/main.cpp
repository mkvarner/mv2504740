/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 9, 2014, 7:51 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
     
int sum=0, number;
do{
    cout <<"Enter a positive integer:  ";
    cin >>number;
}while(number<=0);

while(number>0)
{
    sum+=number;
    number--;  
    cout << "Sum of numbers is " <<sum<<endl;
    
}
       
    return 0;
}

