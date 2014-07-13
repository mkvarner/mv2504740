/* 
 * File:   main.cpp
 * Author: Megan Varner 
 * Created on July 13, 2014, 9:03 AM
 * Guess the number in my head game
 */

//Libraries
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string> 

using namespace std;

int main(int argc, char** argv)
{
    bool play_again = true;
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
              do{
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
  cout << "Guess is smaller than the number I'm thinking of." << endl;
    				 }
    				else  
                         //if player enters number greater than random number
    				 {
  cout << "Guess is greater than the number I'm thinking of." << endl;
    				 }
  		    }
  	  }
          }while(input_number>=1&&input_number<=56);
      //Play again?
      string choice;
      cout <<"\n";
      cout << "Press P to play again or any other key to exit game: ";
      cin >> choice;
      //player chooses any other key than P/p it will exit
      if(choice != "P" && choice != "p")
      {
        play_again = false;
      }
	
      //Exit Stage right
   return 0; 
    }}