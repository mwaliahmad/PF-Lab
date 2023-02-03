#include <iostream>
using namespace std;
main()
{
    int size;
    int sum = 0;
    float average = 0;
    cout << "enter size of array: ";
    cin >> size;
    float number[size];
    for (int index = 0; index < size; index++)
    {
        cout << "Enter " << index + 1 << " number : ";
        cin >> number[index];
        sum = sum + number[index];
    }
    average = sum / size;
    cout << "Sum is: " << sum << endl;
    cout << "Average is: " << average << endl;
}