#include <iostream>
using namespace std;
int add (int number1, int number2);
float division(float number1, float number2);
int isGreater(int num1, int num2);
main()
{
  int number1, number2, result;
  cout << "Enter Number 1: ";
  cin >> number1;
  cout << "Enter Number 2: ";
  cin >> number2;
  result = isGreater(number1, number2);
  cout << result << " is the greater number.";
}

int add (int number1, int number2)
{
  int sum = number1 + number2;
  return sum;
}

float division(float number1, float number2)
{
  float division = number1 / number2;
  return division;
}

int isGreater(int num1, int num2)
{
  int result;
  if(num1 > num2)
  {
    return num1;
  }
  if (num1 < num2)
  { 
    return num2;
  }

  return 0;

}