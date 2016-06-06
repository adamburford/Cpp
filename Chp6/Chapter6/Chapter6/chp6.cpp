/*		Adam Burford
CGS2402 - Programming in  C++ for Business: Online#1413
June 04, 2016 ©
Chapter 6 - Programming Challenge #11 "Lowest Score Drop"
*/

#include <iostream>
#include <iomanip>
using namespace std;

void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
	int score1 = 0;	getScore(score1);
	int score2 = 0;	getScore(score2);
	int score3 = 0; getScore(score3);
	int score4 = 0; getScore(score4);
	int score5 = 0; getScore(score5);

	calcAverage(score1, score2, score3, score4, score5);

	return 0;
}

void getScore(int &score)
{
	cout << "Enter a test score (0 to 100): ";
	cin >> score;
	while (score < 0 || score > 100)
	{
		cout << "Invalid Input!" << endl << "Must be in the range of 0 to 100 inclusive!" << endl << "Renter score (0 to 100): ";
		cin >> score;
	}
}

void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
	int lowest = findLowest(score1, score2, score3, score4, score5);
	int total = score1 + score2 + score3 + score4 + score5 - lowest;
	float average = total / 4.0;
	cout << "The average of your test scores (excluding the lowest: " << lowest << ") is " << setprecision(5) << average << endl;
}

int findLowest(int score1, int score2, int score3, int score4, int score5)
{
	int lowest = score1;
	if (score2 < lowest)
		lowest = score2;
	if (score3 < lowest)
		lowest = score3;
	if (score4 < lowest)
		lowest = score4;
	if (score5 < lowest)
		lowest = score5;

	return lowest;
}