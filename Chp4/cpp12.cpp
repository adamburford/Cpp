/*		Adam Burford
		CGS2402 - Programming in  C++ for Business: Online#1413
		May 31, 2016 ©
		Programming Challenge #1 Chapter 4
*/

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	// Greeting Message
	cout << "Chapter 4 Program 1 - Dice Roll" << endl << "by: Adam Burford" << endl << "for: CGS 2402-Online#1413" << endl << endl;

	// Variable Definitions and seed pseudo-random number generator
	int DieRoll;
	int Guess;
	int cnt1;
	int cnt2;
	srand((unsigned int)time(NULL));

	// Promt user for input, whole number from 1-6
	cout << "Enter a number from 1 to 6: ";

	// Read input from user
	cin >> Guess;

	// Simulate dice roll with pseudo-random number
	DieRoll = (rand() % 6) + 1;																							//Note: rand is a function returning 0 thru 32767.

	// Output values of GUess and DieRoll to conosle
	cout << endl << "You Guessed: " << Guess << endl << "The Dice Roll was: " << DieRoll << endl;
	if (Guess == DieRoll)
		cout << "Winner!" << endl << "You guessed correctly! " << endl << endl;
	else
		cout << "You guessed wrong!" << endl << endl;

	// Display "Double Winner!" if DieRoll is odd
	if (DieRoll % 2 == 1)
		cout << "Double Winner!" << endl << "You rolled an odd number!" << endl << endl;

	// display "You are a lucky person!" If DieRoll + Guess is greater than 10 AND even 
	int sum = DieRoll + Guess;

	if ((sum >= 10) && ((sum & 1) == 0))																				// Test if sum is greater than or equal to 10 AND if sum is even
		cout << "You are a lucky person!" << endl << endl;

	return 0;
}