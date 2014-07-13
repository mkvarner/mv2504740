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
  	  {
  		    if(attempts_count == 1) 
  		    {
  				  cout << "Enter Number 1-56: ";
  		    }
  		    else
  		    {
    				cout << "Enter Number Again : ";
              		    }
  		    cin >> input_number;
                        if(input_number == number)
  		    {
                     //Player wins!
     cout << "Congratulation! You have guessed the correct number in " ;
             cout << attempts_count << " attempts" << endl;
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
  cout << "Entered number is smaller than the number in my head." << endl;
    				 }
    				else  
                         //if player enters number greater than random number
    				 {
  cout << "Entered number is greater than the number in my head." << endl;
    				 }
  		    }
  	  }
      //Play again?
      string choice;
      cout << "Press P to play again or any other key to terminate : ";
      cin >> choice;
      //player chooses any other key than P/p quits
      if(choice != "P" && choice != "p")
      {
        play_again = false;
      }
	
      //Exit Stage right
   return 0; 
    }}