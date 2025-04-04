#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str1, str2, str3;
	str1 = "Matt";
	str2 = "Welz";
	str1.swap(str2);  //swap strings 1 and 2
	str3 = str1 + " " + str2; //concatenate strings  1 and 2
	cout << str3 << endl;
	cout << "The length of the string is " << str3.length() << endl;  //return length of string
	cout << "Where 'we' occurs in my string " << str3.find("We") << endl; //use find function
	str3.insert(5, "dude "); //use string insert function
	cout << str3 << endl;
	cout << str3.substr(3, 6) << endl; //use string substring function (start at index 3 and return 6 chars)
	
	
	//declare an arry of ints of size 6
	int arr[6];

	//manually assign the array values
	arr[0] = -34;
	arr[1] = 98;
	arr[2] = 8;
	arr[3] = -2;
	arr[4] = 5;
	arr[5] = 10;

	cout << arr << endl;

	//print the items in our array
	cout << "My array: " << endl;
	for (int index = 0; index < 6; index++)
	{
		cout << arr[index] << " ";
	}
	cout << endl;

	//ask a user for five quiz scores
	double scores[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter quiz score " << i + 1 << ": " << endl;
		cin >> scores[i];
	}



	return 0;
}