//this is a header file where we stashed all of our code about houseType
//to separate it from our main program

#pragma once
#include<string>
#include<iostream>
using namespace std;

//class interface, i.e. set up
// classes day 3, add constructors which initialize your objects
class houseType
{
private:  //member data
	string style;
	int yearBuilt;
	double price;
public:  //member function prototypes
	void setHouseInfo(string s, int yr, double p); //set house info
	void print() const;
	string getStyle() const; //getter
	int getYear() const; //getter
	double getPrice() const; //getter
	bool sameHouse(const houseType& otherHouse) const; //keeps calling house and the passed house constant
	//houseType(); //default constructor
	//houseType(string s, int yr, double p); // constructor with parameters
	//we could use ONE constructor with default values
	houseType(string s = "N/A", int yr = 2024, double p = 0);
};



//implementation of class functions
//we add houseType::  to indicate the function is part of houseType class
void houseType::setHouseInfo(string s, int yr, double p) //set house info
{
	style = s;
	yearBuilt = yr;
	price = p;
}

void houseType::print() const
{
	cout << "***************************" << endl;
	cout << "House Style: " << style << endl;
	cout << "Year Built: " << yearBuilt << endl;
	cout << "Price: $" << price << endl;
	cout << "***************************" << endl;
}

string houseType::getStyle() const //getter
{
	return style;
}

int houseType::getYear() const //getter
{
	return yearBuilt;
}
double houseType::getPrice() const //getter
{
	return price;
}

bool houseType::sameHouse(const houseType& otherHouse) const
{
	return (style == otherHouse.style && yearBuilt == otherHouse.yearBuilt && price == otherHouse.price);

}
//commented out because we rolled two functoins into one
//houseType::houseType() //default constructor
//{
//	style = "N/A";
//	yearBuilt = 2024;
//	price = 0;
//}
houseType::houseType(string s, int yr, double p) // constructor with parameters
{
	//this works, but a better way follow
	//style = s;
	//yearBuilt = yr;
	//price = p;

	//better yet -- use a function we already wrote
	setHouseInfo(s, yr, p);

}