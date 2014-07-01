/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on June 28, 2014, 12:39 PM
 * Cookies eaten and calories consumed
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    
    float cookies, calories, serving;
    cout << "Press enter after every number you type.\n";
    cout << "How many cookies did you actually eat?\n";
    cin >> cookies;
   
    //Using bag information of 40 cookies and 10 servings in bag
    //gives amount of cookies per serving 40/10 which is 4 cookies per serving
   
    
    //bag says 1 serving is 300 calories so calories consumed is...
    serving = cookies / 4.0;
    calories = serving * 300;
    
    cout <<"\n";
    cout <<"If you had " <<cookies<<" cookie(s)\n";
    cout <<"then, you consumed "<<calories<<" calories.\n";
            
            

    return 0;
}