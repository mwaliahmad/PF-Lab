#include <iostream>

using namespace std;
int set[20];
bool cycleCheck(int cycle, int length);
main()
{
    int length;
    cout << "Enter Array Length: ";
    cin >> length;

    for (int index = 0; index < length; index++)
    {
        cout << "enter value: ";
        cin >> set[index];
    }

    int cycle;
    cout << "Enter cycle number: ";
    cin >> cycle;
    bool result = cycleCheck(cycle, length);
    cout << result;
}

bool cycleCheck(int cycle, int length)
{
    bool flag = false;
    if (cycle > length)
    {
        flag = true;
    }
    else
    {
        int x = 0;

        for (int index = 0; index < cycle; index++)
        {
            if (set[index] == set[(index + cycle)])
            {
                x++;
            }
            else if (set[index] == set[(index + 1)])
            {
                x++;
            }
        }

        if (x == cycle)
        {
            flag = true;
        }
    }
    return flag;
}
