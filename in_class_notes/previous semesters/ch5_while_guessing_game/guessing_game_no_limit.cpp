#include<iostream>

using namespace std;

int main()
{
    int num = 56; //what you want the magic number to be
    int guess; //player's guess
    bool isGuessed = false; //flag is false until guessed


    while(!isGuessed) //loop runs as long as integer isn't guessed
    {
    cout << "Try and guess my integer: " << endl;
    cin >> guess;
    if (guess == num)
        {
        cout << "Congrats, you guessed my number! " << endl;
        isGuessed = true; //set flag to be true now that number has been guessed
        }
    else if (guess > num)
        cout << "You guessed too high!" << endl;
    else
        cout << "You guessed too low!" << endl;
    }

    return 0;
}