#include <iostream>
using namespace std;

float percentage(int totalMarks);
string grading(float percentageOfStudent);

main()
{
int subject1_marks, subject2_marks, subject3_marks, subject4_marks, subject5_marks;
string name, grade;
float percentageOfStudent;

cout << "Student's Name: ";
cin >> name;
cout << "Subject 1 Marks: ";
cin >> subject1_marks;
cout << "Subject 2 Marks: ";
cin >> subject2_marks;
cout << "Subject 3 Marks: ";
cin >> subject3_marks;
cout << "Subject 4 Marks: ";
cin >> subject4_marks;
cout << "Subject 5 Marks: ";
cin >> subject5_marks;


   int totalMarks = subject1_marks + subject2_marks + subject3_marks + subject4_marks + subject5_marks;
   percentageOfStudent = percentage(totalMarks);
   grade = grading(percentageOfStudent);

cout << "Student's Name: " << name << endl;
cout << "Total Marks: " << totalMarks << endl;
cout << "Percentage: " << percentageOfStudent << endl;
cout << "Grade: " << grade;
}

float percentage(int totalMarks)
{
   float marksPercentage = (totalMarks * 100) / 500;
   return marksPercentage;
}

string grading(float percentageOfStudent)
{
string grade;
   if(percentageOfStudent >= 90 && percentageOfStudent <= 100)
     {
      grade = "A+"; 
     }

   else if(percentageOfStudent >= 80 && percentageOfStudent <= 89)
     {
      grade = "A"; 
     }

   else if(percentageOfStudent >= 70 && percentageOfStudent <= 79)
     {
      grade = "B+"; 
     }

   else if(percentageOfStudent >= 60 && percentageOfStudent <= 69)
     {
      grade = "B"; 
     }

   else if(percentageOfStudent >= 50 && percentageOfStudent <= 59)
     {
      grade = "C"; 
     }
   else
   {
    return 0;
   }
  return grade;
}