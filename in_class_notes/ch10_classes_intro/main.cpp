#include<iostream>
#include<string>

using namespace std;

//class interface -- defines variable and function prototypes

class houseType
{
private:  //member data
	string style;
	int yearBuilt;
	double price;
public:  //member function prototypes
	void setHouseInfo(string s, int yr, double p); //set house info
	void print();
	string getStyle(); //getter
	int getYear(); //getter
	double getPrice(); //getter
};


int main()
{
	houseType myHouse;

	myHouse.setHouseInfo("Cape Cod", 1983, 600000);
	myHouse.print();

	cout << myHouse.getStyle() << endl;


	return 0;
}



//implement class functions
//we add houseType::  to indicate the function is part of houseType class
void houseType::setHouseInfo(string s, int yr, double p) //set house info
{
	style = s;
	yearBuilt = yr;
	price = p;
}

void houseType::print()
{
	cout << "***************************" << endl;
	cout << "House Style: " << style << endl;
	cout << "Year Built: " << yearBuilt << endl;
	cout << "Price: $" << price << endl;
	cout << "***************************" << endl;
}

string houseType::getStyle() //getter
{
	return style;
}

int houseType::getYear() //getter
{
	return yearBuilt;
}
double houseType::getPrice() //getter
{
	return price;
}