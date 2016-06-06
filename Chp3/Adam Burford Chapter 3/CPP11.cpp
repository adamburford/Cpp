/*
Adam Burford # 2128028
May 23, 2016 ©
Chapter 3 Program 1
*/

#include <iostream>
#include <thread>
using namespace std;

int main()
{
	// Decalre variables
	unsigned int population;
	float income;
	float wage;
	unsigned short students;
	float gnp;
	char gender;

	// Prompt user for values and read in input from user
	cout << "Please enter values for the following:" << endl << "(do not include commas in values)" << endl << endl;

	cout << "The population of the US: ";
	cin >> population;

	cout << "The average family income in the US: ";
	cin >> income;

	cout << "The hourly wage of one family member: ";
	cin >> wage;

	cout << "The total student attending SPC: ";
	cin >> students;

	cout << "The total GNP of Florida: ";
	cin >> gnp;

	cout << "A single character to represent person's gender: ";
	cin >> gender;

	// Display what values the user entered

	cout << endl << endl << "The values you entered were:" << endl << endl;

	cout << "US Population: " << population << endl;
	cout << "Averague US Income: " << income << endl;
	cout << "Individual Wage: " << wage << endl;
	cout << "Students at SPC: " << students << endl;
	cout << "GNP of Florida: " << gnp << endl;
	cout << "Gender: " << gender << endl;

	cout << endl << endl;

	// Make computer beep 5 times
	for (int x = 0; x < 5; x++)
	{
		cout << '\a';
		this_thread::sleep_for(0.5s);
	}

	return 0;
}