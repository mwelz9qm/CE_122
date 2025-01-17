// a program to use a loop to ask for five quiz scores and return the average using a loop
// this code needs very little modification to handle any number of quizzes


#include<iostream>

using namespace std;

int main()
{
    int num, sum, i; //variables for storing the quiz, running sum of the quiz values, and looping
    double average; 


    sum = 0; //initialize the sum of quizzes to 0
    for (i = 1; i <= 5; i++)
    {
        cout << "Enter quiz number " << i << " :";
        cin >> num;
        cout << endl;
        sum = sum + num; //add current quiz to running total
    }

    average = sum / 5.0;
    cout << "The average of the quizzes you entered is: " << average << "." << endl;

    return 0;
}