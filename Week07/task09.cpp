#include <iostream>
using namespace std;
float calculatePrice(float money, int year);
int main()
{
    int year;
    float money;
    cout << "Enter Your Year: ";
    cin >> year;
    cout << "Enter Money: ";
    cin >> money;

    float result = calculatePrice(money, year);
    float remain = result - money;

    if (remain < 0)
    {
        cout << "Yes! He will live a carefree life and will have " << -1 * remain << " dollars left.";
    }
    else if (remain > 0)
    {
        cout << "He will need " << remain << " dollars to survive.";
    }
}
float calculatePrice(float money, int year)
{
    int age = 18;
    float evenmoney = 0;
    float oddmoney = 0;
    for (int startyear = 1800; startyear <= year; startyear++)
    {
        if (startyear % 2 == 0)
        {
            evenmoney = evenmoney + 12000;
        }
        else
        {
            oddmoney = oddmoney + 12000 + (50 * age);
        }
        age++;
    }

    float total = evenmoney + oddmoney;
    return total;
}
