#include<iostream>
#include<string>
#include<fstream>


using namespace std;

int main()
{
	int guess, num = 72, counter = 0;
	bool isGuessed = false;

	while (!isGuessed && counter < 5)
	{
		cout << "Enter a random number guess fo my number between 0 and 100: ";
		cin >> guess;
		counter++; //tracking number of guesses
		if (guess == num)
		{
			cout << "Nice, you guessed my number -- it's " << num << "!" << endl;
			isGuessed = true;
		}
		else if (guess > num)
		{
			cout << "Your guess was higher than my number!" << endl;
		}
		else
		{
			cout << "Your guess was lower than my number!" << endl;
		}
	}
	if (!isGuessed)
	{
		cout << "You ran out of guesses!" << endl;
	}

	//menu example

	int choice;
	cout << "Enter a menu choice, 0 to quit." << endl;
	cin >> choice;
	while (choice != 0)
	{
		cout << "Your choice was " << choice << endl;
		cout << "Enter another menu choice, 0 to quit." << endl;
		cin >> choice;
	}
	
	cout << "Enter a menu choice, Q to quit." << endl;
	cin >> choice;
	while (cin) //while cin isn't in the fail state
	{
		cout << "Your choice was " << choice << endl;
		cout << "Enter another menu choice, Q to quit." << endl;
		cin >> choice;
	}
	//get cin out of fail state
	cin.clear();
	cin.ignore(100, '\n');

	//loop through a text file

	ifstream inFile;
	inFile.open("practice.txt");
	string name;
	int testScore;

	while (inFile)
	{
		inFile >> name >> testScore;
		cout << "Name: " << name << " Test Score: " << testScore << endl;
		cout << "************************" << endl;
	}

	inFile.close();
	return 0;
}