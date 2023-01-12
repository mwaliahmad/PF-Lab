#include <iostream>
using namespace std;
float checkIncome(string screen, int row, int column);
main()
{
    string screen;
    int row, column;
    cout << "Enter Screen Type: ";
    cin >> screen;
    cout << "Enter Row: ";
    cin >> row;
    cout << "Enter Column: ";
    cin >> column;
    float finalincome = checkIncome(screen, row, column);
    cout << finalincome;
}

float checkIncome(string screen, int row, int column)
{
    float totalincome;
    float totalseat = row * column;
    if (screen == "premiere")
    {
        totalincome = totalseat * 12;
    }
    if (screen == "normal")
    {
        totalincome = totalseat * 7.50;
    }
    if (screen == "discount")
    {
        totalincome = totalseat * 5;
    }
    return totalincome;
}
