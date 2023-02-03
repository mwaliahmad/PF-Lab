#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "enter size of array: ";
    cin >> size;
    float cgpa[size];
    for (int index = 0; index < size; index++)
    {
        cout << "Enter CGPA of " << index + 1 << " student : ";
        cin >> cgpa[index];
    }
    for (int index = 0; index < size; index++)
    {
        cout << cgpa[index] << " ";
    }
}
