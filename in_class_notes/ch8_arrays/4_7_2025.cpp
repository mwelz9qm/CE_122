#include<iostream>

using namespace std;

int main()
{

	int arr[10] = { 34, 10, -9, 6, 4, 9, 13, 100, 13, 77 };
	bool inArray = false;

	int target = 133;
	//for loop version of looking for an element
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == target)
			inArray = true;
	}
	if (inArray == true)
		cout << "The element was found in the array! " << endl;
	else
		cout << "The element was not found in the array!" << endl;

	//while loop version
	inArray = false;
	int i = 0;
	while (i < 10 && inArray == false) //run until the end of the array or we've found the element
	{
		if (arr[i] == target)
			inArray = true;
		i++;
	}
	if (inArray == true)
		cout << "The element was found in the array! " << endl;
	else
		cout << "The element was not found in the array!" << endl;

	//same idea as above but return the index where an element is found (IF it is found!)

	//for loop
	int position = -1; //set the position found at -1 until we find the target element in the array
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == target)
		{
			position = i;
			break; //this forces the return of the first instance of the target
		}
	}
	if (position == -1)
	{ 
		cout << "The target element wasn't found." << endl;
	}
	else
	{
		cout << "The target element was found in position " << position << "." << endl;
	}

	//while loop
	position = -1;
	i = 0;
	while (i < 10 && position == -1) //returns the first instance of the target
	{
		if (arr[i] == target)
		{
			position = i;
		}
		i++;
	}
	if (position == -1)
	{
		cout << "The target element wasn't found." << endl;
	}
	else
	{
		cout << "The target element was found in position " << position << "." << endl;
	}

	return 0;
}