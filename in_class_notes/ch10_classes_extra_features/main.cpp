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
	void print() const;
	string getStyle() const; //getter
	int getYear() const; //getter
	double getPrice() const; //getter
	bool sameHouse(const houseType &otherHouse) const; //a function to compare a calling house to a passed in house -- the consts prevent us from changing anything

};


int main()
{
	houseType myHouse;

	myHouse.setHouseInfo("Cape Cod", 1983, 600000);
	myHouse.print();

	cout << myHouse.getStyle() << endl;

	houseType yourHouse;
	yourHouse.setHouseInfo("Ranch", 1970, 575000);
	//check if the houses are equal
	if (myHouse.sameHouse(yourHouse))
		cout << "We have the same house! " << endl;
	else
		cout << "We have different houses! " << endl;
	
	//change yourHouse and check again

	yourHouse.setHouseInfo("Cape Cod", 1983, 600000);


	if (myHouse.sameHouse(yourHouse))
		cout << "We have the same house! " << endl;
	else
		cout << "We have different houses! " << endl;


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

bool houseType::sameHouse(const houseType &otherHouse) const
{
	return (style == otherHouse.style && yearBuilt == otherHouse.yearBuilt && price == otherHouse.price);
}
