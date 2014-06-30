/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on June 25, 2014, 7:34 PM
 * Modify program for problem 1 in this chapter
 * so Hello appears at the beginning
 * and Good-bye appears at the end of the output
 */

#include <iostream>
using namespace std;
int main() 
{
    int number_of_pods, peas_per_pod, total_peas;
    cout <<"Hello" <<endl; //Added line to make Hello appear on screen
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> peas_per_pod;
    cout << "Enter the number of peas in a pod:\n" ;
    cin >> peas_per_pod;
    total_peas = number_of_pods * peas_per_pod;
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n" ;
    cout << "and " ;
    cout << peas_per_pod;
    cout << " peas in each pod, then\n" ;
    cout << "you have " ;
    cout << total_peas;
    cout << " peas in all the pods.\n" ;
    cout << "Good-bye\n" ; //Added last line as explained in text
    return 0;
}

