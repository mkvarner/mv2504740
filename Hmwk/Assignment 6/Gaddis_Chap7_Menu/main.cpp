/* 
 * File:   main.cpp
 * Author: Megan Varner 
 * Created on July 24, 2014, 7:32 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Problem 1
bool doRepeat();
int getChLen(const char[], const int);

//Function Problem 2
bool isHexDgt(char);
void getHex(char[],const int);
short chrInt(char,const short,const short);
void addHexDgt(char,char,char&,bool&);
void addHex(char[],char[],const int,char[],bool&);

//Function Problem 3
void delete_repeats(char[],int&);

//Function Problem 4
double stdDev(double[], int);

//Function Problem 5
void cRpeats(const int[],const int);

//Function Problem 6
void istSort(int[],const int);
void pb5Out(const int[],const int);

//Function Problem 7
void getScores(int[],const int,int&);
int countPerfect(const int[],const int);

//Function Problem 8
void smplOut(const int[],const int,const int);

//Function Problem 9
void getData(double[],const string[],const short);
double totalRainfall(const double[],const short);
double averageRainfall(const double);
double driestMonth(const double[],const short,int&);
double wettestMonth(const double[],const short,int&);

//Function Problem 10
void smplOut(const string[],const int,const int);
void slctSort(string[],const int);

//Execution
int main(int argc, char** argv) {
    
    char choice;
    
    do{
     
        cout<<"Type 1 for Problem 1 from Gaddis"<<endl;
        cout<<"Type 2 for Problem 2 from Savitch"<<endl;
        cout<<"Type 3 for Problem 3 from Savitch"<<endl;
        cout<<"Type 4 for Problem 4 from Savitch"<<endl;
        cout<<"Type 5 for Problem 5 from Savitch"<<endl;
        cout<<"Type 6 for Problem 6 from Savitch"<<endl;
        cout<<"Type 7 for Problem 2 from Gaddis"<<endl;
        cout<<"Type 8 for Problem 3 from Gaddis"<<endl;
        cout<<"Type 9 for Problem 4 from Gaddis"<<endl;
        cout<<"Type 10 for Problem 7 from Gaddis"<<endl;
        cin>>choice;
        
      
        cout<<endl;
        switch(choice){
             case 1:{   
                
                          const int MAX = 50;
                int scores[MAX];
                int tot;
                
                //Input
                getScores(scores,MAX,tot);
                
                //Output
                cout<<"# of perfect scores out of "<<tot<<" is ";
                cout<<countPerfect(scores,tot)<<endl;
            
                        
                        break;
            }
            
            //problem 1 Savitch 
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
            }while (ans=='y'||ans=='Y');
                  
                break;
            }
            
            //problem 3
            case 3:{
                
                    const int line = 6;
                double example[MAX_SIZE];
                int actual = rand()%(MAX_SIZE-line+1)+line;
                
               
                for(int i = 0;i<actual;i++)
                    example[i] = static_cast<double>(rand())/rand();
                
                //Calculate SD
                cout<<"Numbers in the array:\n";
                for(int i = 0;i<actual;i++){
                    cout<<setw(10)<<example[i];
                    if((i+1)%(line+1) == 0)
                        cout<<endl;
                    else
                        cout<<" ";
                }
                cout<<endl;
                cout<<"Standard deviation: "<<stdDev(example, actual);
        
                break;
            }
            
            //problem 2 Savitch
        case 4:{ 
             int hour, mins;
            char ans;
            //loop
            do{   
            input2(hour, mins);
            wait2(hour, mins);
            output2(hour, mins);
            cout<<"\n";
            cout<<"Recalculate wait time:\n";
            cout<<"Enter y for yes, n for no: ";
            cin>>ans;
            }while(ans=='y'||ans=='Y');
            
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
                 
                         while (mass<0 || velocity<0){
   cout << "Enter the mass and velocity of an object with a space in between\n";
                            cin >> mass>>velocity;
                        }
                         
                jo = kineticEnergy(mass, velocity);
                
        
                //Output 
                cout<<"The kinetic energy of the object is: "<<jo<<" J\n";
           
                break;
            }
            
            //problem 3 Savitch
            case 7:{
                   int hour, mins;
            char ans, ampm;
            do{
            //Function Call    
            input3(hour, mins);
            wait3(hour, mins);
            twelve3(hour, mins, ampm);
            output3(hour, mins, ampm);
            cout<<"\n";
            cout<<"Recalculate wait:\n";
            cout<<"Enter y for yes, n for no: ";
            cin>>ans;
            cout<<"\n";
            }while(ans=='y'||ans=='Y');
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
void input2(int& hour, int& mins){
    cout<<"Enter hour in 24-hour format:"<<endl;
    cout<<"Hour: ";
    cin>>hour;
    cout<<"Wait time in minutes:";
    cout<<"\n";
    cout<<"Wait Time: ";
    cin>>mins;
    cout<<endl;
}
void wait2(int& hour, int& mins){
    if (mins>59){
        hour=hour+(mins/60);
        mins=(mins%60);
    }if (mins<59){
        mins=mins;
    }if(hour>23){
        hour=hour-24;
    }    
}
void output2(int& hour, int& mins){
    cout<<"The time will be ";
    cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<mins;
    cout<<" hours after your wait.\n";
}

//Function Definitions 5
float fallingDistance(float secs){
    return (secs)*(secs)*(.5)*(9.8);
}

//Function Definitions 6
float kineticEnergy(float m, float v){
    return (0.5)*m*v*v;
}

//Function Definitions 7
void input3(int& hour, int& mins){
    cout<<"Enter hour in 24-hour format:"<<endl;
    cout<<"Hour: ";
    cin>>hour;
    cout<<"Wait time in minutes:";
    cout<<"\n";
    cout<<"Wait Time: ";
    cin>>mins;
    cout<<endl;
}
void wait3(int& hour, int& mins){
    if (mins>59){
        hour=hour+(mins/60);
        mins=(mins%60);
    }if (mins<59){
        mins=mins;
    }if(hour>23){
        hour=hour-24;
    } 
}

void twelve3(int& hour, int& mins, char& ampm){
    
    if (hour>12&&hour<=23){
        hour=hour-12;
        ampm='P';
    }else if (hour==12){
        ampm='P';
    }else if(hour==0){
        hour=12;
        ampm='A';
    }else if (hour<12&&hour>=00){
        ampm='A';
    }else if(hour>=24||mins>59){
        cout<<"\n";
        cout<<"Invalid Input";
    }
}

void output3(int& hour, int& mins, char& ampm){
    cout<<"The time will be ";
    cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<mins;
    cout<<" "<<ampm<<"M after your wait.\n";
}

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