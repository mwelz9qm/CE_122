#include<iostream>
#include<iomanip>
using namespace std;

//reminder arrays pass by reference so the original array can change
void matrixFiller(int arr[][5], int numRows);
void print2D(const int arr[][5], int numRows); //const because we don't change the array

enum carType{FORD, HONDA, TOYOTA, NISSAN};
enum colorType { BLACK, WHITE };


int main()
{
	int mat[3][5] = { {0},{0},{0} };
	matrixFiller(mat, 3);
	print2D(mat, 3);

	//use carType enum for array index example
	int inStock[4];
	inStock[FORD] = 28;
	inStock[HONDA] = 35;
	inStock[TOYOTA] = 17;
	inStock[NISSAN] = 5;

	int inStockColor[4][2];

	inStockColor[TOYOTA][BLACK]= 13;
	inStockColor[FORD][WHITE] = 0;



	return 0;
}

void matrixFiller(int arr[][5], int numRows)
{
	for (int i = 0; i < numRows; i++) //loop down rows
	{
		for (int j = 0; j < 5; j++) //loop across columns
		{
			arr[i][j] = i * j + 3 * j;
		}
	}
}

void print2D(const int arr[][5], int numRows)
{
	for (int i = 0; i < numRows; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << setw(5) << arr[i][j] << " ";
		}
		cout << endl;
	}
}