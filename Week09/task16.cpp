#include <iostream>
using namespace std;
main()
{
    float money[4];
    bool remarks = false;
    float price;
    float total, quarter, dime, nickel, pennie;
    cout << "Enter Price: ";
    cin >> price;
    for (int idx = 0; idx < 4; idx++)
    {
        cin >> money[idx];
    }
    quarter = money[0] * 0.25;
    dime = money[1] * 0.10;
    nickel = money[2] * 0.05;
    pennie = money[3] * 0.01;
    total = quarter + dime + nickel + pennie;
    if (total >= price)
    {
        remarks = true;
    }
    cout << remarks;
}