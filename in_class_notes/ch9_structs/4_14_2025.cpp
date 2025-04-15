#include <iostream>
#include <string>
using namespace std;

enum wallType { DRYWALL, PLASTER };

struct studentRecord {
    string name;
    double quizScores[5];
};

studentRecord getData(); //nothing passed in, and studentRecord is returned

void printStudent(const studentRecord& student);

struct houseType {
    string style;
    int numBeds;
    double numBaths;
    int yearBuilt;
    wallType walls;
    double price;
    double tax;
};
void printHouse(const houseType &house); //function to print a house struct

int main() {
    //declares and initialized a new houseType called myHouse
    houseType myHouse{ "Cape Cod",3,2.5,1970,DRYWALL,387964.23,2748 };
    cout << "House style: " << myHouse.style << endl;
    cout << "Number of bedrooms: " << myHouse.numBeds << endl;

    //change members/attributes of myHouse
    myHouse.price = 456789.01;
    myHouse.tax = 3000;
    myHouse.numBaths = 3.5;

    houseType yourHouse;
    yourHouse = myHouse;  //we CAN set one struct equal to another but we CAN'T ask if yourHouse == myHouse
    //if (yourHouse.style == myHouse.style && yourHouse.numBeds == myHouse.numBeds ...)
    // if (&yourHouse == &myHouse) ... checks if they're literally referring to the same memory address


    yourHouse.style = "Ranch";
    yourHouse.numBaths = 2;
    yourHouse.walls = PLASTER;
    yourHouse.price = 445879;
    yourHouse.tax = 3500;

    printHouse(myHouse);
    printHouse(yourHouse);

    studentRecord myStudent; //create a new studentRecord called my student
    myStudent = getData();

    printStudent(myStudent);


    return 0;
}
void printHouse(const houseType &house) {
    cout << "*********************************" << endl;
    cout << "House style: " << house.style << endl;
    cout << "Number of bedrooms: " << house.numBeds << endl;
    cout << "Number of baths: " << house.numBaths << endl;
    cout << "Year Built: " << house.yearBuilt << endl;
    cout << "Walltype: " << house.walls << endl;
    cout << "Price: " << house.price << endl;
    cout << "Tax: " << house.tax << endl;
}

studentRecord getData()
{
    studentRecord student;  //create a new student record
    cout << "What's the student's name? ";
    getline(cin,student.name);
    cout << "What are the student's five quiz scores? ";
    for (int i = 0; i < 5; i++)
    {
        cin >> student.quizScores[i];
    }
    cout << endl;
    return student;
}

void printStudent(const studentRecord& student)
{
    cout << "********************************** Student Data ***********************************" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Quiz Scores: ";
    for (int i = 0; i < 5; i++)
    {
        cout << student.quizScores[i] << " ";
    }
    cout << endl;
}