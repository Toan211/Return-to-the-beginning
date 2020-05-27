#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include <random> //random_device rd;	mt19937; uniform_int_distribution

using namespace std;

void RandomGuess()
{
	int nSecret, nGuess;

	// initialize random seed
	srand(time(NULL));// set initial seed value to system clock

	// generate secret number between 1 and 10
	nSecret = rand() % 10 + 1;

	do {
		cout << "Guess the number (1 to 10): ";
		cin >> nGuess;

		if (nSecret < nGuess)
			cout << "The secret number is lower" << endl;
		else if (nSecret > nGuess)
			cout << "The secret number is higher" << endl;
	} while (nSecret != nGuess);

	cout << "Congratulations!" << endl;

}

void Random10()
{
	srand(time(0)); // set initial seed value to system clock

	for (int count = 0; count < 10; ++count)
	{
		cout << rand() << "\t";

		// If we've printed 5 numbers, start a new row
		if ((count + 1) % 5 == 0)
			cout << endl;
	}
}

void MersenneTwister()
{
	random_device rd;	// only used once to initialize (seed) engine
	mt19937 rng(rd());	//32 bit
						// random-number engine used (Mersenne-Twister in this case)
	
	//mt19937_64 rng(rd()) // 64 bit

	// output 10 random number
	for (int i = 0; i < 10; i++)
	{
		auto random_integer = rng(); //auto change the data type
		cout << random_integer << "\t";

		if ((i + 1) % 5 == 0) // print 5 numbers, then go to next line
			cout << endl;
	}
	
	// output 10 random number in the range 1 to 100 
	uniform_int_distribution<int> uni(1, 100);
	for (int i = 0; i < 10; i++)
	{
		auto random_integer = uni(rng);
		cout << random_integer << "\t";

		if ((i + 1) % 5 == 0)
			cout << endl;
	}
	
}
 
int main9()
{

	return 0;

}