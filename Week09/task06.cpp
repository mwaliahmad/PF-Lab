#include <iostream>
using namespace std;
main()
{
    int size;
    int num;
    cout << "enter size of array: ";
    cin >> size;
    int number[size];
    for (int index = 0; index < size; index++)
    {
        cout << "Enter value: ";
        cin >> number[index];
    }
    num = number[0];

    for (int index = 0; index < size; index++)
    {
        if (num > number[index])
        {
            num = number[index];
        }
    }
    cout << num;
}