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

  //Declare Variables
    char choice;
           bool play_again = true;
    
    //Loop until choice is not in the menu selection
    do{
        //Output the menu and input the choice
        cout<<"Type 1 to guess the number I'm thinking of."<<endl;
        cout<<"Type anything else to exit menu"<<endl;
        
        cin>>choice;
        
        //Place problem solutions in the switch statement
        cout<<endl;
        switch(choice){
            case  '1':{
                cout<<"Guess the number!!!!!"<<endl<<endl;
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
  cout << "Guess is smaller than the number I'm thinking of." << endl;
    				 }
    				else  
                         //if player enters number greater than random number
    				 {
  cout << "Guess is greater than the number I'm thinking of." << endl;
    				 }
  		    }
  	  }
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
	
      break;

            }
                    default:{
                cout<<"Exit Menu"<<endl<<endl;
            }
        };
    }

    //Exit stage right!
    return 0;
    } while(choice=='1');   }