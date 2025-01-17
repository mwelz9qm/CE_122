//this program reads from a file and sums positive integers -- unlike the other version, this one skips negatives
//and continues on

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
        cout<<"Negative number in file -- skipping it" << endl;
        inFile >> num;
        continue;
    }
    sum = sum + num;
    inFile >> num;
}
inFile.close();
cout << "The total sum of positive integers is: " << sum << endl;
return 0;
}