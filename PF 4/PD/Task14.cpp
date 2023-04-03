#include <iostream>
#include <windows.h>
using namespace std;

void printMenu();
void calculateAggregate(string name, int matricMarks, int interMarks, int ecatMarks);
void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2);


main()
{
	printMenu();
	int option;
	cin >> option;
	if (option == 1) {
	string name;
	int matricMarks;
	int interMarks;
	int ecatMarks;
	calculateAggregate(name, matricMarks, interMarks, ecatMarks);
	}

	if (option  == 2) {
	string nameStd1;
	int ecatMarksStd1; 
	string nameStd2;
	int ecatMarksStd2;
	compareMarks(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);
	}

}

void printMenu()
{

cout << "**********************************************************************************" << endl;
cout << "**                   UNIVERSITY ADMISSION MANAGEMENT SYSTEM                     **" << endl;
cout << "**********************************************************************************" << endl << endl << endl;

cout << "1. Calculate Aggregate " << endl;
cout << "2. Compare Marks " << endl;
cout << "Enter option...";
}

void calculateAggregate(string name, int matricMarks, int interMarks, int ecatMarks)
{
float inter_percentage; float matric_percentage; float ecat_percentage; float total_aggregate;
cout << "Enter Name: ";
cin >> name;
cout << "Enter Matric Marks: ";
cin >> matricMarks;
cout << "Enter Intermediate Marks: ";
cin >> interMarks;
cout << "Enter ECAT Marks: ";
cin >> ecatMarks;
inter_percentage = ( interMarks * 30 );
matric_percentage = ( matricMarks * 30 );
ecat_percentage = ( ecatMarks * 40 );
total_aggregate = ( inter_percentage / 550 ) + ( matric_percentage /1100 ) + ( ecat_percentage / 400 );
cout << "Your aggregate is: " << total_aggregate ;
}

void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2)
{

cout << "Enter Student 1 Name: " ;
cin >> nameStd1;
cout << "Enter Student 1 ECAT Marks: ";
cin >> ecatMarksStd1;
cout << "Enter Student 2 Name: " ;
cin >> nameStd2;
cout << "Enter Student 2 ECAT Marks: ";
cin >> ecatMarksStd2;

if (ecatMarksStd1 > ecatMarksStd2){
	cout << "Roll Number 1: " << nameStd1;
} 

if (ecatMarksStd2 > ecatMarksStd1){
	cout << "Roll Number 1: " << nameStd2;
} 
}