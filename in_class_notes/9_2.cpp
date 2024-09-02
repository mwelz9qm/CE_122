/*
Basics of cin (we also discussed what / and % mean for integers)
*/

#include<iostream>

using namespace std;

int main()
{
    int x,y;

    cout << "Enter an integer: ";
    cin >> x;
    cout << "Enter another integer: ";
    cin >> y;
    cout << "The sum of your integers is: " << x + y << endl;

    cout << "Enter two integers separated by spaces. " << endl;
    cin >> x >>y;
    cout << "The product of your new integers is: " << x*y << endl;



    return 0;
}