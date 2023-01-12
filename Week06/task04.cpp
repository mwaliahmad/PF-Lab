#include <iostream>
using namespace std;
string checkSpeed(float speed);
main()
{
    string title;
    float speed;
    cout << "Enter Speed";
    cin >> speed;
    title = checkSpeed(speed);
    cout << title;
}

string checkSpeed(float speed)
{
    string result;
    if (speed <= 10)
    {
        result = "Slow";
    }
    else if (speed > 10 && speed <= 50)
    {
        result = "Average";
    }
    else if (speed > 50 && speed <= 150)
    {
        result = "Fast";
    }
    else if (speed > 150 && speed <= 1000)
    {
        result = "Ultra Fast";
    }
    else
    {
        result = "Extremly fast";
    }
    return result;
}
