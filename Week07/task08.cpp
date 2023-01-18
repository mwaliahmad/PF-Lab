#include <iostream>
using namespace std;
float calculateMoney(int age, float toyPrice, float machinePrice);
int main()
{
    int age;
    float toyPrice, machinePrice;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Price of Machine: ";
    cin >> machinePrice;
    cout << "Enter Price of Toy: ";
    cin >> toyPrice;
    float result = calculateMoney(age, toyPrice, machinePrice);
    float remain = result - machinePrice;

    if (remain > 0)
    {
        cout << "YES !" << endl;
        cout << remain;
    }
    else
    {
        cout << "NO !" << endl;
        cout << -1 * remain;
    }
}

float calculateMoney(int age, float toyPrice, float machinePrice)
{
    int gift = 10;
    int totalgift = 0;
    int toys = 0;

    for (int presentage = 1; presentage <= age; presentage = presentage + 1)
    {
        if (presentage % 2 == 0)
        {
            totalgift = totalgift + (gift - 1);
            gift = gift + 10;
        }
        else
        {
            toys = toys + 1;
        }
    }

    float totalToycost = toys * toyPrice;
    float totalcost = totalToycost + totalgift;

    return totalcost;
}
