#include <iostream>
using namespace std;
void isEligible(int age);
main()
{
  int age;
  while(true)
  {
    isEligible(age);
  }
}  
void isEligible(int age)
{
  cout << "Enter Your Age: ";
  cin >> age;
  if (age >= 18)
  {
    cout << "You are Eligible to vote.";
  }
  if (age < 18)
  {
    cout << "You are NOT Eligible to vote.";
  }
  cout << endl; 
  cout << endl;
}










