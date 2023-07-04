// Guessing Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
#include <time.h>
using namespace std;
#define LOG	cout<<'\n'<<
#define GET cin>>

int main()
{
	system("COLOR F0");
	short i{};
	char playAgain = 'y';
	int playerGuess{};
	while(playAgain=='y'||playAgain=='Y'){           
	//generating a random number
	srand((unsigned) time(NULL));
	int magicalNum = rand()-19000;

	LOG " I a positive integer. Guess me in 20 attempts.";
	int score = 100;
	for (i ; i < 20; i++) {
		LOG "Attempt"<<i+1<<": Type what you guess: ";
		GET playerGuess;
		if (playerGuess == magicalNum) break;
		if (playerGuess < magicalNum) {
			score -= 5;
			LOG " Its less than me.";
		}
		if (playerGuess > magicalNum) {
			score -= 5;
			LOG "Its greater than me.";
		}
		
	}

	if (i >= 20) {
		system("COLOR 4F");
		LOG"You lost.";
		LOG " I am " << magicalNum;
		LOG "Score: " << score<<"%";
	}
	if (i < 20) {
		system("COLOR 1F");
		LOG "You won!";
		LOG "Score: " << score << "%";
	}
	LOG "Do you want to play again? ";
	GET playAgain;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
