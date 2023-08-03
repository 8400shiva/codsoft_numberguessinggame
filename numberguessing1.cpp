#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, tries = 0;
	srand(time(0)); //seed random number generator
	num = rand() % 100 + 1; // random number between 1 and 100
	cout << " Number guessing  Game\n\n";

	do
	{
		cout << " please Enter a guess between 1 and 100 : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << " entered number is Too high!\n\n";
		else if (guess < num)
			cout << " entered number is Too low!\n\n";
		else
			cout << "\ncongrates ! You got it in " << tries << " guesses!\n";
	} while (guess != num);

	return 0;
}


