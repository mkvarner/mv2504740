/* 
 * File:   main.cpp
 * Author: cdarway
 *
 * Created on July 13, 2014, 1:53 PM
 */

//Libraries
#include <iostream> 
#include <cstdlib> 
#include <time.h> 
#include <string> 

using namespace std;

int main()
{
    bool play_again = true;
    while(play_again == true) 
        //loop will run on user's entered choice to play game again or not
    {
      /* setting time as feed to generate random number.it help us generate different random depend upon 
      computer's current time.time(NULL) provides current time stamp*/
      srand(time(NULL));  
      int number =  rand() % 100 + 1;
      //generating and storing and random number
      bool is_guess_correct = false; 
  	  int input_number;  
  	  int attempts_count = 1;
          // keep track of attempts user has made to guess correct number
    
  //this loop will take number again and again until user enters correct number
  	  while(is_guess_correct == false) 
  	  {
          //Displaying different prompt lines for first and all other attempts
  		    if(attempts_count == 1)
   // if it is first attempt to guess the number then don't print "Again"
  		    {
  				  cout << "Enter Number : ";
  		    }
  		    else
  		    {
    				cout << "Enter Number Again : ";
  		    }
  		    cin >> input_number; 
          
  //Check if input number is same as that of randomly generated number or not
  		    if(input_number == number)
  		    {
       //User guessed number
cout << "Congratulation! You have guessed the correct number in " ;
cout << attempts_count << " attempts" << endl;
                                 is_guess_correct = true; 
                                 //terminate loop if true
                                  }
  		    else
  		    {
    				 attempts_count++; // Attempts
             //Guides user if less or greater than random number
    				 if(input_number < number) 
                            //if user entered number is less than random number 
    				 {
cout << "Entered number is small than then number to be guess." << endl;
    				 }
    				 else  
                         //if user entered number is greater than random number
    				 {
 cout << "Entered number is greater than then number to be guess." << endl;
    				 }
  		    }
  	  }
      //Asking user if they want to play again
      string choice;
      cout << "Press P to play again or any other key to terminate : ";
      cin >> choice;
      //if user enters any other key than P/p, exits
      if(choice != "p" && choice != "P")
      {
        play_again = false;
      }
	 }
    //Exit stage right
   return 0;
}