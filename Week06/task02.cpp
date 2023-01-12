#include <iostream>
using namespace std;
float discount(string day, string month, float amount);

main()
{
    float amount;
    string day, month;
    cout << "Enter Price: ";
    cin >> amount;
    cout << "Enter Day: ";
    cin >> day;
    cout << "Enter Month: ";
    cin >> month;
    float finalPrice = discount(day, month, amount);
    cout << finalPrice;
}

float discount(string day, string month, float amount)
{
    float afterdiscount;
    if (day == "sunday" && (month == "october" || month == "march" || month == "august"))
    {
        afterdiscount = amount * 0.9;
    }
    else if (day == "monday" && (month == "november" || month == "december"))
    {
        afterdiscount = amount * 0.95;
    }
    else
    {
        afterdiscount = amount;
    }
    return afterdiscount;
}
