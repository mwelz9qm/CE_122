#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
	ifstream inFile; //declare input file stream
	ofstream outFile; //declare output file stream
	inFile.open("numbers.txt");
	cout << "File open ok? " << inFile.good() << endl;
	outFile.open("output.txt");

	double a, b, c, d;
	inFile >> a >> b >> c >> d; //reads in first row of numbers
	outFile << left << setw(10) << a * 10 << setw(10) << b * 10 << setw(10) << c * 10;
	outFile << setw(10) << d * 10 << endl;
	//now handle the second row of data
	inFile >> a >> b >> c >> d; //reads in first row of numbers
	outFile << setw(10) << a * 10 << setw(10) << b * 10 << setw(10) << c * 10;
	outFile << setw(10) << d * 10 << endl;
	string str;
	getline(inFile, str); //read in the random text at the end
	cout << "Here's the string we grabbed: " << str << endl;

	//first time investigating if statements
	int x = 3;
	if (x > 2)
	{
		cout << "x is greater than 2!" << endl;
		x = x * 2;
	}



	inFile.close();
	outFile.close();
	return 0;
}