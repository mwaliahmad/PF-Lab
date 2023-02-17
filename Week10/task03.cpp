#include <iostream>

using namespace std;

bool check(int prev, int curr, int next);

main()
{
    int set1[20];
    int set2[20];
    int number;
    cout << "How many elements you want to enter: ";
    cin >> number;

    for (int i = 0; i < number; i++)
    {
        cout << "Enter Number: ";
        cin >> set1[i];
    }
    bool flag = false;
    int set2counter = 0;
    for (int idx = 1; idx < number; idx++)
    {
        flag = check(set1[idx - 1], set1[idx], set1[idx + 1]);
        if (flag == true)
        {
            set2[set2counter] = set1[idx];
            set2counter++;
        }
    }
    cout << set2[set2counter - 1];
}

bool check(int prev, int curr, int next)
{
    if (curr > prev && curr > next)
    {
        return true;
    }
    return false;
}
