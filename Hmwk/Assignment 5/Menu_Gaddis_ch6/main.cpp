/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 22, 2014, 6:37 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>
#include <iomanip>
#include <cmath>

using namespace std;

//Global Constants

//Function 1
float calculateRetail(float, float);

//Function 2
void input1(int& hour, int& mins);//24 hr
void convrt1(int& hour, int& mins, char& ampm);//12 hr
void out1(int& hour, int& mins, char& ampm);//12 hr

//Function 3
float getSales(float, float, float, float);
void findHighest(float, float, float, float);

//Function 4


//Function 5
float fallingDistance(float);

//Function 6
float kineticEnergy(float, float);

//Function 7


//Function 8
float presentValue(float, float, float );


//Function 9
int totalCharge(int, int, int, int);
float totalCharge(float, float);

//Function 10
float profit(float, float, float, float, float );


//Execution 
int main(int argc, char** argv) {

    int choice;
    
    //Loops menu
    do{
      
        cout<<"Choose from the menu"<<endl;
        cout<<"Type 1 for Problem 1 from Gaddis"<<endl;
        cout<<"Type 2 for Problem 1 from Savitch"<<endl;
        cout<<"Type 3 for Problem 3 from Gaddis"<<endl;
        cout<<"Type 4 for Problem 4 from Gaddis"<<endl;
        cout<<"Type 5 for Problem 5 from Gaddis"<<endl;
        cout<<"Type 6 for Problem 6 from Gaddis"<<endl;
        cout<<"Type 7 for Problem 7 from Gaddis"<<endl;
        cout<<"Type 8 for Problem 9 from Gaddis"<<endl;
        cout<<"Type 9 for Problem 14 from Gaddis"<<endl;
        cout<<"Type 10 for Problem 19 from Gaddis"<<endl;
        cout<<"Anything Else Exit"<<endl;
        
        cin>>choice;
        
        switch(choice){
            
            //problem 1
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
                        
                        break;
            }
            
            //problem 2
            case 2:{  
                int hour, mins;
            char ampm, ans;
            do{
            
            input1(hour, mins);
            convrt1(hour, mins, ampm);
            out1(hour, mins, ampm);
            cout<<"\n";
            cout<<"Convert your 24-hour notation time again...\n";
            cout<<"Enter y for yes, n for no: ";
            cin>>ans;
            cout<<"\n";
            }while (ans=='y'||ans=='Y');
                  
                break;
            }
            
            //problem 3
            case 3:{
                
                    float ne,se, nw, sw; 
                       
                    cout << "Northeast divisions sales this quarter:\n"; 
                            cin >> ne;
                     while (ne <=0){ // dollar less than 0
                          cout << "Northeast divisions sales this quarter:\n";
                                cin >> ne;
                            }
                 cout << "Southeast divisions sales this quarter:\n"; 
                            cin >> se;
                            while (se <=0){// less than or equal to 0.
                        cout << "Southeast divisions sales this quarter:\n";
                                cin >> se;
                            }
                    cout << "Northwest divisions sales this quarter:\n"; 
                            cin >> nw;
                            while (nw <=0){// less than or equal to 0.
                       cout << "Northwest divisions sales this quarter:\n";
                                cin >> nw;
                            }
                       cout << "Southwest division sales this quarter:\n"; 
                            cin >> sw;
                            while (sw <=0){// less than or equal to 0.
                     cout << "Southwest division sales this quarter:\n";
                                cin >> sw;
                            }
     findHighest(ne,se, nw, sw); // highest value
                            cout << "They made $"; 
                            cout << getSales(ne,se, nw, sw);// function
                            cout << " in sales.\n";
                                                  


                break;
            }
            
            //problem 4
        case 4:{       
        
                break;
            }
        
        //problem 5
            case 5:{ 
                  float intrvl;
                  
         cout << "Enter a number of seconds:\n";
                            cin >> intrvl; // time
        cout<<"If an object were to fall\n";
        cout<< intrvl<< " seconds, it would cover a distance of\n";
        cout<< fallingDistance(intrvl) << "m\n";
                  cout << "\n";
                     for (int i=1; i<=10; ++i)
       cout << i << " seconds of fall = " << fallingDistance(i)<< " m\n";
        
                break;
            }
            
            //problem 6
            case 6:{
                
float mass;
                float velocity;
                
                float jo;//KE in J
         
   cout<<"Enter the mass and velocity of an object with a space in between\n";
        
                cin>>mass>>velocity;
                cout<<endl;
                 
              
                jo = kineticEnergy(mass, velocity);
                
                //Output 
                cout<<"The kinetic energy of the object is: "<<jo<<" J\n";
           
                break;
            }
            
            //problem 7
            case 7:{
                  
                break;
            }
            
            //problem 9
            case 8:{
                
          float ftrVal, annInt, numYears;
                     
  cout << "Annual interest rate in percent of your savings:\n";
            cin >> annInt;
            annInt= annInt/100;
 cout << "Amount of money would you like to have:\n";
             cin >> ftrVal;
 cout << "Years money will be kept in the account:\n";
   cin >> numYears;

               cout << "You will have to deposit $";
              cout <<  presentValue(ftrVal, annInt, numYears); 
              cout << " into your savings account.\n ";
                      
                        
                break;
            }
            
            //problem 14
            case 9:{
               char choice, a, b, A, B;
               choice = toupper(choice);

          cout<< "Type \"I\" if patient was admitted as an in-patient.\n";
        cout <<"Type \"O\" if the patient was admitted as an out-patient.\n";
                            cin >> choice;
                            int dys, rate, srvCsts, medCsts;
                            if ((choice == 'I')|| (choice== 'i')){
           cout << "For how many days:\n";
                                cin >> dys;
         cout << "Cost to stay for one day:\n";
                                 cin >> rate ;
     cout << "Hospital charge for its services:\n";
                                 cin >> srvCsts ;
         cout << "Cost for customer for medications:\n";
                                 cin >> medCsts ;
    cout << "The total charge for patient's stay in the hospital is $";
            cout<< totalCharge(dys, rate, srvCsts, medCsts) << ".\n";
                            }

                            if ((choice == 'O')|| (choice == 'o')){
         cout << "Hospital charge for its services:\n";
                               cin >> srvCsts;
                               cout << "Cost for customer for medications:\n";
                               cin >> medCsts;
cout << "Total charge for patient is $"<< totalCharge(srvCsts, medCsts)<< ".\n";
                            }   
                            
                                               
                                        break;
            }
            
            //problem 19
             case 10:{
             
                float numShrs,salPrice, salCmmsn, prchPrc, prchCmmsn;
         int check;
       cout << "Enter the number of shares:\n";
     cin >> numShrs;
     cout << "Enter the sale price per share:\n";
     cin >> salPrice;
     cout << "Enter the sale commission paid:\n";
     cin >> salCmmsn;
     cout << "Enter the purchase price per share:\n";
     cin >> prchPrc;
     cout << "Enter the purchase commission paid:\n";
     cin >> prchCmmsn;
     check = profit(numShrs,salPrice, salCmmsn, prchPrc, prchCmmsn);
                            if ((check)>0)
cout << "Your total profit is";
     cout<<"$"<< profit(numShrs,salPrice, salCmmsn, prchPrc, prchCmmsn)<< endl;
                            if ((check)<=0)
cout << "No profit. You lost \n";
cout<<"$"<< profit(numShrs,salPrice, salCmmsn, prchPrc, prchCmmsn) <<endl; 

                           


                       
                break;
            }
            default: {
                cout<<"Exit Menu"<<endl<<endl;
            }
        }
    }while(choice>=1&&choice<=10);

    
    return 0;
}

//Function Definitions 1
float calculateRetail(float a, float  b){
    float  rPrc;
    rPrc = a*(b/100)+a;
    return rPrc;

}
//Function Definitions 2
void input1(int& hour, int& mins){
    cout<<"Enter your 24 hour format time:"<<endl;
    cout<<"Hour: ";
    cin>>hour;
    cout<<"Minute: ";
    cin>>mins;
    cout<<endl;
    cout<<"24-hour format time is: ";
    cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<mins<<endl;
}
void convrt1(int& hour, int& mins, char& ampm){  
    
    if (hour>12&&hour<=23){
        hour=hour-12;
        ampm='P';
    }else if (hour==12){
        ampm='P';
        hour=12;
        ampm='A';
    }else if(hour==0){
    }else if (hour<12&&hour>=00){
        ampm='A';
    }else if(hour>=24||mins>59){
        cout<<"\n";
        cout<<"Invalid Input";
    }
    
}     
void out1(int& hour, int& mins, char& ampm){
    cout<<endl;
    if(hour<=12&&mins<=59){
    cout<<"The 12-hour format is: ";
    cout<<hour<<":"<<setw(2)<<setfill('0')<<mins<<" "<<ampm<<"M"<<endl; 
    }
}

//Function Definitions 3
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
    cout << "The North East division had the greatest sales for the quarter.\n";
     if ( b>a && b> c && b> d)
     cout << "The SouthEast division had the greatest sales for the quarter.\n";
     if ( c>a && c> b && c> d)
     cout << "The NorthWest division had the greatest sales for the quarter.\n";
    if ( d>a && d> b && d> c)
     cout << "The SouthWest division had the greatest sales for the quarter.\n";
     

}

//Function Definitions 4


//Function Definitions 5
float fallingDistance(float secs){
    return (secs)*(secs)*(.5)*(9.8);
}

//Function Definitions 6
float kineticEnergy(float m, float v){
    return (0.5)*m*v*v;
}

//Function Definitions 7


//Function Definitions 8
float presentValue(float a, float b, float c ){

    int prsntVal;

    
    prsntVal = a/pow((1+b),c) ;
    
    return prsntVal; 
}


//Function Definitions 9
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

//Function Definitions 10
float profit(float a, float b, float c, float d, float e){
    float profit;
    profit = ( (a*b) -c ) - ( (a*d) + e );
            return profit;
}
