/*
class doe for 1/20/25
*/
#include<iostream>

using namespace std;

int main()
{
	int x, y;
	cout << "Pick an integer: ";
	cin >> x; //our first cin statement
	cout << "Your integer squared is: " << x * x << endl;
	cout << "Please pick two integers now: ";
	cin >> x >> y;
	cout << "The sum of your integers is " << x + y << endl;
	cout << "The memory address of x is " << &x << endl;

	char ch;
	ch = '!';
	cout << (int)ch << endl;

	return 0;
}