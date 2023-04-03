#include <iostream>
using namespace std;

string whereIsPoint(int h, int coordinateX, int coordinateY);

main()
{
  int coordinateX, coordinateY, h;
  string point;

  cout << "Co-ordinate X: ";
  cin >> coordinateX;
  cout << "Co-ordinate Y: ";
  cin >> coordinateY;
  cout << "Value of h: ";
  cin >> h;

  point = whereIsPoint(h, coordinateX, coordinateY);
  cout << point;
}

string whereIsPoint(int h, int coordinateX, int coordinateY)
{
    string point; 
    int x, y;

    x = coordinateX*h;
    y = coordinateY*h;

    if ( ( x < (h*2) && y < (h*2) ) || ((x > (h*2) && x < (h*4)) && y < (h*8)) || ((x > (h*4) && x < (h*6)) && y < (h*2)) || ( x > 0 && (y < (2*h) && (y >0))  ))
     {
       point = "Inside.";
     }

     else if ((x == 0 && y == 0) || (x <= (2*h) && ( y == (2*h)))  || ( x == (2*h) && ( y <= (8*h) && y >= (2*h) )) || y == (8*h) && ( x >= (2*h) && x <= (4*h)) || ( x == (4*h) && ( y <= (8*h) && y >= (2*h) )) || ((x <= (6*h) && x >= (4*h)) && ( y == (2*h))) || (x == 0 && ((y == 0) && (y <= (2*h)))) || ( x <= (6*h) && y == 0 ))
     {
       point = "Border.";
     }

     else 
     {
       point = "Outside.";
     }
     return point;
}