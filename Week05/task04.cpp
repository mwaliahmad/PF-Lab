#include <iostream>
using namespace std;
string evenodd(int number);
main()
{
  while(true)
  {
    int num;
    string result;
    cout << "Enter Five Digit Number: ";
    cin >> num;
    result = evenodd(num);
    if(result == "evenish")
    {
      cout << "Number is Evenish" << endl;
    }
    if(result == "oddish")
    {
      cout << "Number is Oddish" << endl;
    }
  }
}

string evenodd(int number)
{
  
  int sum = number%10 + (number/10)%10 + (number/100)%10 + (number / 1000 ) %10 + (number/10000) %10;
  int remainder = sum % 2;
  if(remainder == 0)
  {
   return "evenish";
  } 
  if(remainder != 0)
  {
   return "oddish";
  }
    return 0;
}

