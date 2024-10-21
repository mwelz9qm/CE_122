//intro examples of writing functions to find the area of a rectangle and circle

#include<iostream>
using namespace std;

//function prototypes for area of rectangle and circle functions

double rectangleArea(double length, double width);
double circleArea(double radius);

const double pi = 3.141527; 

int main()
{
    double l,w,r; //we'll read in length, width, radius

    cout << "Enter the dimensions of the rectangle you want to know the area of. " << endl;
    cout << "Length: ";
    cin >> l;
    cout << "Width: ";
    cin >> w;
    cout << endl;
    cout << "The area of your rectangle is " << rectangleArea(l,w) << " square units." << endl;
    cout << endl;
    cout << "Now enter the radius of the circle whose area you want. " << endl;
    cout << "Radius: ";
    cin >> r;
    cout << endl;
    cout << "The area of your rectangle is " << circleArea(r) << " square units." << endl;

    return 0;
}


//for now, we'll keep function definitions below main

double rectangleArea(double length, double width)
{
    double area;   //it's ok to refer to "area" in each function, since it's a "local" variable
    area = length * width;
    return area;
}

double circleArea(double radius)
{
    double area;
    area = pi * radius * radius;
    return area;
}





