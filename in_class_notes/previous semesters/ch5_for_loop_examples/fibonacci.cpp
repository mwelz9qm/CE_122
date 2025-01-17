//this program asks the user for the nth Fibonacci number and returns it

#include<iostream>

using namespace std;

int main()
{
    int back1, back2, next; //variables for tracking the two previous Fibonacci numbers and the current one
    int i,n; //our loop counter and the Fibonacci number the user wants

    cout << "Enter which Fibonacci number you'd like returned (>= 1) ";
    cin >> n;
    cout << endl;

    if (n == 1 || n == 2) //check if the user wants one of the firs two Fibonacci numbers
        cout << "The Fibonacci number in position " << n << " is 1." << endl;
    else
    {
      back1 = 1;
      back2 = 1;
      for (i = 3; i <= n; i++)
      {
        next = back1 + back2;
        back2 = back1;
        back1 = next;
      } 
        cout << "The Fibonacci number in position " << n << " is " << next << "." << endl;
    }




    return 0;
}
