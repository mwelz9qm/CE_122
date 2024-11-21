#include<iostream>
#include<string>

using namespace std;

enum wallStyle{DRYWALL, PLASTER};

//hopetype allows us to have records containing a variety of datatypes to represent a house
struct homeType
{
    string style;
    int numBedrooms;
    int numBaths;
    int yearBuilt;
    wallStyle wallType;
    double price;
    double tax;
};

void printHouse(const homeType & house); // passing struct by reference is a good idea, but just printing so holding const

int main()
{  

    homeType myHouse;
 

    //setting the member variables for myHouse
    myHouse.style = "Cape Cod";
    myHouse.numBedrooms = 3;
    myHouse.numBaths = 2;
    myHouse.yearBuilt = 1950;
    myHouse.wallType = DRYWALL;
    myHouse.price = 456789.10;
    myHouse.tax = myHouse.price * .01;  //set house tax equal to 1% of home price

    //printing out some of the contents of my house

    cout << "Home style: " << myHouse.style << endl;
    cout << "Year built: " << myHouse.yearBuilt << endl;
    cout << "Purchase price: " << myHouse.price << endl;

    //now call the function to print the house    

    printHouse(myHouse);

    return 0;
}

void printHouse(const homeType & house)
{
    cout << "********************************************" << endl;
    cout << "Home style: " << house.style << endl;
    cout << "Number of bedrooms: " << house.numBedrooms << endl;
    cout << "Number of bathrooms: " << house.numBaths << endl;
    cout << "Year Built: " << house.yearBuilt << endl;
    cout << "Wall Style: " << house.wallType << endl;
    cout << "Purchase Price: " << house.price << endl;
    cout << "Tax: " << house.tax << endl;
    cout << "********************************************" << endl;
}

