#include <iostream>
using namespace std;
main()
{
    int size;
    int num;
    cout << "Enter Number for Product: ";
    cin >> num;
    cout << "enter size of array: ";
    cin >> size;
    int number[size];
    for (int index = 0; index < size; index++)
    {
        cout << "Enter value: ";
        cin >> number[index];
    }
    for (int index = size - 1; index >= 0; index--)
    {
        cout << num * number[index] << " ";
    }
}