#include<iostream>
#include<string>
#include "houseType.h"

using namespace std;

//all the class stuff is stashed in houseType.h
//be sure to store that in the same directory as your main file



int main()
{
	//creating two house objects, one with the default constructor the other without
	houseType myHouse("Ranch", 1965, 400000), yourHouse;
	myHouse.print();
	yourHouse.print();

	myHouse.setHouseInfo("Cape Cod", 1983, 600000);
	myHouse.print();

	yourHouse.setHouseInfo("Cape Cod", 1983, 600000);

	if (myHouse.sameHouse(yourHouse))
		cout << "We have the same house! " << endl;
	else
		cout << "We have different houses! " << endl;


	return 0;
}



