#include<iostream>

//using namespace std;
using std::cout;
using std::endl;



//introducing enums and writing a function that takes one as input
enum color {RED, GREEN, BLUE, ORANGE, YELLOW};

void printColor(color c);


int main()
{
	color myColor = YELLOW;
	cout << "The value that prints for myColor is " << myColor << endl;


	if (myColor == BLUE)
	{
		std::cout << "That's my favorite color!" << std::endl;
	}
	else
	{
		std::cout << "We have different favorite colors!" << std::endl;
	}

	printColor(myColor);
	printColor(RED);

	return 0;
}


void printColor(color c)
{
	switch (c)
	{
	case RED:
		std::cout << "Your color is red! " << std::endl;
		break;
	case GREEN:
		std::cout << "Your color is green! " << std::endl;
		break;
	case BLUE:
		std::cout << "Your color is blue! " << std::endl;
		break;
	case ORANGE:
		std::cout << "Your color is orange! " << std::endl;
		break;
	case YELLOW:
		std::cout << "Your color is yellow! " << std::endl;
		break;
	}
}