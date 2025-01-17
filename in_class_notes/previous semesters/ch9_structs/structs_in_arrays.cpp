#include<iostream>
#include<string>
#include<fstream>
using namespace std;

enum wallStyle{DRYWALL, PLASTER};

//hometype allows us to have records containing a variety of datatypes to represent a house
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

//function will print the record info for an array containing homes
void printHome(const homeType arr[], int length);

int main()
{
    
    //array of hometypes
    homeType houses[3];

    ifstream inFile;
    inFile.open("houseinfo.txt");
  
    for (int i = 0; i < 3; i++)
    {
        int wall;
        inFile >> houses[i].style >> houses[i].numBedrooms >> houses[i].numBaths >> houses[i].yearBuilt;
        inFile >> wall >> houses[i].price >> houses[i].tax;
        //typecasting walltype
        houses[i].wallType = (wallStyle) wall;
    }

    printHome(houses,3);
    inFile.close();
    return 0;
}

void printHome(const homeType arr[], int length)
{
    for (int i = 0; i < length; i++)
        {
            cout << "********************************************" << endl;
            cout << "Home style: " << arr[i].style << endl;
            cout << "Number of bedrooms: " << arr[i].numBedrooms << endl;
            cout << "Number of bathrooms: " << arr[i].numBaths << endl;
            cout << "Year Built: " << arr[i].yearBuilt << endl;
            cout << "Wall Style: ";
            if (arr[i].wallType == 0)
                cout << "Drywall" << endl;
            else
                cout << "Plaster" << endl;
            cout << "Purchase Price: " << arr[i].price << endl;
            cout << "Tax: " << arr[i].tax << endl;
            cout << "********************************************" << endl;
        }
}
