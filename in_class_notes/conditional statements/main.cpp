#include<iostream>

using namespace std;

int main()
{
	double temp;

	cout << "Enter the temperature outside: " << endl;
	cin >> temp;

	if (temp > 80)
	{
		cout << "It's hot out there! " << endl;
	}
	else if (temp >= 45)
	{
		cout << "It's pretty warm out there. " << endl;
	}
	else
	{
		cout << "Brrr!!" << endl;
	}

	char grade;
	cout << "Enter your class grade: " << endl;
	cin >> grade;
	
	switch (grade)
	{
	case 'A':
		cout << "You earned 4 grade points. " << endl;
		break;
	case 'B':
		cout << "You earned 3 grade points. " << endl;
		break;
	case 'C':
		cout << "You earned 2 grade points. " << endl;
		break;
	case 'D':
		cout << "You earned 1 grade points. " << endl;
		break;
	case 'F':
		cout << "You earned 0 grade points. " << endl;
		break;
	default:
		cout << "You entered an invalid grade!" << endl;
	}



	return 0;
}