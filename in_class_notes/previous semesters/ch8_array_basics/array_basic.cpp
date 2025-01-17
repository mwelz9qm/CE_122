#include<iostream>

using namespace std;

//a function to print an array of doubles of length = length
void printDoubleArray(const double arr[], int length); 

int main()
{
    //declare an array of ints of size 10 -- intialized at declaration
    int arr1[10] = {4, 19, 23, 10, 8, -4 ,1, 0, 17, -30};
    // a loop that multiplies each entry by 2
    for (int i = 0; i < 10; i++)
        arr1[i] = arr1[i] * 2;
    
    // a loop that prints the array
    for (int i = 0; i < 10; i++)
        cout << arr1[i] << " ";
    
    cout << endl;

    //declare an array of doubles of size 20 -- I'll initialize by looping through filling each slot
    double arr2[20];
    for (int i = 0; i < 20; i++)
        arr2[i] = (i*i + 5.0)/(i + 1);  //just filing the array with something

    // I'm going to print my array, but this time, I'm going to use a function!
    printDoubleArray(arr2,20);
    return 0;
}

//a function to print an array of doubles of length l
//remember arrays are automatically passed by reference, so I'm holding it constant to be safe
void printDoubleArray(const double arr[], int length) 
{
    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";
    cout << endl;
}
