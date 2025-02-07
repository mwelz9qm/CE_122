#include<iostream>
using namespace std;

int main()
{
	int numGrade;
	
	//basic if statement
	cout << "Enter your number grade: ";
	cin >> numGrade;

	if (numGrade >= 70)
	{
		cout << "You passed! " << endl;
	}

	// if-else statement
	cout << "Enter your new number grade: ";
	cin >> numGrade;

	if (numGrade >= 70)
	{
		cout << "You passed! " << endl;
	}
	else
	{
		cout << "You failed - so sorry! " << endl;
	}

	//if - else if - else
	cout << "Enter your new number grade: ";
	cin >> numGrade;

	if (numGrade >= 90)
	{
		cout << "Congrats, you earned an A!" << endl;
	}
	else if (numGrade >= 80)
	{
		cout << "Congrats, you earned a B!" << endl;
	}
	else if (numGrade >= 70)
	{
		cout << "You earned a C and passed the course." << endl;
	}
	else if (numGrade >= 60)
	{
		cout << "Bummer, you earned a D." << endl;
	}
	else
	{
		cout << "Sorry, you earned an F. Let's talk about those study skills!" << endl;
	}




	return 0;
}