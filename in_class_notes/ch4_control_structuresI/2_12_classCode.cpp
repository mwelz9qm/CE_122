#include<iostream>
using namespace std;

int main()
{

	double score;  //score being entered
	double sum = 0; //tally of quiz scores
	int i; //loop variable that we'll increment

	//intro to loops

	for (int i = 1; i <= 5; i++)
	{
		cout << "Enter quiz score " << i <<": ";  //prompt user
		cin >> score;	//read in user score
		sum = sum + score;	// add the score to our total
	}

	cout << "Your average quiz score is " << sum / 5 << endl;




	return 0;
}