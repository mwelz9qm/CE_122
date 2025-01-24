#include<iostream>
#include<string>

using namespace std;

int main()
{
	//using get which doesn't ignore blank space

	//char ch;
	//cout << "Enter any character: ";
	//cin.get(ch);
	//cout << "Your character is: " << ch << endl;
	//cout << "The ASCII of your character is " << (int)ch << endl;

	//reading in strings

	//string firstName, lastName;
	//cout << "Enter your name (first and last) please: ";
	//cin >> firstName >> lastName;
	//cout << "Nice to meet you, " << firstName <<" "<< lastName << endl;

	//reading in a whole line as a string of characters

	string name;

	cout << "Enter your name please: ";
	getline(cin, name);
	cout << " \"Your name is: \" \n \n \n \t " << name << endl;

	return 0;
}