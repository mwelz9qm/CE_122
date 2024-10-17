#include<iostream>

using namespace std;

int main()
{
	int numRows;
	cout << "How many rows in the triangle? ";
	cin >> numRows;
	
	for (int i = 1; i <= numRows; i++)
	{
		for (int j = i; j <= numRows; j++)
		{
			cout << "*";
		}
		cout << endl;
	}


	int num;
	int sum = 0;
	
	cout << "Enter a number to add to the list. ";
	cin >> num;
	while (cin)
	{
		if (num < 0)
		{
			cout << "You entered a negative!" << endl;
			cout << "Next number: ";
			cin >> num;
			continue;
		}
		else
		{
			sum = sum + num;
			cout << "Next number: ";
			cin >> num;
		}
	}
	cout << "The sum of your numbers is " << sum << endl;
	return 0;
}