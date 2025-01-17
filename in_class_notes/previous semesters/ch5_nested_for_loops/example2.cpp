//this program uses two loops to print the 10 x 10 multiplication table
//as is typical, the outer loop variable i controls the rows, and the
//inner loop variable j controls the columns

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    //loop vars
    int i,j;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
            cout << setw(5) << i * j;
        cout << endl;   
    }
    return 0;
}