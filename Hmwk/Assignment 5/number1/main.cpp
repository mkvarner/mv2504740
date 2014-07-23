/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 22, 2014, 6:21 PM
 */

//System Libraries
//Take out if not needed
#include <cstdlib>//Random function srand
#include <iostream>//Standard input/output
#include <fstream>//File input/output
#include <ctime>//Time for random and program
#include <iomanip>//Formatting
#include <cmath>//Math functions
using namespace std;

//Global Constants
//If not a Global Constant get an F

//Function Prototypes For Case 1
float calculateRetail(float, float);

//Function Prototypes For Case 2
void round();

//Function Prototypes For Case 3
bool even ( int );

//Function Prototypes For Case 4
float calcChrgs(float);
float calcChrgs2(float);
float calcChrgs3(float);

//Function Prototypes For Case 5
float profit(float, float, float, float, float );

//Function Prototypes For Case 6
float fallingDistance(float);

//Function Prototypes For Case 7
float kineticEnergy(float, float);

//Function Prototypes For Case 8
float getSales(float, float, float, float);
void findHighest(float, float, float, float);

//Function Prototypes For Case 9
float presentValue(float, float, float );

//Function Prototypes For Case 10
int totalCharge(int, int, int, int);
float totalCharge(float, float);

//Execution Begins Here!!!
int main(int argc, char** argv) {
        
    //Declare Variables
   int choice;
    bool exitMnu=false;
    
    //Loop until choice is not in the menu selection
    do{
        //Output the menu and input the choice
        cout<<"Type 1 for Problem 1 from Gaddis"<<endl;
        cout<<"Type 2 for Problem X from Gaddis"<<endl;
        cout<<"Type 3 for Problem 3 from Gaddis"<<endl;
        cout<<"Type 4 for Problem 4 from Gaddis"<<endl;
        cout<<"Type 5 for Problem 5 from Gaddis"<<endl;
        cout<<"Type 6 for Problem 6 from Gaddis"<<endl;
        cout<<"Type 7 for Problem X from Gaddis"<<endl;
        cout<<"Type 8 for Problem X from Gaddis"<<endl;
        cout<<"Type 9 for Problem 10 from Gaddis"<<endl;
        cout<<"Type 10 for Problem 11 from Gaddis"<<endl;
        cin>>choice;
        //Solve the problem chosen
        switch(choice){
            case 1:{   
                
                        int wPrc, mPrc;
                        cout << "\nThis program asks you to enter and item's wholesale cost and its markup percentage, "
                             <<  "so that it can calculate that items retail price for you.\n";
                        cout << "\nPlease enter the item's wholesale price:\n";
                        cin >> wPrc;
                        while (wPrc<=0){
                            cout << "\nPlease enter the item's CORRECT wholesale price:\n";
                            cin >> wPrc;
                        }
                        cout <<"\nWhat is the item's markup percentage?\n";
                        cin >>mPrc;
                        while (mPrc<=0){
                            cout << "\nPlease enter the item's CORRECT markup percentage:\n";
                            cin >> mPrc;
                        }
                        cout << "The items retail price is $" << calculateRetail(wPrc, mPrc)<< ".\n";
                        cout << "\n\n\n\n";
               
                        break;
            }
            
            case 2:{
                
             
                                              
           
            break;                           
            }
      
            case 3: {
                
                      float NESales,SESales, NWSales, SWSales; // Declaration Of variables
                            //Promts user
                            cout << "\nThis program determines which  division of your company (Northeast, Southeast, Northwest, Southwest) had the greatest sales for the quarter.\n";
                            cout << "\nHow much sales did the Northeast divisions make this quarter?\n"; 
                            cin >> NESales;// Gets the NESales
                            while (NESales <=0){ // checks for dollars amount less than or equal to 0.
                                cout << "Please type in a correct dollar amount.\n";
                                cin >> NESales;
                            }
                            cout << "\nHow much sales did the Southeast divisions make this quarter?\n"; 
                            cin >> SESales;// Gets the SESales
                            while (SESales <=0){// checks for dollars amount less than or equal to 0.
                                cout << "Please type in a correct dollar amount.\n";
                                cin >> SESales;
                            }
                            cout << "\nHow much sales did the Northwest divisions make this quarter?\n"; 
                            cin >> NWSales;// Gets the NWSALES
                            while (NWSales <=0){// checks for dollars amount less than or equal to 0.
                                cout << "Please type in a correct dollar amount.\n";
                                cin >> NWSales;
                            }
                            cout << "\nHow much sales did the Southwest divisions make this quarter?\n"; 
                            cin >> SWSales;
                            while (SWSales <=0){// checks for dollars amount less than or equal to 0.
                                cout << "Please type in a correct dollar amount.\n";
                                cin >> SWSales;
                            }
                            findHighest(NESales,SESales, NWSales, SWSales); // this function will return the highest value
                            cout << "\nThey made $"; 
                            cout << getSales(NESales,SESales, NWSales, SWSales);// this function will return the amount the highest function made
                            cout << " in sales.\n";
                                                    cout <<"\n\n\n\n";
        
                break;
            }
            case 4: {
        
                break;
            } 
            case 5: {
        
                break;
            } 
  
            case 6: {
        
                break;
            } 
   
            case 7: {
        
                break;
            } 
    
            case 8: {
        
                break;
            } 
     
            case 9: {
        
                break;
            } 
      
            case 10: {
        
                break;
            } 
            
            }

                    
    }while(choice>=1&&choice<=10);

    //Exit stage right!
    return 0;
}
