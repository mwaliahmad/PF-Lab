#include <iostream>
using namespace std;
float cheapPrice(string time, int distance);
main()
{
    int distance;
    string time;
    cout << "Enter time: ";
    cin >> time;
    cout << "Enter Distance: ";
    cin >> distance;
    float finalprice = cheapPrice(time, distance);
    cout << finalprice;
}
float cheapPrice(string time, int distance)
{
    float price;
    if (distance < 20)
    {
        if (time == "day")
        {
            price = 0.70 + (distance * 0.79);
        }
        else if (time == "night")
        {
            price = 0.70 + (distance * 0.90);
        }
    }
    else if (distance < 100)
    {
        price = distance * 0.09;
    }
    else if (distance >= 100)
    {
        price = distance * 0.06;
    }
    return price;
}
