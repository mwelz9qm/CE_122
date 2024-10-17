#include<iostream>
#include<cmath>

using namespace std;

//prototypes of functions
double rectangleArea(double length, double width);
double circleArea(double radius);

const double PI = 3.141519;


int main()
{
	
	// testing out cmath library
	double x = 3.7;
	cout << "absolute value of -10 " << abs(-10) << endl;
	cout << "ceiling of x " << ceil(x) << endl;
	cout << "cosine of x " << cos(x) << endl;
	cout << "exponential of x " << exp(x) << endl;
	cout << "sqrt of x " << sqrt(x) << endl;
	cout << "pow(3,2) " << pow(3, 2) << endl;

	cout << "The area of a 5 x 10 rectangle is " << rectangleArea(5, 10) << endl;
	cout << "The area of 117 x 946 rectangle is " << rectangleArea(117, 946) << endl;

	return 0;
}

//functions are written below main

double rectangleArea(double length, double width)
{
	double area;
	area = length * width;
	return area;
	//could be done in one line with: return length * width;
}

double circleArea(double radius)
{
	double area;
	area = PI * radius * radius;
	return radius;

	//could be done in one line with: return PI * radius * radius;
}