#include <iostream>



enum color {RED, GREEN, BLUE, ORANGE, YELLOW}; //new data type called color

int main()
{

	color myColor; //declares a new variable of color type
	myColor = BLUE;
	color color1 = YELLOW;
	//integral values are printed
	std::cout << "myColor value is: " << myColor << std::endl;
	std::cout << "color1 value is " << color1 << std::endl;

	cout << "Enter your favorite color: " << endl;
	cout << " 0 for RED, 1 for GREEN, 2 for BLUE, 3 for ORANGE, 4 for YELLOW" << endl;
	int choice;
	cin >> choice;
	myColor = (color)choice;  //typecast or convert a number to a color

	switch (myColor)  //printing a message depending on the color that was chosen
	{
	case RED:
		cout << "We have red in stock! " << endl;
		break;
	case GREEN:
		cout << "Green is an awesome color but it's out of stock! " << endl;
		break;
	case BLUE:
		cout << "Blue is my favorite color! " << endl;
		break;
	case ORANGE:
		cout << "You want an orange car? " << endl;
		break;
	case YELLOW:
		cout << "They don't even make the car in yellow! " << endl;
		break;
	}


	return 0;
}