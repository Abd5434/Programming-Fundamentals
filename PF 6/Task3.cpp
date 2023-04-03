#include <iostream>
using namespace std;

string checkTitle(char gender, int age);

main()
{
 char gender;
 int age;
 string title;
 
   cout << "Enter gender: ";
   cin >> gender;
   cout << "Enter age: ";
   cin >> age;

 title = checkTitle(gender,age);
 cout << "Title: " << title;
}

string checkTitle(char gender, int age)
{
string title;
if (gender == 'M' && age >= 16)
  {
     title = "Mr."; 
   }

else if (gender == 'M' && age < 16)
   {
     title = "Master";
   }

else if (gender == 'F' && age >= 16)
   {
     title = "Ms.";
   }
else if (gender == 'F' && age < 16)
   {
     title = "Miss";
   }
return title;
}