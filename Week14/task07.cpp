#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;
void rotate(int arr[], int size, int n);

main()
{
    int size = 10;
    int n;
    int array[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Enter n position: ";
    cin >> n;
    rotate(array, size, n);
}

void rotate(int arr[], int size, int n)
{
    for (int j = 0; j < size; j++)
    {
        cout << arr[(j + n) % size] << " ";
    }
}
