//this program reads from a file and sums the integer until a negative is reached and then quits

#include<iostream>
#include<fstream>

using namespace std;

int main()
{

int num;
int sum = 0;
ifstream inFile;
inFile.open("numbers.txt");

inFile >> num;
while(inFile)
{
    if (num < 0)
    {
        cout<<"Negative number in file -- terminating now.  Sum to this point was: " << sum << "." << endl;
        break;
    }
    sum = sum + num;
    inFile >> num;
}
inFile.close();
cout << "The sum of your numbers is: " << sum << endl;
return 0;
}