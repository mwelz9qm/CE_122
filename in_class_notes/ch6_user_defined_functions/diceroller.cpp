#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int diceRoll(); //the prototype for our dice rolling functions. Requires no input and gives an int output

int main()
{
    srand(time(0));  //sets the seed for the random number generator using the current unix time (since 1/1/1970)
    int roll;
    
    for (int i = 1; i <= 20; i++) //a loop to check out the value of 20 dice rolls
    {
    roll = diceRoll();
    cout << "The value of your dice roll is " << roll << "." << endl;
    }
    return 0;
}


int diceRoll()
{
    int die1, die2, sum;
    die1 = rand() % 6 + 1;  //modding out by 6 gives remainders 0,,,,5 but dice should give 1,...6 so we add 1
    die2 = rand() % 6 + 1;
    sum = die1 + die2;
    return sum;
}
