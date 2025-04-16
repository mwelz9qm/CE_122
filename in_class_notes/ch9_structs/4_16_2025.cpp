#include<iostream>
#include<string>

using namespace std;

const double PI = 3.14159;


struct studentData
{
	string name;
	double gpa;
};

void printClass(const studentData c[], int numStudents);

double getArea(double length, double width); //returns area of a rectangle
double getArea(double radius); //returns area of a circile


int main()
{
	studentData myClass[3];
	myClass[0].name = "Alice";
	myClass[0].gpa = 3.74;
	myClass[1].name = "Bob";
	myClass[1].gpa = 2.88;
	myClass[2].name = "Charlie";
	myClass[2].gpa = 3.47;

	printClass(myClass, 3);

	cout << "The area of a 3 x 5 rectangle is " << getArea(3, 5) << endl;
	cout << "The area of a circule of radius 4 is " << getArea(4) << endl;

	string str;
	str = "I am typing a string out";
	cout << "the length of the string is " << str.length() << endl;

	return 0;
}


void printClass(const studentData c[], int numStudents)
{
	for (int i = 0; i < numStudents; i++)  //loops for each student
	{
		cout << "*****************************" << endl;
		cout << "Student name: " << c[i].name << endl;
		cout << "Student gpa: " << c[i].gpa << endl;
	}
}

double getArea(double length, double width)
{
	return length * width;
}
double getArea(double radius)
{
	return PI * radius * radius;
}