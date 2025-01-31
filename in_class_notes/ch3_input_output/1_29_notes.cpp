#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>

using namespace std;

int main()
{
	double x = 1.23456789;
	double y = 551.67;
	
	//setting precision
	cout << "x = " << x << endl;
	cout << setprecision(9) << "x = " << x << endl;
	//using "fixed"
	cout << "y = " << y << endl;
	cout << fixed << "y = " << y << endl;
	cout.unsetf(ios::fixed);
	cout << "y = " << y << endl;

	//using "scientific"
	cout << scientific << "y = " << y << endl;
	cout.unsetf(ios::scientific);
	cout << "y = " << y << endl;

	//using setw(n)
	cout << setw(13) << "Matt" << setw(13) << "Welz" << endl;

	//adjusting justify
	cout << left << setw(13) << "Matt" << setw(13) << "Welz" << endl;
	cout << right << setw(13) << "Matt" << setw(13) << "Welz" << endl;

	//make a small table
	cout << "*********************************************" << endl;
	cout << left;  //left justify
	cout << setw(15) << "Name" << setw(15) << "City" << setw(15) << "State \n" << endl;
	cout << setw(15) << "Matt" << setw(15) << "Durango" << setw(15) << "Colorado \n" << endl;
	cout << setw(15) << "Maria" << setw(15) << "Santa Fe" << setw(15) << "New Mexico \n" << endl;

	//quick intro to output stream

	ofstream outFile;
	outFile.open("myFile.txt");
	outFile << "Hey, I am printing stuff to a file!" << endl;
	outFile << "I'm using setw " << setw(15) << "Durango" << setw(15) << "Colorado";
	outFile.close();



	return 0;
}