#include<iostream>
#include<string>

using namespace std;

const double PI = 3.14159; //global variable

void getInfo(string& n, int& a);

int main()
{
	string name = "Jane";
	int age = 18;
	getInfo(name, age);
	cout << "Updated name: " << name << endl;
	cout << "Updated age: " << age << endl;

	return 0;
}

void getInfo(string& n, int& a)
{
	cout << "Enter your name: ";
	cin >> n;
	cout << "Enter your age: ";
	cin >> a;
}