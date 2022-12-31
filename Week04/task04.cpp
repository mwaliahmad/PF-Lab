#include <iostream>
using namespace std;
void isEven(int number);
void isOdd(int number);

main()
{
  int number;
  while(true)
  {
    cout << "Enter Number: ";
    cin >> number;
    isEven(number);
    isOdd(number); 
    cout << endl;  
  }
}
void isEven(int number)
{ 
  if (number % 2 == 0)
  {
     cout << "Number is EVEN";
  } 
}
void isOdd(int number)
{
  if (number % 2 != 0)
  {
     cout << "Number is ODD";
  }
}