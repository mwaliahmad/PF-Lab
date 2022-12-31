#include <iostream>
using namespace std;
void calculateBill(string day, int amount);
main()
{
  string day;
  int amount;
  while(true)
  {
    cout << "Enter Day: ";
    cin >> day; 
    cout << "Enter Amount: ";
    cin >> amount;
    calculateBill(day, amount);
  }
}
void calculateBill(string day, int amount)
{ 
  float discountAmount;
  int final;
  discountAmount = amount * 0.1 ;
  final = amount - discountAmount; 
  if (day == "sunday")
  {  
    cout << "Your Bill is: " << final << endl;
    cout << endl;
  }
  if (day != "sunday")
  {  
    cout << "Your Bill is: " << amount << endl;
    cout << endl; 
  }
}