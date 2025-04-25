#include<iostream>
#include<fstream>

using namespace std;

enum yearType {FIRST_YEAR,SOPHOMORE,JUNIOR,SENIOR,GRAD};


//class interface
class studentType
{
private:  //usually data members
	string name;
	yearType year;
	double gpa;
public: //usually functions/methods
	studentType(string n = "Jane Doe", yearType y = FIRST_YEAR, double g = 0.00); //constructor with parameters
	void changeName(string newName);
	void changeGPA(double newGPA);
	void incrementYear();
	void printStudent() const; 
};



void print2D(int a[][4], int numRows);

int main()
{
	studentType student1;
	student1.printStudent();

	student1.changeName("Matt Welz");
	student1.changeGPA(3.8);
	student1.incrementYear();

	student1.printStudent();


	int arr[4][4];

	for (int i = 0; i < 4; i++)  //loop through rows
	{
		for (int j = 0; j < 4; j++) //loop through columns
		{
			arr[i][j] = i + j; //i,j entry is sum of i and j
		}
	}
	print2D(arr, 4);
	return 0;
}


void print2D(int a[][4], int numRows)
{
	for (int i = 0; i < numRows; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}


studentType::studentType(string n, yearType y, double g) //constructor with parameters
{
	name = n;
	year = y;
	gpa = g;
}
void studentType::changeName(string newName)
{
	name = newName;
}
void studentType::changeGPA(double newGPA)
{
	gpa = newGPA;
}
void studentType::incrementYear()
{
	if (year == GRAD)
	{
		cout << "You already graduated!" << endl;
	}
	else
	{
		year = yearType(year + 1);
	}
}
void studentType::printStudent() const
{
	cout << "Student Record *****************************************" << endl;
	cout << "Name: " << name << endl;
	cout << "GPA: " << gpa << endl;
	cout << "Year: " << year << endl;
}
