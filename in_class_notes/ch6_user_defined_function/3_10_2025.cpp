#include<iostream>

using namespace std;

int funct1(int a, int& b);
void funct2(int& a);
void myFunction();

int main()
{
	
	//practice tracing through complicated passes by references
	int a = 2;
	int b = 3;
	int c = funct1(a, b);
	cout << "a: " << a << " b: " << b << " c: " << c << endl;
	b = funct1(c, a);
	cout << "a: " << a << " b: " << b << " c: " << c << endl;
	funct2(c);
	cout << "a: " << a << " b: " << b << " c: " << c << endl;
	
	//calling our static function
	myFunction();
	myFunction();
	myFunction();
	
	return 0;
}

int funct1(int a, int& b)
{
	a = 3 * a;
	b = b - 1;
	return a * b;
}
void funct2(int& a)
{
	a = a + 2;
}


// an example of a static function
void myFunction()
{
	static int x = 1;
	static int counter = 1;
	counter++;
	x = x * 2;
	cout << "x is " << x << endl;
}