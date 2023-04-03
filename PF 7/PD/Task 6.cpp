#include <iostream>
using namespace std;

void hospital(int period);

main()
{
    int period;
    cout << "No. of days: ";
    cin >> period;

    hospital(period);
}

void hospital(int period)
{
    int noOfPatients, treatedPatients = 0, untreatedPatients = 0;
    int doctors = 7;

    for (int x = 1; x <= period; x = x + 1)
    {
        cout << "Patients: ";
        cin >> noOfPatients;
        if ((x % 3 == 0) && (noOfPatients > doctors))
        {
            doctors = doctors + 1;
        }

        if(noOfPatients > doctors)
        {
        untreatedPatients = untreatedPatients + (noOfPatients - doctors);
        treatedPatients = treatedPatients + doctors;
        }

        else
        {
            treatedPatients = treatedPatients + noOfPatients;
        }
    }
    cout << "Treated Patients: " << treatedPatients << endl;
    cout << "Untreated Patients: " << untreatedPatients << endl;
}
