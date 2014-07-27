/* 
 * File:   main.cpp
 * Author: Megan Varner
 * Created on July 26, 2014, 9:16 AM
 * Project two game includes functions and arrays
 */

//Libraries
#include <iostream>
#include <cstdlib> 
#include<iomanip>
#include<cmath>

//Function problem 8
float calculate(float, float);

//Function problem 9
void showValues(int[],int);

//Function Problem 4
void change(int);

//Function Problem 5
bool isEven(int);

using namespace std;

int main(int argc, char** argv)
{
    // LeepFrog Mathematics – Game

  //Declare Variables
     int player;          
    char choice;
           bool play_again = true;
           
            cout<<"Enter 1 for Beginner Player and 2 for Expert Player 2\n";
           cin>>player;
           
           if (player == 1)
           {
                 //Loop until choice is not in the menu selection
    do{
        //Start
        cout<<"\n";
        cout<<"Welcome to my arcade!\n";
        cout<<"Lets PLAY!\n";
        cout<<"\n";
        
        //Output the menu and input the choice
        cout<<"Type 1 to play...guess the number I'm thinking of"<<endl;
        cout<<"Type 2 to play...Add with me"<<endl;
        cout<<"Type 3 to play...Subtract with me"<<endl;
        cout<<"Type 4 to play...Lesson on Numbers"<<endl;
        cout<<"Type 5 to play...Even or Odd"<<endl;
        cout<<"Type anything else to exit menu"<<endl;
        cin>>choice;
        play_again=true;
        //Place problem solutions in the switch statement
        cout<<endl;
        switch(choice){
          
           //guess the number I'm thinking of 
            case  '1':{
                cout<<"Guess the number I'm thinking of!!!!!"<<endl<<endl;
                cout<<"\n";
             
    while(play_again == true)
    {
      srand(time(NULL));  
      int number =  rand() % 56 + 1; 
      //stores random number between 1-56
      bool is_guess_correct = false; 
  	  int input_number;
  	  int attempts_count = 1; 
          // number of attempts player has made
    
      //loops until player enters correct number
  	  while(is_guess_correct == false) 
              
  	  {
  		    if(attempts_count == 1) 
  		    {
                        cout <<"Lets play!\n";
  				  cout << "I'm thinking of a number 1-56.... ";
                                  cout <<"what is it?\n";
  		    }
  		    else
  		    {
    				cout << "Guess Again: ";
              		    }
  		    cin >> input_number;
                        if(input_number == number)
  		    {
                     //Player wins!
     cout <<"\n";
     cout << "You guessed the number in my head in " ;
     cout << attempts_count << " attempts" << ". Now lets play again!"<<endl;
    				 is_guess_correct = true;
                                 //stops loop if true
  		    }
  		    else
  		    {
            //Player needs to keep guessing
    				 attempts_count++; 
                                 // attempts
    				 if(input_number < number) 
                      //if player enters number less than random number 
    				 {
  cout << "Your guess is smaller than the number I'm thinking of." << endl;
    				 }
    				else  
                         //if player enters number greater than random number
    				 {
  cout << "Your guess is greater than the number I'm thinking of." << endl;
    				 }
  		    }
  	  }
      //Play again?
      string choice;
      cout <<"\n";
      cout << "Press P to play again or any other key to exit this game";
      cout <<" and return to main menu:";
      cin >> choice;
      //player chooses any other key than P/p it will exit
      if(choice != "P" && choice != "p")
      {
        play_again = false;
      }
    }
      break;
 

            }
            
            //Add with me
                  case  '2':{
                      
while(play_again == true)
    {
  srand(time(0));
  const int ran = 999;
  int num1, num2, num3, answer;
  
  //Generates random number
  num1 = 1 + rand() % ran;
  num2 = 1 + rand() % ran;
 
  //outputs the addition problem
  cout << "Lets get smart! Add the numbers and then enter your answer...\n";
  cout<<"\n";
  cout << setw(5) << num1 << endl;
  cout << "+ " << setw(3) << num2 << endl;
  cout << "_____" << endl;
  cin >> answer;
  num3 = num1 + num2;
  std::cin.get();
 
  
  cout<<"\n";
  cout << num3 << " is the correct answer, ";
   
  //If answer is correct outputs
  if (answer == num3)
    {
      cout << "You're so smart!" << endl;
    }

  //If answer is wrong outputs
  else
    {
      cout << "Nice try. Want to play again?" << endl;}
    string choice;
      cout <<"\n";
      cout << "Press P to play again or any other key to exit this game";
      cout <<" and return to main menu:";
      cin >> choice;
      //player chooses any other key than P/p it will exit
      if(choice != "P" && choice != "p")
      {
        play_again = false;
      }}
                      
                      break;
          }
                  //Subtract with me
            case  '3':{
                while(play_again == true)
    {
  srand(time(0));
  const int ran = 999;
  int num1, num2, num3, answer;
  
  //generates random number
  num1 = 1 + rand() % ran;
  num2 = 1 + rand() % ran;
 
  //outputs subtraction problem
  cout << "Lets get smart! Add the numbers and then enter your answer...\n";
  cout<<"\n";
  cout << setw(5) << num1 << endl;
  cout << "- " << setw(3) << num2 << endl;
  cout << "_____" << endl;
  cin >> answer;
  num3 = num1 - num2;
  std::cin.get();
 
  cout<<"\n";
  cout << num3 << " is the correct answer, ";
   
  //outputs if answer is correct
  if (answer == num3)
    {
      cout << "You're so smart!" << endl;
      cout<< "Want to go another round?\n";
    }

  //outputs if answer is wrong
  else
    {
      cout << "Nice try. Want to play again?" << endl;}
  
    string choice;
      cout <<"\n";
      cout << "Press P to play again or any other key to exit this game";
      cout <<" and return to main menu:";
      cin >> choice;
      //player chooses any other key than P/p it will exit
      if(choice != "P" && choice != "p")
      {
        play_again = false;
      }}
                
                 break;
            }
   
            //Lesson on Numbers
            case  '4':{
        cout<<"Learn About Numbers!!!!"<<endl;
        cout<<endl;
        
        int num = 56;
        
        cout<<num<<" is not the same as"<<endl;
        
        change(num);
       cout<<"Because "<<num<<" can only be "<<num<<".\n";
       cout<<endl;
       cout<<"Each are different quantities so they can't be the same.\n";
       cout<<"Numbers are fun! So lets play another game!!!!!!\n";
             
                        break;
    }
                               //Even or Odd
            case '5':{   
                
                int num;
                
                 cout<<"See if you know your evens and odds!";
                cout<<endl;
                cout<<"Think of a number and then write on\n";
                cout<<"a piece of paper even or odd for each attempt\n";
             
                
                 while(play_again == true)
    {
                
                cout<<"Write it down\n";
                cout<<"Now enter your number: \n";
                cin>>num;
                
                if (isEven(num)){
                    cout<<endl;
                    cout<<num<<" is even\n";
                    cout<<"Were you right or wrong?\n";
                }
                else{
                    cout<<endl;
                    cout<<num<<" is odd\n";
                    cout<<"Were you right?\n";
                }
                        
  
                           //Play again?
      string choice;
      cout <<"\n";
      cout << "Press Y for yes or N for no and try again: ";
      cin >> choice;
      cout<<endl;
      //player chooses any other key than P/p it will exit
      if(choice != "N" && choice != "n")
      {
        play_again = false;
      }}
                        break;
            }
    
            //exit menu when 1-6 are not entered
                    default:{
                cout<<"Exit Menu"<<endl<<endl;
            };
        }
       
        
    }while(choice >= '1' && choice <='5'); //ends loop i.e. arcade
           }

           else (player == 2);
           {
                 //Loop until choice is not in the menu selection
    do{
        //Start
        cout<<"\n";
        cout<<"Welcome to my arcade!\n";
        cout<<"Lets PLAY!\n";
        cout<<"\n";
        
        //Output the menu and input the choice
        cout<<"Type 6 to play...Start Multiplying"<<endl;
        cout<<"Type 7 to play...Start Dividing"<<endl;
        cout<<"Type 8 to play...Sum the Percents"<<endl;
        cout<<"Type 9 to play...Count by 1s, 2s, 3s, 4s, & 5s"<<endl;
        cout<<"Type anything else to exit menu"<<endl;
        cin>>choice;
        play_again=true;
        //Place problem solutions in the switch statement
        cout<<endl;
        switch(choice){
           
            //Start Multiplying
            case  '4':{
                
//2-dimensional array
int anArray[5][4][3];

// 6x6 array
const int rows = 6;
const int cols = 6;
int prod[rows ][cols ] = { 0 };
 
// Create table
for (int nRow = 0; nRow < rows; nRow++)
    for (int nCol = 0; nCol < cols; nCol++)
        
        //multiplication calculation
        prod[nRow][nCol] = nRow * nCol; 
 
// output the table
for (int nRow = 1; nRow < rows; nRow++)
{
    for (int nCol = 1; nCol < cols; nCol++)
        cout << prod[nRow][nCol] << "\t";
 
    cout << "\n";
}
break;
        }
            //Start Dividing
            case  '5':{
                
//2-dimensional array
int anArray[5][4][3];

// 6x6 array
const int rows = 6;
const int cols = 6;
int div[rows ][cols ] = { 0 };
 
// Create table
for (int nRow = 0; nRow < rows; nRow++)
    for (int nCol = 0; nCol < cols; nCol++)
        
        //Division calculation
        div[nRow][nCol] = nRow / nCol;
 
// output the table
for (int nRow = 1; nRow < rows; nRow++)
{
    for (int nCol = 1; nCol < cols; nCol++)
        cout << div[nRow][nCol] << "\t";
 
    cout << "\n";
}
break;
        }
                   //Sum the Percents
            case '6':{   
                
                        float num1, num2;
                        cout<<"The challenge:\n";
 cout<<"Pick two decimals and turn them into percents ";
         cout<<"and add together on paper...\n";
 cout<<"Then check your solution by solving on here! Ready, set, go!\n";
  while(play_again == true)
    {
           cout<<endl;
                        cout << "Enter first number in decimal form:\n";
                        cin >> num1;
                        while (num1<=0){
                        cout << "Enter first number in decimal form:\n";
                            cin >> num1;
                        }
     cout << "Enter second number in decimal form to be added to first:\n";
                        cin >>num2;
                        while (num2<=0){
    cout << "Enter second number in decimal form to be added to first:\n";
                            cin >> num2;
                        }
  cout << "The sum is %" << calculate(num1, num2)<<endl;
  
                           //Play again?
      string choice;
      cout <<"\n";
      cout << "Press P to play again or any other key to exit this game";
      cout <<" and return to main menu:";
      cin >> choice;
      //player chooses any other key than P/p it will exit
      if(choice != "P" && choice != "p")
      {
        play_again = false;
      }}
                        break;
            }
            
          //Count by 1s, 2s, 3s, 4s, & 5s
                    case  '7':{
                cout<<"Lets count by 1s, 2s, 3s, 4s, & 5s!!!!!"<<endl<<endl;
              
             
    while(play_again == true)
    {
        int ch;
        cout<<"Enter what to count by 1, 2, 3, 4, or 5:\n";
        cin >>ch;
        
        if (ch == 1) {
        const int Array_size = 10;
        int numbers [Array_size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        
        showValues (numbers, Array_size);
                     }
        
          if (ch == 2) {
        const int Array_size = 10;
        int numbers [Array_size] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
        
        showValues (numbers, Array_size);
                            }
        
          if (ch == 3) {
        const int Array_size = 10;
        int numbers [Array_size] = {3, 6, 9, 12, 15, 18, 21, 24, 27, 30};
        
        showValues (numbers, Array_size);
                        }
        
          if (ch == 4) {
        const int Array_size = 10;
        int numbers [Array_size] = {4, 8, 12, 16, 20, 24, 28, 32, 36, 40};
        
        showValues (numbers, Array_size);
                        }
        
          if (ch == 5) {
        const int Array_size = 10;
        int numbers [Array_size] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
        
        showValues (numbers, Array_size);
                        }
       if (ch>5){
           cout<<"Invalid Entry\n";
       }   
       
        
            string choice;
      cout <<"\n";
      cout << "Press P to play again or any other key to exit this game";
      cout <<" and return to main menu:";
      cin >> choice;
      //player chooses any other key than P/p it will exit
      if(choice != "P" && choice != "p")
      {
        play_again = false;
      }}
                        break;
    }
    }
  
    }while(choice >= '4' && choice <='9'); //ends loop i.e. arcade
           }
    //Exit stage right!
    return 0;
    } 

//Function Definitions 8
float calculate(float a, float  b)
{
    float  percent;
    //Convert and sum percents
    percent = (a+b) * 100; 
    return percent;
}
    
 //Function Definitions 9
    void showValues(int nums[], int size)
    {
        for (int index = 0; index < size; index++)
            cout<<nums[index]<<" ";
        cout<<endl;
    }
    
    //Function Definitions 4
    void change(int you){
                
    you = 57;
    cout<<you<<endl;
    }
    
   //Function Definitions 5
    bool isEven(int number){
        bool stat;
        
        if(number % 2 == 0)
            stat = true;
        else
            stat = false;
        return stat;
    }

