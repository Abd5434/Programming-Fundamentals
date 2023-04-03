#include <iostream>
using namespace std;

float totalIncome(string type, int rows, int columns);

main()
{
int rows;
int columns;
string type;
float income;

cout << "Enter type of screening: ";
cin >> type;
cout << "Enter no. of rows: ";
cin >> rows;
cout << "Enter no. of columns: ";
cin >> columns;

income = totalIncome(type, rows, columns);
cout << "Total Income: " << income << " Euros";
}

float totalIncome(string type, int rows, int columns)
{
   int seats = rows * columns;
   float income;

  if (type == "Premiere"){
    return income = 12.00 * seats;
   }

  if (type == "Normal"){
    return income = 7.5 * seats;
   }

  if (type == "Discount"){
    return income = 5.00 * seats;
   }
  return 0;
}