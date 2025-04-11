#include <iostream>
#include <string>
using namespace std;

enum wallType{DRYWALL,PLASTER};

struct houseType {
    string style;
    int numBeds;
    double numBaths;
    int yearBuilt;
    wallType walls;
    double price;
    double tax;
};
void printHouse(houseType house); //function to print a house struct

int main() {
    //declares and initialized a new houseType called myHouse
    houseType myHouse{"Cape Cod",3,2.5,1970,DRYWALL,387964.23,2748};
    cout << "House style: " << myHouse.style << endl;
    cout << "Number of bedrooms: " << myHouse.numBeds << endl;

    //change members/attributes of myHouse
    myHouse.price = 456789.01;
    myHouse.tax = 3000;
    myHouse.numBaths = 3.5;

    printHouse(myHouse);

    return 0;
}
void printHouse(houseType house) {
    cout << "*********************************" << endl;
    cout << "House style: " << house.style << endl;
    cout << "Number of bedrooms: " << house.numBeds << endl;
    cout << "Number of baths: " << house.numBaths << endl;
    cout << "Year Built: " <<house.yearBuilt << endl;
    cout << "Walltype: " << house.walls << endl;
    cout << "Price: " << house.price << endl;
    cout << "Tax: " <<house.tax << endl;
}