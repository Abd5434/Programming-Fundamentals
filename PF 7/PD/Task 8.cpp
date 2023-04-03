#include <iostream>
using namespace std;

float logisticsPercentage(int num);

main()
{
    int num;
    float logistics;

    cout << "Enter number of values: ";
    cin >> num;

    logistics = logisticsPercentage(num);
    logistics = 0;
}

float logisticsPercentage(int num)
{
    int weight;
    float sumBus = 0, sumTruck = 0, sumTrain = 0;
    float percentageBus, percentageTruck, percentageTrain, avgPrice, totalsum;

    for (int i = 1; i <= num; i = i + 1)
    {
        cout << "Tons of cargo: ";
        cin >> weight;
        if (weight <= 3)
        {
            sumBus = sumBus + weight;
        }

        if (weight > 3 && weight <= 11)
        {
            sumTruck = sumTruck + weight;
        }

        if (weight > 11)
        {
            sumTrain = sumTrain + weight;
        }
    }
    totalsum = sumBus + sumTruck + sumTrain;
    percentageBus = (sumBus * 100) / totalsum;
    percentageTruck = (sumTruck * 100) / totalsum;
    percentageTrain = (sumTrain * 100) / totalsum;
    avgPrice = ((sumBus * 200) + (sumTruck * 175) + (sumTrain * 120)) / totalsum;

    cout << "Average Price : " << avgPrice << endl;
    cout << "Percentage of cargos carried by minibus: " << percentageBus << endl;
    cout << "Percentage of cargos carried by Truck: " << percentageTruck << endl;
    cout << "Percentage of cargos carried by Train: " << percentageTrain << endl;
    return 0;
}
