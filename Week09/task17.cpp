#include <iostream>
using namespace std;
main()
{
    int array1[2] = {1, 10};
    int array2[8] = {2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Result is: ";
    cout << array1[0] << " ";
    for (int idx = 0; idx < 8; idx++)
    {
        cout << array2[idx] << " ";
    }
    cout << array1[1];
}