//guessing game for 2/21

#include<iostream>
#include<fstream>

using namespace std;


const int SECRET = 57;

int main()
{
	int guess, numGuesses;

	//initial guess
	cout << "Guess the number I am thinking of: ";
	cin >> guess;
	numGuesses = 1;
	while (guess != SECRET && numGuesses <=5)   //loop while wrong guess and numGuesses < 5
	{
		if (guess > SECRET)
		{
			cout << "Too high!" << endl;
		}
		else
		{
			cout << "Too low!" << endl;
		}
		cout << "Guess again: ";
		cin >> guess;
		numGuesses++;  //increment the number of guesses
	}
	if (numGuesses == 6)
	{
		cout << "You ran out of guesses! The number was " << SECRET << endl;
	}
	else {
		cout << "You guessed right! It took you " << numGuesses << " guesses.";
		cout << endl;
	}

	//read in and loop over a file
	ifstream inFile;
	inFile.open("test.txt");
	int counter = 0;
	char ch;
	while (inFile)
	{
		inFile >> ch; //read in character
		cout << ch; //print out character
		counter++; //counting characters in file
	}
	cout << endl;
	cout << "The number of characters in the file is " << counter;


	inFile.close();
	return 0;
}