//this code uses the outloop with control variable i to manage the rows
//the inner loop manages the columns of *s and loop variable j runs until i
//i.e. if we're on row 5, j runs from 1 to 5
//if we're on row 8, j runs from 1 to 8


#include<iostream>

using namespace std;

int main()
{
    
    //looping vars
    int i;
    int j;

    cout << "Let's print out 10 rows with one more * in each row " << endl;
    
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }


    return 0;
}