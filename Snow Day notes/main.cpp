#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your n value (should be a positive integer: " << endl;
    cin >> n;
    int sum = 0;
    int i;
    for (i = 1; i <= n; i++) {
        sum = sum + i*i;
    }
    cout << "The sum of the first " << n << " squares is: " << sum << endl;

//Fibonacci Problem
    cout << "Enter what Fibonacci number you want: ";
    cin >> n;

    if (n==1 || n==2)
        cout << "Fibonacci number is 1" << endl;
    else {
        int back1 = 1;
        int back2 = 1;
        int curr;
        for (int i = 3; i <= n; i++) {
            curr = back1 + back2;
            back2 = back1;
            back1 = curr;
        }
        cout << "Fibonacci number is " << curr << endl;
    }

// declare the loop variable within the loop
for (int j = 1; j <=5;j++) {
    cout << j << " ";
}
cout << endl;
//intro to while loops
//a while loop behaving like a for loop
i = 1;
while (i <= 10)
{
    cout << i << " ";
    i++;
}
cout << endl;
//sentinel controlled while loop

    cout << "Enter your choice (0 to quit): ";
    int choice;
    cin >> choice;
    while(choice !=0) {
        cout << "Our code is doing something in a while loop!" << endl;
        cout << "Enter your choice (0 to quit): ";
        cin >> choice;
    }
    cout << "We exited the while loop! " << endl;

    return 0;
}
