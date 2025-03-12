#include<iostream>
#include<cmath>

using namespace std;

//prototype for distance function with second point default to (0,0)
double distance(double x1, double y1, double x2 = 0, double y2 = 0);

//our first enum type
enum color {RED, YELLOW, ORANGE, BLUE, GREEN };


int main()
{
	cout << "The distance between (1,5) and (-2,2) is " << distance(1, 5, -2, 2) << endl;
	cout << "The distance between (3,4) and the origin is " << distance(3, 4) << endl;

	//declaring variables with our enum type
	color myColor1;
	color myColor2;

	myColor1 = RED;
	myColor2 = GREEN;
	cout << "myColor1 value is " << myColor1 << endl;
	cout << "myColor2 value is " << myColor2 << endl;


	return 0;
}

double distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}