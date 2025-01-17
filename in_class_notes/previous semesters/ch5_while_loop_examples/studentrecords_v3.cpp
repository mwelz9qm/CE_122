//this version opens up the student scores input file, and heads straight to while loop
//the check is whether or not we've reached the eof character in the input file
//it will then read in until the eof is hit
//WARNING: if something goes wrong and your input stream enters the fail state you could have some anomalous 
//behavior, including infinite loopage.  Don't recommend this approach.

#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    ifstream inFile; //file we're reading in from
    ofstream outFile; //file we're writing out to


    string firstName, lastName; //names being read in
    double score; //score being read in
    int count = 0; // for tracking number of student records
    double sum = 0; // for summing up scores to find class average
    

    inFile.open("studentgrades.txt");
    outFile.open("gradereport.txt");

    outFile << fixed << setprecision(2) << showpoint << left;
    outFile << "*************** Class Grade Report ****************" << endl;


    

    while(!inFile.eof())
    {
        inFile >> firstName >> lastName >> score;
        count ++;
        sum = sum + score;
        outFile << setw(10) <<firstName << setw(10) << lastName << setw(6) << score << endl;       
       
    }
    outFile << endl;
    if (sum > 0)
    outFile << "Class Average: " << sum/count << endl;
    else
    outFile << "The input file contained no student records" << endl;

    outFile << "***************************************************" << endl;

    inFile.close();
    outFile.close();
    return 0;
}