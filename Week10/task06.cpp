#include <iostream>

using namespace std;

main()
{
    int size;
    cout << "How many digits you want to enter: ";
    cin >> size;
    int set[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value: ";
        cin >> set[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (set[i] > set[j])
            {
                int temp = set[j];
                set[j] = set[i];
                set[i] = temp;
            }
        }
    }

    for (int idx = 0; idx < size; idx++)
    {
        cout << set[idx] << " ";
    }
}