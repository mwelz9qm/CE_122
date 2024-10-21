//this version opens up the student scores input file, reads in the first row
//and then enters the loop which continues until something goes wrong 
// i.e. the control is just while(inFile), so while we're not in the fail state
//or end of file then writes out to a file


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



    inFile >> firstName >> lastName >> score;



    while(inFile)
    {
        count ++;
        sum = sum + score;
        outFile << setw(10) <<firstName << setw(10) << lastName << setw(6) << score << endl;
        inFile >> firstName >> lastName >> score;        
       
    }
    outFile << endl;
    if (count > 0)
    outFile << "Class Average: " << sum/count << endl;
    else
    outFile << "The input file contained no student records" << endl;

    outFile << "***************************************************" << endl;

    inFile.close();
    outFile.close();
    return 0;
}