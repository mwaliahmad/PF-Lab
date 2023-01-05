#include <iostream>

using namespace std;
bool user(int input);
main()
{
  int input;
  
  cout << "Enter 3 digit Number: ";
  cin >> input;
  bool result = user(input); 
  if(result == true)
  {
    cout << "Number is symmetrical";
  }
  if(result == false)
  {
    cout << "Number is not symmetrical";
  }
}
bool user(int input)
{
  int a, b;  
  a = input/100;
  b = input % 10;
  if(a==b)
  {
    return true;
  }
  if(a!=b)
  {
    return false;
  }
  return 0;
}