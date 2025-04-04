#include<iostream>
#include<string>

using namespace std;

double avgQuiz(const double s[], int arrSize); //function takes array of scores and it's size
void printScores(const double s[], int arrSize); //functions that prints our array
void inputScores(double s[], int arrSize); //functon to fill the array

int main()
{
	const int NUM_SCORES = 5;
	double scores[NUM_SCORES];

	inputScores(scores, NUM_SCORES);
	printScores(scores, NUM_SCORES);
	cout << "The average of your quiz scores is " << avgQuiz(scores, NUM_SCORES) << endl;

	//range-based for loop example
	string myWords[4] = { "cat","dog","snow","sun" };
	for (string word : myWords)
	{
		cout << word << " ";
	}
	cout << endl;
	//traditional approach
	for (int i = 0; i < 4;i++)
	{
		cout << myWords[i] << " ";
	}
	cout << endl;


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
	for (int i = 0; i < arrSize - 1; i++)
	{
		cout << s[i] << ", ";
	}
	
	cout << s[arrSize-1] << "]" << endl;
}

void inputScores(double s[], int arrSize)
{
	//ask the user for quiz scores
	for (int i = 0; i < arrSize; i++)
	{
		cout << "Enter quiz score number " << i + 1 << endl;
		cin >> s[i];
	}
}