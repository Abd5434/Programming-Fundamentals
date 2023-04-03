#include <iostream>
#include <cmath>
using namespace std;

char alphabetA_or_a(char a_or_A);

main()
{
   char a_or_A, print_a_or_A;
   cout << "A or a: ";
   cin >> a_or_A;
   print_a_or_A = alphabetA_or_a(a_or_A);
}

char alphabetA_or_a(char a_or_A)
{
    if (a_or_A == 'a'){
   cout << "You have entered small a.";
   }
  
  if (a_or_A != 'a'){
    cout << "You have entered Capital A."; 
    }   

}