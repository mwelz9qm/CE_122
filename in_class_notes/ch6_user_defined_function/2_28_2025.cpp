#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int rollDice();  //function prototype for our dice rolling function

int main()
{
	srand(time(0));  //sets the seed of the random number generator
	
	int myRoll;
	int counter = 1;
	myRoll = rollDice();
	cout << "My roll is " << myRoll << endl;

	while (myRoll != 2)  //while loop runs until we roll a 2
	{
		counter++;
		myRoll = rollDice();
		cout << "New roll value is: " << myRoll << endl;
	}
	cout << "It took " << counter << " rolls to get a 2." << endl;

	return 0;
}
//the actual implementation of our dice rolling function
int rollDice()
{
	int die1, die2;
	die1 = rand() % 6 + 1;
	die2 = rand() % 6 + 1;
	return die1 + die2;
}
