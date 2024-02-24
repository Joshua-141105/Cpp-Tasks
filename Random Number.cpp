#include <iostream>
#include <cstdlib>			//Importing required libraries
using namespace std;
int main()
{
	cout<<"-----------------------WELCOME TO NUMBER GUESSING GAME-----------------------\n";
	cout<<"---TRY TO GUESS THE RANDOM NUMBER CHOSEN BY THE COMPUTER BETWEEN 1 AND 100---";
	int random_number = rand() % 10 + 1;			//Randomising Computer Choice
	int result=0;									//Result of the game
	int user_choice;								//Initialising
	int no_of_attempts=0;
	while(result==0)								//Looping until the user guesses the number
	{
		cout<<"\nEnter your choice: ";				//User Input
	    cin>>user_choice;
	    if(random_number==user_choice)				//Checking whether the guess is correct
	    {
	    	no_of_attempts++;
	        result=1;
	        cout<<"Hurray!!! You have guessed it correctly in "<<no_of_attempts<<" attempts.";			//Print result
	    }
	    else if(user_choice>random_number)			//Check whether the guess is high
	    {
	    	no_of_attempts++;
	        cout<<"You have guessed a higher number.\n";		//Print result
	    }
	    else if(user_choice<random_number)			//check whether the guess is low
	    {
	    	no_of_attempts++;
	        cout<<"You have guessed a lower number.\n";			//Print result
	    }
	}
}
