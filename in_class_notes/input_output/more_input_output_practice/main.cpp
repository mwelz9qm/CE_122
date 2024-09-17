#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main()
{
	//ofstream outFile;
	//outFile.open("practice.txt");
	//
	//outFile << left << setw(15) << "Durango" << setw(15) << "Colorado";
	//outFile << setw(15) << 20000 << endl;

	//outFile  << setw(15) << "Cortez" << setw(15) << "Colorado";
	//outFile << setw(15) << 15000 << endl;
	//outFile.close();
	
	ofstream outFile;
	ifstream inFile;

	//process the input file: read the numbers into variables
	inFile.open("numbers.txt");
	double a, b, c, x, y, z;
	inFile >> a >> b >> c;
	inFile >> x >> y >> z;
	cout << "The value of inFile.eof() is " << inFile.eof() << endl;
	inFile.close();
	
	//process the output file: multiply the variables by 5 write out to file
	outFile.open("output.txt");
	outFile << "All the input file file numbers multiplied by 5: " << endl;
	outFile << left << setw(10) << 5 * a << setw(10) << 5 * b << setw(10) << 5 * c << endl;
	outFile << setw(10) << 5 * x << setw(10) << 5 * y << setw(10) << 5 * z << endl;
	outFile.close();

	return 0;
}