// Write a program which takes length in meters as input and convert it to inches and display it
// as output.1 meter = 39.3701 inches

#include <iostream>
using namespace std;

int main()
{
  float meterToInch;
  const double inchPerMeter = 39.3701;

  cout << "Enter the meter: ";
  cin >> meterToInch;

  meterToInch = meterToInch * inchPerMeter;

  cout << "Entered number is in inches: " << meterToInch;

  return 0;
}