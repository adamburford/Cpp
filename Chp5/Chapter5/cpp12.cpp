/*		Adam Burford
		CGS2402 - Programming in  C++ for Business: Online#1413
		June 02, 2016 ©
		Programming Challenge #1 Chapter 5
*/

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	// Greeting Message
	cout << "Chapter 5 Program 1 - \"cpp12\"" << endl << "by: Adam Burford" << endl << "for: CGS 2402-Online#1413" << endl << endl;

	// # 1: Variable Definitions and seed pseudo-random number generator
	int DieRoll;
	int Guess;
	int cnt1;
	int cnt2;
	srand((unsigned int)time(NULL));

	// # 2: Prompt user for input, whole number from 1-6
	cout << "Enter a number from 1 to 6: ";

	// # 3: Read input from user
	cin >> Guess;

	// # 4: Simulate dice roll with pseudo-random number
	DieRoll = (rand() % 6) + 1;																							//Note: rand is a function returning 0 thru 32767.

	// # 5: Output values of GUess and DieRoll to conosle
	cout << endl << "You Guessed: " << Guess << endl << "The Dice Roll was: " << DieRoll << endl;
	if (Guess == DieRoll)
		cout << "WINNER! You guessed correctly! " << endl << endl;
	else
		cout << "You guessed wrong!" << endl << endl;

	// # 6: Display "Double Winner!" if DieRoll is odd
	if (DieRoll % 2 == 1)
		cout << "DOUBLE WINNER! You rolled an odd number!" << endl << endl;

	// # 7: display "You are a lucky person!" If DieRoll + Guess is greater than 10 AND even 
	int sum = DieRoll + Guess;

	if ((sum >= 10) && (!(sum & 1)))
		cout << "You are a lucky person!" << endl << endl;

	int i;

	// # 8: print out numbers 1-5 to the console on one line
	for (i = 1; i <= 5; i++) 
		cout << i << " ";
	cout << endl;
	
	// # 9: print out every muptiple of 17 from 100 down to 0 with a for loop
	for (i = 100; i >= 0; i--) 
		if (i % 17 == 0)
			cout << i << " ";
	cout << endl;

	// # 10: print out every multiple of 17 from 100 to 0 with a while loop
	i = 100;
	while (i >= 0)
	{
		if (i % 17 == 0)
			cout << i << " ";
		i--;
	}
	cout << endl <<endl;

	// # 11: Ask user for a number, read input into Guess, and print Guess %
	do 
	{
		cout << "Enter a number (0 to quit): ";
		cin >> Guess;
		cout << Guess << " % 5 = " << Guess % 5 << endl;
	} while (Guess != 0);
	cout << endl;

	// # 12: Nested for loops, i from 1-5, j from 1-6. Print i * j in inner loop on one line seperated by tabs; New line in outer loop.
	for (i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			cout << i * j << '\t';
		}
		cout << endl;
	}

	return 0;
}