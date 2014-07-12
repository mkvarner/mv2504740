/* 
 * File:   main.cpp
 * Author: Megan Varner
 *
 * Created on July 11, 2014, 8:43 PM
 * Predict population growth 
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

        int organisms = 0.0;
        int days_multiply = 0;
        float increase = 0.0;     
       
        cout << "Enter the starting number of organisms: ";
        cin >> organisms;
        while(organisms < 2)
        {
                cout << "Enter the starting number of organisms: ";
                cin >> organisms;
        }
       
        cout << "Enter the average daily population increase (as a percentage): ";
        cin >> increase;
       
        while(increase < 0)
        {
         cout << "Enter the average daily population increase (as a percentage): ";
         cin >> increase;
        }
       
        cout << "Enter the number of days they will multiply: ";
        cin >> days_multiply;
        while(days_multiply < 1)
        {
                cout << "Enter the number of days they will multiply: ";
                cin >> days_multiply;
        }
       
        for (int count = 0; count != days_multiply; count++)
        {
       organisms = organisms + (organisms * increase);
       cout << "On day " << count + 1 << " the population size was ";
       cout << organisms << "." << endl;
       
        }
       
        return 0;
}