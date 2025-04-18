#include<iostream>
#include<string>

using namespace std;


//this is the class interface: we've given the blueprint, but only prototyped the functions
//we'll write the functions below main
class houseType
{
public: //public members are usually functions/methods
	//houseType();  //called a constructor, which initializes new houseType objects
	void setHouseInfo(string s, int y, double p);  //setter to set house info
	void print();
	string getStyle(); //getter to return house style
	int getYear(); //getter to return year
	double getPrice(); //getter to return price

private: //private members are usually our data/variables
	string style;
	int yearBuilt;
	double price;
};




int main()
{
	houseType myHouse; //declare a houseType object called myHouse

	myHouse.setHouseInfo("Ranch", 1964, 500000);  //set the house data
	myHouse.print();  //check the print method
	//check getters
	cout << "My house style is " << myHouse.getStyle() << endl;  
	cout << "My house was built in the year " << myHouse.getYear() << endl;
	cout << "My house price is " << myHouse.getPrice() << endl;

	houseType yourHouse;
	yourHouse = myHouse; //set yourHouse equal to myHouse
	yourHouse.print(); //check that myHouse data was passed over
	//change yourHouse data
	yourHouse.setHouseInfo("Split-level", 1976, 456789);
	//check the data change happened
	yourHouse.print();

	return 0;
}


// writing out our class methods (implementation)
void houseType::print()
{
	cout << "*******************************" << endl;
	cout << "Style: " << style << endl;
	cout << "Year Built: " << yearBuilt << endl;
	cout << "Price: " << price << endl;		
}

string houseType::getStyle() //getter to return house style
{
	return style;
}
int houseType::getYear() //getter to return year
{
	return yearBuilt;
}
double houseType::getPrice() //getter to return price
{
	return price;
}

void houseType::setHouseInfo(string s, int y, double p)  //sets the house info
{
	style = s;
	yearBuilt = y;
	price = p;
}