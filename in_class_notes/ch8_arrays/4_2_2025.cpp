#include<iostream>

using namespace std;

double avgQuiz(const double s[], int arrSize); //function takes array of scores and it's size
void printScores(const double s[], int arrSize); //functions that prints our array


int main()
{
	const int NUM_SCORES = 5;
	double scores[NUM_SCORES];

	//ask the user for quiz scores
	for (int i = 0; i < NUM_SCORES; i++)
	{
		cout << "Enter quiz score number " << i + 1 << endl;
		cin >> scores[i];
	}

	//cout << "What happens if I print 'scores' " << scores << endl;
	//cout << "Versus what happens if I print the address of scores[0] " << &scores[0] << endl;
	
	printScores(scores, NUM_SCORES);
	cout << "The average of your quiz scores is " << avgQuiz(scores, NUM_SCORES);

	return 0;
}

double avgQuiz(const double s[], int arrSize)
{
	double sum = 0;
	for (int i = 0; i < arrSize; i++)  //loop through every array element
	{
		sum = sum + s[i];
	}
	
	return sum / arrSize;
}

void printScores(const double s[], int arrSize)
{
	cout << "The contents of the array are: ";
	cout << "[";
	for (int i = 0; i < arrSize; i++)
	{
		cout << s[i] << ", ";
	}
	cout <<"]" << endl;
}