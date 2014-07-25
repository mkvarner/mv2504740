/* 
 * File:   main.cpp
 * Author: Megan Varner 
 * Created on July 24, 2014, 7:32 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Problem 1 functions
bool isHexDgt(char);
void getHex(char[],const int);
short chrInt(char,const short,const short);
void addHexDgt(char,char,char&,bool&);
void addHex(char[],char[],const int,char[],bool&);


//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    char choice;
    
    //Loop until choice is not in the menu selection
    do{
        //Output the menu and input the choice
        cout<<"Type 1 for Problem 2 from Savitch"<<endl;
        cout<<"Type 2 for Problem X from Gaddis"<<endl;
        cout<<"Type 3 for Problem X from Gaddis"<<endl;
        cout<<"Type 4 for Problem B from Gaddis"<<endl;
        cout<<"Type 5 for Problem B from Gaddis"<<endl;
        cout<<"Type 6 for Problem B from Gaddis"<<endl;
        cout<<"Type 7 for Problem B from Gaddis"<<endl;
        cout<<"Type 8 for Problem B from Gaddis"<<endl;
        cout<<"Type 9 for Problem B from Gaddis"<<endl;
        cout<<"Type 10 for Problem B from Gaddis"<<endl;
        cin>>choice;
        
        //Place problem solutions in the switch statement
        cout<<endl;
        switch(choice){
            case  '1':{
               
     
                       
              
                break;
            }case 2:{
                cout<<"Problem Y here!"<<endl<<endl;
                break;
            }case 3:{
              
                break;         
            }case 4:{
                cout<<"Problem B here!"<<endl<<endl;
                break;
            }default:{
                cout<<"Exit Menu"<<endl<<endl;
            }
        };
    }while(choice>=1&&choice<=10);

    //Exit stage right!
    return 0;
}
        
        
 