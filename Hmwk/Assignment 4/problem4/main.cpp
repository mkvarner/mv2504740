/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 9, 2014, 7:51 PM
 * Calculates calories burned on treadmill
 */

#include<iostream>

using namespace std;

int main() {
    
 cout <<"Minutes        Burned Calories  \n";
 cout<<"--------------------------------\n";

for (int i = 0; i <= 30; i+=5) {
 float calorie = i * 3.9;
 cout << i <<"              "<< calorie <<endl;
}

 return 0;
}
