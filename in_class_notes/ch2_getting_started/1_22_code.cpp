#include<iostream>
using namespace std;

int main()
{
	bool y = true;

	cout << "when y is true " << y << " prints." << endl;
	y = 0;
	cout << "when y is false " << y << " prints." << endl;

	char myChar = '&';

	cout << "My character value is " << myChar << endl;
	//typecasting to get the ASCII value
	cout << "The ASCII value of " << myChar << " is " << (int)myChar << endl;
	//adding 1 to character gives the next value in the ASCII table
	myChar = myChar + 1;
	cout << "My character value is " << myChar << endl;


	int x = 9;
	x++; //add 1 with increment
	++x; //add 1
	cout << "The new value of x is " << x << endl;
	x--; //subtract 1 with decrement
	cout << "The new value of x is " << x << endl;

	//x = 10 at this point
	x += 15; //new value of x is 25
	x *= 4; //new value of x is 100
	cout << "The new value of x is " << x << endl;

	cout << "Type in an integer" << endl;
	cin >> x;

	return 0;
}