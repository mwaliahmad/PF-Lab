#include <iostream>

using namespace std;
int weeks[20];
int check(int number);
main()
{
    int number;
    cout << "Enter number of Weeks: ";
    cin >> number;

    for (int idx = 0; idx < number; idx++)
    {
        cout << "Enter miles ran on Week: ";
        cin >> weeks[idx];
    }
    int result = check(number);
    cout << result;
}

int check(int number)
{
    int count = 0;
    for (int i = 1; i < number; i++)
    {
        if (weeks[i] > weeks[i - 1])
            count++;
    }
    return count;
}
