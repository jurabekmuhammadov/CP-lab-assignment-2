// Write a program to ask radius of circle and calculate the area.Formula : Area = pi *r *r where
// r is radius of circle.pi = 3.14

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  const double PI = 3.14;
  double r;
  double a;

  cout << "Enter the radius of circle: ";
  cin >> r;

  a = PI * pow(r, 2);

  cout << "The area of circle is " << a;

  return 0;
}