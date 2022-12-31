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
  float discountOnSunday;
  float sundayFinal;
  discountOnSunday = amount * 0.1 ;
  sundayFinal = amount - discountOnSunday; 
  float discountOnOtherDays;
  float final;
  discountOnOtherDays = amount * 0.5 ;
  final = amount - discountOnOtherDays;
  if (day == "sunday")
  {  
    cout << "Your Bill is: " << sundayFinal << endl;
    cout << endl;
  }
  if (day == "monday")
  { 
    cout << "Your Bill is: " << final << endl;
    cout << endl; 
  }
if (day == "tuesday")
  { 
    cout << "Your Bill is: " << final << endl;
    cout << endl; 
  }
if (day == "wednesday")
  { 
    cout << "Your Bill is: " << final << endl;
    cout << endl; 
  }
if (day == "thursday")
  { 
    cout << "Your Bill is: " << final << endl;
    cout << endl; 
  }
if (day == "friday")
  { 
    cout << "Your Bill is: " << final << endl;
    cout << endl; 
  }
if (day == "saturday")
  { 
    cout << "Your Bill is: " << final << endl;
    cout << endl; 
  }

}