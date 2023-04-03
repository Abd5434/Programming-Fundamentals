#include <iostream>
using namespace std;
main()
{

int size_Of_Bag_in_lbs;
int costOfBag;
int area_In_sq_feet_covered_by_bag;
int cost_of_fertilizer_per_pound;
int cost_of_fertilizer_per_sqfeet;

cout << "Enter Bag Size in Pounds: ";
cin >> size_Of_Bag_in_lbs;
cout << "Enter cost of the bag: ";
cin >> costOfBag;
cout << "Enter are covered by each bag in square feet: ";
cin >> area_In_sq_feet_covered_by_bag;
cost_of_fertilizer_per_pound = costOfBag / size_Of_Bag_in_lbs;
cost_of_fertilizer_per_sqfeet = costOfBag / area_In_sq_feet_covered_by_bag;

cout << "__________________________________________" << endl;
cout << "Cost of fertilizer per pound: " <<  cost_of_fertilizer_per_pound << endl;
cout << "Cost of fertilizer per Square feet: " << cost_of_fertilizer_per_sqfeet << endl;



}