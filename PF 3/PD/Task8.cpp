#include <iostream>
using namespace std;
main()
{
float veg_price_per_kg;
float fruit_price_per_kg;
int kg_of_veg;
int kg_of_fruits;
float veg_cost;
float fruit_cost;
float total_cost;
float total_cost_in_pkr;

cout << "Enter price of Vegetables: ";
cin >> veg_price_per_kg;
cout << "Enter price of Fruits: ";
cin >> fruit_price_per_kg;
cout << "Enter Kgs of Vegetables: ";
cin >> kg_of_veg;
cout << "Enter Kgs of Fruits: ";
cin >> kg_of_fruits;

veg_cost = kg_of_veg * veg_price_per_kg;
fruit_cost = kg_of_fruits * fruit_price_per_kg;
total_cost = veg_cost + fruit_cost;
total_cost_in_pkr = total_cost / 1.94;
 
cout << "Total cost in pkr: " << total_cost_in_pkr;
}