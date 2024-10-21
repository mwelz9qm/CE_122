#include<iostream>
#include<string>

using namespace std;


bool isPalindrome(string str); //prototype for palindrome finder function

int main()
{
    string s;

    cout << "Please enter a string: ";
    cin >> s;
    if (isPalindrome(s))
        cout << "Your string is a palindrome!" << endl;
    else
        cout << "Your string isn't a palindrome!" << endl;


    return 0;
}


bool isPalindrome(string str)
{
    int length = str.length();  //gives the length of the stream

    for (int i = 0; i < length/2; i++)   //since we're comparing front end to back end of the string, only have to move through first half
    {
        if (str[i] != str[length - 1 - i])  //increase on char at a time on the front and decrease one char at a time on the back
            return false; //as soon as we find a single differnce, return false -- not a palindrome
    }
    return true; //if we found no differences, we have a palindrome
}