#include <iostream>
using namespace std;

string studentArrival(int examStartHour, int examStartMinutes, int studentArrivalHour, int studentArrivalMinutes);

main()
{
    int examStartHour, examStartMinutes, studentArrivalHour, studentArrivalMinutes;
    

    cout << "Enter Exam Starting Time (Hours): ";
    cin >> examStartHour;
    cout << "Enter Exam Starting Time (Minutes): ";
    cin >> examStartMinutes;
    cout << "Student's Arrival (Hours): ";
    cin >> studentArrivalHour;
    cout << "Student's Arrival (Minutes): ";
    cin >> studentArrivalMinutes;

    string timeMin = studentArrival(examStartHour, examStartMinutes, studentArrivalHour, studentArrivalMinutes);
    cout << timeMin;
}

string studentArrival(int examStartHour, int examStartMinutes, int studentArrivalHour, int studentArrivalMinutes)
{
    if (studentArrivalHour > examStartHour)
    {
        cout <<"Late" << endl;
      int timeMin, timeHour;
        if (studentArrivalMinutes > examStartMinutes)
        {
             timeMin = studentArrivalMinutes - examStartMinutes;
             timeHour = studentArrivalHour - examStartHour;
             cout << timeHour << " : " << timeMin << "  after the start."; 
        }
         
        else if (studentArrivalMinutes < examStartMinutes)
        {
             timeMin = studentArrivalMinutes + examStartMinutes;
             timeHour = (studentArrivalHour - examStartHour) - 1;
             cout << timeMin << " minutes after the start."; 
        }

        else
        {
            timeMin = 0;
            timeHour = examStartHour - studentArrivalHour;
            cout << timeHour << " : " << timeMin << " hours after the start."; 
        }
        
    }

     else if (studentArrivalHour < examStartHour)
    {
       
      int timeMin, timeHour;
        if (studentArrivalMinutes > examStartMinutes)
        {
             
             timeHour = examStartHour - studentArrivalHour;
             if (timeMin > 30){
             cout <<"Early" << endl;
             timeMin = (60 - studentArrivalMinutes) + examStartMinutes;
             cout << timeMin << " minutes before start." ;}
             if (timeMin <= 30)
             {
                timeMin = 60 - studentArrivalMinutes;
             cout << "On time." << endl << timeMin << " minutes before the start."; 
            }
        }

         
        else if (studentArrivalMinutes < examStartMinutes)
        {
             cout << "Early." << endl;
             timeMin = examStartMinutes - studentArrivalMinutes;
             timeHour = examStartHour - studentArrivalHour;
             cout << timeHour << " : " << timeMin << " hours before the start."; 
        }

        else
        {
            cout << "Early." << endl;
            timeMin = 0;
            timeHour = examStartHour - studentArrivalHour;
            cout << timeHour << " : " << timeMin << " hours before the start."; 
        }
        
    }

     else if (studentArrivalHour == examStartHour)
    {
      int timeMin, timeHour;
        if (studentArrivalMinutes > examStartMinutes)
        {
             timeMin = studentArrivalMinutes - examStartMinutes;
             cout << timeMin << " minutes after the start.";
        }
         
        else if (studentArrivalMinutes < examStartMinutes)
        {   
             timeMin = examStartMinutes - studentArrivalMinutes;
             if (timeMin <= 30)
             {
                cout << "On time." << endl << timeMin << " before start.";
             }
                cout << timeMin << " before start.";
        }

        else
        {
            if (examStartMinutes == studentArrivalMinutes)
            cout << "Ontime."; 
        }
        
    }

    else
    {
        return 0;
    }
    return " ";
}
