#include <iostream>
using namespace std;
void add(int num1, int num2);
void product(int num1, int num2);
void subtract(int num1, int num2);
void division(int num1, int num2);
main()
{
  int num1;
  int num2;
  char operation;
  while(true)
  {
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;
    cout << "Enter Operation(+,-,*,/): ";
    cin >> operation; 
    cout <<endl;
    if(operation == '+')
    {
      add(num1, num2); 
    }
    if(operation == '-')
    {
      subtract(num1, num2);    	
    }
    if(operation == '*')
    {
      product(num1, num2);	
    }
    if(operation == '/')
    {
      division(num1, num2); 	
    }
    cout << endl;
  }  
}
void add(int num1, int num2)
{
  int sum;
  sum = num1 + num2;
  cout << "Sum: " << sum;
  cout << endl;
}
void product(int num1, int num2)
{
  int product;
  product = num1 * num2;
  cout << "Product: " << product;
  cout << endl;
}
void subtract(int num1, int num2)
{
  int subtract;
  subtract = num1 - num2;
  cout << "Subtract: " << subtract;
  cout << endl;
}
void division(int num1, int num2)
{
  int division;
  division = num1 / num2;
  cout << "Division: " << division;
  cout << endl;
}
