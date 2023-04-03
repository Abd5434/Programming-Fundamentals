#include <iostream>
using namespace std;

void printName(string name);

main()
{
  string name = "Abdullah";
  printName(name);
  
  printName("Ahmad");

  string second_Name;
  cout << "Enter your Name: " ;
  cin >> second_Name;
  printName(second_Name);
}

void printName(string name)
{
  cout << "My Name is: "<< name << endl;
}