#include <iostream>

using namespace std;

main()
{
    int size;
    cout << "Enter number of boxes: ";
    cin >> size;

    int volume[size * 3];

    for (int i = 0; i < size * 3; i++)
    {
        cout << "Enter dimensions: ";
        cin >> volume[i];
    }
    int totalVolume = 0;
    int single = 0;
    for (int j = 0; j < size * 3; j = j + 3)
    {
        single = volume[j] * volume[j + 1] * volume[j + 2];
        totalVolume = totalVolume + single;
    }

    cout << totalVolume;
}