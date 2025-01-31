#include<iostream>
#include<string>
using namespace std;

const double PI = 3.14159;

int main()
{
	/*cout << "The area of a circle of radius 2: ";
	cout << PI * 2 * 2 << endl;*/

	string myString;
	//cout << "Input a line of stuff: " << endl;
	//cin >> myString;
	//getline(cin, myString);
	//cout << myString << endl;

	int a, b;
	cout << "Is cin in the fail state? " << cin.fail() << endl;
	cin >> a;
	
	cin.clear();
	cin.ignore(100, '\n');
	
	cin >> b;

	cout << "Is cin in the fail state? " << cin.fail() << endl;

	cout << "a = " << a << ", b = " << b << endl;


	return 0;
}
