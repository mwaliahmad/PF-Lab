#include <iostream>
using namespace std;
main()
{
    bool isFound = false;
    int size;
    int findnumber;

    cout << "enter size of array: ";
    cin >> size;
    cout << "Enter Number: ";
    cin >> findnumber;
    int number[size];
    for (int index = 0; index < size; index++)
    {
        cout << "Enter " << index + 1 << " number : ";
        cin >> number[index];
    }

    for (int index = 0; index < size; index++)
    {
        if (number[index] == findnumber)
        {
            isFound = true;
            break;
        }
    }
    if (isFound == true)
    {
        cout << "Number Found" << endl;
    }
    else
    {
        cout << "Number not found" << endl;
    }
}