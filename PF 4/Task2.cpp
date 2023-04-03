#include <iostream>
using namespace std;

void ifPassed(int marks);

main()
{
int marks;
while (true){
cout << "Enter your marks: ";
cin >> marks;

	ifPassed(marks);

}
}

void ifPassed(int marks)
{
  if ( marks > 50 ) {
  cout << "You have passed the exam. Congratulations!!!" << endl;
}
if ( marks == 50 ) {
  cout << "Your marks are 50."<< endl;
}

if ( marks < 50 ) {
  cout << "You have failed the exam."<< endl;
}
}

