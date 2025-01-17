#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main()
{

//this code demonstrates how to write some things out to file called practice.txt
	int x, y;

	ofstream outFile;
	outFile.open("practice.txt");
	outFile << "writing something to a file!" << endl;

	cout << "Enter two integers please " << endl;
	cin >> x >> y;
	outFile << "The product of the intgers entered was: ";
	outFile << x * y << endl;
	outFile << setw(10) << "Name" << setw(10) << "City" << setw(10) << "State" << endl;
	outFile << setw(10) << "Matt" << setw(10) << "Durango" << setw(10) << "Colorado" << endl;

	outFile.close();

	//demonstrating how to read in from a file called input_practice.txt
	// Note: this file needs to exist already AND be in the same folder as this project

	double a, b, c;

	ifstream inFile;
	inFile.open("input_practice.txt");
	inFile >> a >> b >> c;
	cout << "The numbers that I read in from a file are: ";
	cout << a << " " << b << " " << c << " " << endl;

	return 0;
}