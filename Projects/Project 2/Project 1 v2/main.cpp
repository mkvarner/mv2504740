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

using namespace std;

int main(int argc, char** argv)
{
    // LeepFrog Mathematics – Game

  //Declare Variables
    char choice;
           bool play_again = true;
    
    //Loop until choice is not in the menu selection
    do{
        //Start
        cout<<"Welcome to my arcade!\n";
        cout<<"Lets PLAY!\n";
        cout<<"\n";
        
        //Output the menu and input the choice
        cout<<"Type 1 to play...guess the number I'm thinking of"<<endl;
        cout<<"Type 2 to play...Add with me"<<endl;
        cout<<"Type 3 to play...Subtract with me"<<endl;
        cout<<"Type anything else to exit menu"<<endl;
        cin>>choice;
        play_again=true;
        //Place problem solutions in the switch statement
        cout<<endl;
        switch(choice){
            //GAME 1
            
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
          
            //exit menu when 1,2, or 3, are not entered
                    default:{
                cout<<"Exit Menu"<<endl<<endl;
            }
        };
       
        
        
    }while(choice >= '1' && choice <='3'); //ends loop i.e. arcade

    //Exit stage right!
    return 0;
    } 