/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 22, 2014, 6:37 PM
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
    //Declare menu variables
    int choice;
    
    //Loop until exit
    do{
        //Output Menu
        cout<<"Choose from the menu"<<endl;
        cout<<"Type 1 for Problem 1 from Gaddis"<<endl;
        cout<<"Type 2 for Problem 2 from Gaddis"<<endl;
        cout<<"Type 3 for Problem 3 from Gaddis"<<endl;
        cout<<"Type 4 for Problem 4 from Gaddis"<<endl;
        cout<<"Type 5 for Problem 5 from Gaddis"<<endl;
        cout<<"Type 6 for Problem 6 from Gaddis"<<endl;
        cout<<"Type 7 for Problem 7 from Gaddis"<<endl;
        cout<<"Type 8 for Problem 9 from Gaddis"<<endl;
        cout<<"Type 9 for Problem 14 from Gaddis"<<endl;
        cout<<"Type 10 for Problem 19 from Gaddis"<<endl;
        cout<<"Anything Else Exit"<<endl;
        //Input your choice
        cin>>choice;
        //Solve the problem chosen
        switch(choice){
            case 1:{   
                
                        int price, per;
                        cout << "Enter the item's wholesale price:\n";
                        cin >> price;
                        while (price<=0){
                            cout << "Enter the item's wholesale price:\n";
                            cin >> price;
                        }
                        cout <<"Item's markup percentage:\n";
                        cin >>per;
                        while (per<=0){
                            cout << "Item's markup percentage:\n";
                            cin >> per;
                        }
  cout << "The items retail price is $" << calculateRetail(price, per)<<endl;
                        cout << "\n\n\n\n";
               
                        break;
            }
            case 2:{  
                                        
                      
                break;
            }
            case 3:{
                
                    float ne,se, nw, sw; 
                       
                    cout << "Northeast divisions sales this quarter:\n"; 
                            cin >> ne;
                     while (ne <=0){ // dollar less than 0
                          cout << "Please type in a correct dollar amount.\n";
                                cin >> ne;
                            }
                 cout << "Southeast divisions sales this quarter:\n"; 
                            cin >> se;
                            while (se <=0){// less than or equal to 0.
                        cout << "Please type in a correct dollar amount.\n";
                                cin >> se;
                            }
                    cout << "Northwest divisions sales this quarter:\n"; 
                            cin >> nw;
                            while (nw <=0){// less than or equal to 0.
                       cout << "Please type in a correct dollar amount.\n";
                                cin >> nw;
                            }
                       cout << "Southwest division sales this quarter:\n"; 
                            cin >> sw;
                            while (sw <=0){// less than or equal to 0.
                     cout << "Please type in a correct dollar amount.\n";
                                cin >> sw;
                            }
     findHighest(ne,se, nw, sw); // this function will return the highest value
                            cout << "\nThey made $"; 
                            cout << getSales(ne,se, nw, sw);// function
                            cout << " in sales.\n";
                                                    cout <<"\n\n\n\n";


                break;
            }
        case 4:{       
        
                break;
            }
            case 5:{ 
                  float intrvl;
                  
         cout << "Enter a number of seconds:\n";
                            cin >> intrvl; // takes in the time
        cout<<"If an object was to fall with respect to earths gravity for\n";
        cout<< intrvl<< " seconds, it would cover a distance of\n";
        cout<< fallingDistance(intrvl) << "m\n";
                  cout << "\n";
                     for (int i=1; i<=10; ++i)
       cout << i << " seconds of fall = " << fallingDistance(i)<< " meters.\n";
           cout <<"\n\n\n\n";
                break;
            }
            case 6:{
                



    
                break;
            }
            case 7:{
                  
                break;
            }
            case 8:{
                
                       float ftrVal, annInt, numYears;
                     
                 cout << "Annual interest rate on your savings account(%):\n";
                            cin >> annInt;
                            annInt= annInt/100;
                            cout << "Amount of money would you like to see in your savings account:\n";
                            cin >> ftrVal;
             cout << "For how many years will you keep the $" << ftrVal<<endl;
                                  cout<<" in your savings account?\n";
                            cin >> numYears;

                            cout << "You will have to deposit $";
                            cout <<  presentValue(ftrVal, annInt, numYears); 
                            cout << " into your savings account.\n ";
                          cout <<"\n\n\n\n";
                        
                break;
            }
            case 9:{
                                                char choice, a, b, A, B;
                            choice = toupper(choice);

  cout << "Was the patient admitted as an in-patient or an out-patient?\n";
          cout<< "Type \A\ if patient was admited as an in-patient.\n";
        cout <<"Type \"B\" if the patient was admitted as an out-patient.\n";
                            cin >> choice;
                            int dys, rate, srvCsts, medCsts;
                            if ((choice == 'A')|| (choice== 'a')){
           cout << "How many days did the patient stay at the hospital?\n";
                                cin >> dys;
         cout << "How much does it cost to stay in the hospital one day?\n";
                                 cin >> rate ;
     cout << "How much does the hospital charge for its services (lab tests, etc.)?\n";
                                 cin >> srvCsts ;
         cout << "How much does the customer have to pay for his or her medications?\n";
                                 cin >> medCsts ;
    cout << "The total charge for this patients stay in the hospital is $";
            cout<< totalCharge(dys, rate, srvCsts, medCsts) << ".\n";
                            }

                            if ((choice == 'B')|| (choice == 'b')){
         cout << "\nHow much does the hospital charge for its services (lab tests, etc.)?\n";
                               cin >> srvCsts;
                               cout << "\nHow much does the customer have to pay for his or her medications?\n";
                               cin >> medCsts;
                               cout << "\nThank you. The total charge for this patient is $"<< totalCharge(srvCsts, medCsts)<< ".\n";
                            }   
                            //Exit function main
                                                    cout << "\n\n\n\n";   
                                        break;
            }
             case 10:{
                                        
                       
              cout << "\nThis program determines the profit from the sale of your stock.\n";
                            float numShrs,salPrice, salCmmsn, prchPrc, prchCmmsn;
                            int check;
                            cout << "\nEnter the number of shares:\n";
                            cin >> numShrs;
                            cout << "\nEnter the sale price per share:\n";
                            cin >> salPrice;
                            cout << "\nEnter the sale commission paid:\n";
                            cin >> salCmmsn;
                            cout << "\nEnter the purchase price per share:\n";
                            cin >> prchPrc;
                            cout << "\nEnter the purchase commission paid:\n";
                            cin >> prchCmmsn;
                            check = profit(numShrs,salPrice, salCmmsn, prchPrc, prchCmmsn);
                            if ((check)>0)
                            cout << "\nYour total profit is $" << profit(numShrs,salPrice, salCmmsn, prchPrc, prchCmmsn)<< "."<< endl;
                            if ((check)<=0)
                            cout << "\nYou did not make a profit. You lost  " << profit(numShrs,salPrice, salCmmsn, prchPrc, prchCmmsn) << " dollars." <<endl;

                            cout << "\n\n\n\n";


                       
                break;
            }
            default: {
                cout<<"Exit Menu"<<endl<<endl;
            }
        }
    }while(choice>=1&&choice<=10);

    //Exit the program
    return 0;
}

//Function Definitions For Case 1
float calculateRetail(float a, float  b){
    float  rPrc;
    rPrc = a*(b/100)+a;
    return rPrc;

}
//Function Definitions For Case 2
void round (void){
    float num =0, i;
    while (num != -1){
        cout << "\nEnter a number(Enter -1 to END):";
        cin >> num;
        i = floor(num+.5);
        
        cout << num << " rounded is: " << i << endl;;
        
    }
   
}
//Function Definitions For Case 3
bool even (int i){
    return !(i%2);
}
//Function Definitions For Case 4
float calcChrgs(float a){
    if (a <=3) //Checks if car parked less than 3 hours
        return 2.00; //returns a value to the caller function
    if (a >3 && a<=16) //checks to see if  car has reached the limit of 10 hrs
    return 2.00+ (a-3)*.50;//returns a value to the caller function
    if (a>16)// checks for anything above the limit
        return 10.00;//returns a value to the caller function
} float calcChrgs2(float b){
    if (b <=3)//Checks if car parked less than 3 hours
        return 2.00;//returns a value to the caller function
    if (b >3 && b<=16)//checks to see if  car has reached the limit of 10 hrs
    return 2.00+ (b-3)*.50;//returns a value to the caller function
    if (b>16)//checks for anything above the limit
        return 10.00;//returns a value to the caller function
    }
float calcChrgs3(float c){
    if (c <=3)
        return 2.00;//returns a value to the caller function
    if (c >3 && c<=16)
    return 2.00+ (c-3)*.50;//returns a value to the caller function
    if (c>16)
        return 10.00;//returns a value to the caller function
}
//Function Definitions For Case 5
float profit(float a, float b, float c, float d, float e){
    float profit;
    profit = ( (a*b) -c ) - ( (a*d) + e );
            return profit;
}
//Function Definitions For Case 6
float fallingDistance(float secs){
    return (secs)*(secs)*(.5)*(9.8);
}

//Function Definitions For Case 7
float kineticEnergy(float x, float y){
    return .5 * x * y * y;
}

//Function Definitions For Case 8
float getSales(float a, float b, float c, float d ){
    int maxSales;
    maxSales = a;
    if ( b > maxSales )
        maxSales=b;
    if (c > maxSales)
        maxSales = c;
    if ( d > maxSales )
        maxSales = d;
    return maxSales;
}
void findHighest(float a, float b, float c, float d){
     
    if ( a>b && a> c && a> d)
        cout << "\nThe North East division had the greatest sales for the quarter.\n";
     if ( b>a && b> c && b> d)
        cout << "\nThe SouthEast division had the greatest sales for the quarter.\n";
     if ( c>a && c> b && c> d)
        cout << "\nThe NorthWest division had the greatest sales for the quarter.\n";
      if ( d>a && d> b && d> c)
        cout << "\nThe SouthWest division had the greatest sales for the quarter.\n";
     

}

//Function Definitions For Case 9
float presentValue(float a, float b, float c ){

    int prsntVal;

    
    prsntVal = a/pow((1+b),c) ;
    
    return prsntVal; 
}
//Function Definitions For Case 10
int totalCharge(int a, int b, int c, int d){
   int  totChrg;
    totChrg = a*(b+c+d);
    return totChrg;
}
float totalCharge(float x, float y){
    float totChrg;
    totChrg = x+y; 
    return totChrg;
}