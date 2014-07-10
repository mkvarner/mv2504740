/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 9, 2014, 7:51 PM
 * Sum numbers up to number user enters
 */

#include <iostream>
#include<iomanip>

using namespace std;

int main(int argc, char** argv) {

    const float max_num=25;
float number;
cout<<"Enter number of years and a table will display with depth:\n";
cin>>number;

    cout <<"Years  Depth  \n";
    cout<<"----------------\n";
    
   for (float number <=max_num; number++)
        cout<<number<<"\t\t"<<(number*1.5)<<endl;
 
    return 0;
}
