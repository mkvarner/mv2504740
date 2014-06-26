/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on June 25, 2014, 7:34 PM
 * Savitch Chap 1 Prob 6
 * Create and Record Errors
 * Using a previous program from
 * Display 8, Problem 1
 */

#include <iostream>
        
        //Error: no #
        //main.cpp:11:1: error: ‘include’ does not name a type
        //main.cpp:20:5: error: ‘cout’ was not declared in this scope
        //main.cpp:23:5: error: ‘cin’ was not declared in this scope

        //Error: extra space before iostream
        //main.cpp:11:21: fatal error:  iostream: No such file or directory

using namespace std;
int main ()
{
    int number_of_pods, peas_per_pod, total_peas;
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    
    cin >> peas_per_pod;
    
    //Error: forgot n on cin
    //main.cpp:22:5: error: ‘ci’ was not declared in this scope
    
    cout << "Enter the number of peas in a pod:\n" ;
    cin >> peas_per_pod;
    total_peas = number_of_pods * peas_per_pod;
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n" ;
            
           //Error: forgot n
           //main.cpp:38:13: warning: missing terminating " character
           //[enabled by default]
           //main.cpp:38:5: error: missing terminating " character
            
    cout << "and " ;
    cout << peas_per_pod;
    cout << "peas in each pod, then\n" ;
    cout << "you have" ;
    
    cout << total_peas;
    
    //Error: no s after pea
    //main.cpp:38:13: error: ‘total_pea’ was not declared in this scope
    
    cout << " peas in all the pods.\n" ;
    
    return 0;
    
    //Error: no 0
    //main.cpp:45:5: error: return-statement with no value, in function
    //returning ‘int’ [-fpermissive]
}