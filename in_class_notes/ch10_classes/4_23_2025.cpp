#include<iostream>
#include<string>

using namespace std;

//iterface for the clockType
class clockType {
private:
	int hr;
	int min;
	int sec;
	static int count;
public:
	//clockType(); //default constructor prototype -- rolled into paramter constructor
	clockType(int hours = 12, int minutes = 0, int seconds = 0); //constructor with paramters
	void setTime(int hours, int minutes, int seconds);
	void printTime() const; //const outside the function means, can't change the class variables/members
	void incrementSeconds();
	void incrementMinutes();
	void incrementHours();
	bool equalTime(const clockType& otherClock) const; //check if current clock equals another

};


int main()
{


	clockType clock1;  //creates a clock with default constructor
	clockType clock2(10, 42, 29); //creates a clock with parameter constructor
	//print clock times to check the default constructor worked
	clock1.printTime();
	clock2.printTime();
	clock1.setTime(11, 2, 45);
	clock1.printTime();
	clock1.incrementSeconds();
	clock1.incrementHours();
	clock1.incrementMinutes();
	clock1.printTime();

	clock2.setTime(10, 24, 35);
	clock2.printTime();
	if (clock1.equalTime(clock2))
		cout << "Both clocks have the same time. " << endl;
	else
		cout << "The clocks have different times. " << endl;


	// test if increment wraparound works
	clock1.setTime(12,59,59);
	clock1.incrementSeconds();
	clock1.printTime();




	return 0;
}
void clockType::setTime(int hours, int minutes, int seconds)
{
	if (hours <= 12 && hours >= 1)
		hr = hours;
	else
	{
		cout << "Bad hour input, we'll default to 12";
		hr = 12;
	}
	if (minutes < 60 && minutes >= 0)
		min = minutes;
	else
	{
		cout << "Bad minutes input, we'll default to 0";
		min = 0;
	}
	if (seconds < 60 && seconds >= 0)
		sec = seconds;
	else
	{
		cout << "Bad seconds input, we'll default to 0";
		sec = 0;
	}
}
void clockType::printTime() const
{
	cout << "Clock Reading ***************************" << endl;
	cout << "Hour: " << hr << endl;
	cout << "Minutes: " << min << endl;
	cout << "Seconds: " << sec << endl;
}

void clockType::incrementSeconds()
{
	if (sec == 59)
	{
		sec = 0;
		incrementMinutes();
	}
	else
		sec++;
}
void clockType::incrementMinutes()
{
	if (min == 59)
	{
		min = 0;
		incrementHours();
	}
	else
		min++;
}
void clockType::incrementHours()
{
	if (hr == 12)
		hr = 1;
	else
		hr++;
}


bool clockType::equalTime(const clockType& otherClock) const
{
	return (sec == otherClock.sec && min == otherClock.min && hr == otherClock.hr);
}

////default constructor
//clockType::clockType()
//{
//	setTime(12, 0, 0);
//}

//constructor with parameters
clockType::clockType(int hours, int minutes, int seconds)
{
	setTime(hours, minutes, seconds);
	// hr = hours;
	// min = minutes;
	// sec = seconds;
	
}