// Write a program which asks for a number input from the keyboard . Add 40 to the number and
// then divide it by 5. Now, subtract 6 from the number and then multiply the resultant value by
// 10. Display the result.

#include <iostream>
using namespace std;

int main()
{
  double number;

  cout << "Enter any number: ";
  cin >> number;

  number = ((((number + 40) / 5) - 6) * 10);
  cout << "The result of the program is: " << number;

  return 0;
}