/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 2, 2014, 9:56 PM
 * 
 */

#include <iostream>
#include<string.h>

using namespace std;

int main(int argc, char** argv) 
{
   int number;
   char imonth;
    
    cout<<"Press enter after every entry.\n";
    cout<<"Enter a number 1 through 10:\n";
    cin>>number;
        
    if(!strcmp(number,"1"))   imonth=1;
    if(!strcmp(number,"2"))   imonth=2;
    if(!strcmp(number,"3"))   imonth=3;
    if(!strcmp(number,"4"))   imonth=4;
    if(!strcmp(number,"5"))   imonth=5;
    if(!strcmp(number,"6"))   imonth=6;
    if(!strcmp(number,"7"))   imonth=7;
    if(!strcmp(number,"8"))   imonth=8;
    if(!strcmp(number,"9"))   imonth=9;
    if(!strcmp(number,"10"))  imonth=10;
    
    //Output roman numeral
            switch(number){
        case '1':
        case "I":{
            cout<<"You received a score greater than or equal to 90"<<endl;
            break;
        }
        case '2':
        case "II":{
            cout<<"You received a score greater than or equal to 80"<<endl;
            break;
        }
        case '3':
        case "III":{
            cout<<"You received a score greater than or equal to 70"<<endl;
            break;
        }
        case '4':
        case "IV":{
            cout<<"You received a score greater than or equal to 60"<<endl;
            break;
        }
        case '5':
        case "V":{
            cout<<"You received a score greater than or equal to 90"<<endl;
            break;
        }
        case '6':
        case "VI":{
            cout<<"You received a score greater than or equal to 80"<<endl;
            break;
        }
        case '7':
        case "VII":{
            cout<<"You received a score greater than or equal to 70"<<endl;
            break;
        }
        case '8':
        case "VIII":{
            cout<<"You received a score greater than or equal to 60"<<endl;
            break;
        }

        case '9':
        case "IX":{
            cout<<"You received a score greater than or equal to 80"<<endl;
            break;
        }
        case "10":
        case "X":{
            cout<<"You received a score greater than or equal to 70"<<endl;
            break;
        }
        default:{
            cout<<"Number invalid"<<endl;
            break;
        }        }}
            
  