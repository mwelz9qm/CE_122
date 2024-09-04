#include<iostream>

using namespace std;

int main()
{
	short x;
	x = 32767; //biggest possible short value
	cout << "x is: " << x << endl;

	x = x + 1;
	cout << "x is now : " << x << endl;
	
	bool y = true;
	cout << "the value of y = true is " << y << endl;
	y = false;
	cout << "the value of y = false is " << y << endl;

	char myChar = 'Z';
	cout << "the value of myChar is " << myChar << endl;
	myChar = myChar + 2;
	cout << "the value of myChar is " << myChar << endl;
	//type cast my character as an integer
	cout << "my character as an integer: " << (int)myChar << endl;

	int z = 5;
	z++;
	cout << "z value is " << z << endl;
	z += 10;
	cout << "z value is " << z << endl;
	z*= 3;
	cout << "z value is " << z << endl;

	return 0;
}