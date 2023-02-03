#include <iostream>
using namespace std;
main()
{
    int size;
    float sum = 0;
    cout << "enter number of resistors: ";
    cin >> size;
    float resistor[size];
    for (int index = 0; index < size; index++)
    {
        cout << "Enter resistance: ";
        cin >> resistor[index];
        sum = sum + resistor[index];
    }
    cout << "Total resistance is: " << sum;
}