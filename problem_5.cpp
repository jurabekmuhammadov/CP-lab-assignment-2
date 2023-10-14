// Write a program which accepts days as integer and display total number of years, months and
// days in it. for example : If user input as 856 days the output should be 2 years 4 months 6
// days

#include <iostream>
using namespace std;

int main()
{
  int days, y, m, d;
  cout << "Enter the number as days: ";
  cin >> days;

  y = days / 365;
  days = days % 365;
  m = days / 30;
  d = days % 30;

  cout << "Years : " << y << "Months : " << m << "Days : " << d;

  return 0;
}