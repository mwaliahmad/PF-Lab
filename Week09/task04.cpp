#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "enter size of array: ";
    cin >> size;
    int number[size];
    for (int index = 0; index < size; index++)
    {
        cout << "Enter value: ";
        cin >> number[index];
    }
    for (int idx = size - 1; idx >= 0; idx--)
    {
        cout << number[idx] << " ";
    }
}