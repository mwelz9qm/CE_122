#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
//learning about void functions which don't return a value
void printRandom();   //take no parameters in, just prints
void displayInfo(int a, int b); //takes in two integer params
void printNums(int n); //takes in an integer param

void swap(int c, int d); //function passing params by value
void swapRef(int& c, int& d); //function passing params by reference


int main()
{
	printRandom();
	displayInfo(24, 56);
	printNums(12);
	int a = 3;
	int b = 2;
	//the effect of swap
	swap(a, b);
	cout << "a = " << a << " and b = " << b << endl;
	//the effect of swap by reference
	swapRef(a, b);
	cout << "a = " << a << " and b = " << b << endl;


	return 0;
}
void printRandom()
{
	srand(time(0));
	cout << "Here's a random number: " << rand() << endl;
}

void displayInfo(int a, int b)
{
	cout << "You have " << a << " apples";
	cout << " and " << b << " bananas." << endl;
}

void printNums(int n)
{
	cout << "The list of numbers is: ";
	for (int i = 1; i <= n; i++)
	{
		cout << i << " ";
	}
	cout << endl;
}

void swap(int c, int d)
{
	int temp = c;
	c = d;
	d = temp;
}
void swapRef(int& c, int& d)
{
	int temp = c;
	c = d;
	d = temp;
}